#include <iostream>
#include "UsuarioController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


UsuarioController::UsuarioController() {

}

List<Usuario^>^ UsuarioController::buscarUsuarios(String^ Tipo, String^ Nombre) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoUsuario = Convert::ToInt32(datos[0]);
		String^ TipoUsuario = datos[1];
		String^ NombreUsuario = datos[2];
		String^ ApellidoMaternoUsuario = datos[3];
		String^ ApellidoPaternoUsuario = datos[4];
		String^ FechaDeNacimientoUsuario = datos[5];
		if ((TipoUsuario->Contains(Tipo)) && (NombreUsuario->Contains(Nombre))) {
			Usuario^ objUsuario = gcnew Usuario(codigoUsuario, TipoUsuario, NombreUsuario, ApellidoMaternoUsuario, ApellidoPaternoUsuario, FechaDeNacimientoUsuario);
			listaUsuariosEncontrados->Add(objUsuario);
		}
	}
	return listaUsuariosEncontrados;
}

List<Usuario^>^ UsuarioController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuarios.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoUsuario = Convert::ToInt32(datos[0]);
		String^ TipoUsuario = datos[1];
		String^ NombreUsuario = datos[2];
		String^ ApellidoMaternoUsuario = datos[3];
		String^ ApellidoPaternoUsuario = datos[4];
		String^ FechaDeNacimientoUsuario = datos[5];
		/*aquí había un if, pero esta función busca TODO*/
		Usuario^ objUsuario = gcnew Usuario(codigoUsuario, TipoUsuario, NombreUsuario, ApellidoMaternoUsuario, ApellidoPaternoUsuario, FechaDeNacimientoUsuario);
		listaUsuariosEncontrados->Add(objUsuario);
	}
	return listaUsuariosEncontrados;
}

void UsuarioController::escribirArchivo(List<Usuario^>^ listaUsuarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuarios->Count); //cuento cuantos proyectos o líneas hay
	for (int i = 0; i < listaUsuarios->Count; i++) {

		Usuario^ objeto = listaUsuarios[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getTipo() + ";" + objeto->getNombre() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getFechaDeNacimiento();
	}
	File::WriteAllLines("Usuarios.txt", lineasArchivo);
}

void UsuarioController::eliminarUsuarioFisica(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		/*encontrar*/
		if (listaUsuarios[i]->getCodigo() == codigo) {
			listaUsuarios->RemoveAt(i);
		}
	}
	escribirArchivo(listaUsuarios);
}

void UsuarioController::agregarUsuario(Usuario^ objUsuario) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	listaUsuarios->Add(objUsuario);
	escribirArchivo(listaUsuarios);
}

String^ UsuarioController::buscarTipoUsuarioxCodigo(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo) {
			return listaUsuarios[i]->getTipo();
		}
	}
}

Usuario^ UsuarioController::buscarUsuarioxCodigo(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo) {
			return listaUsuarios[i];
		}
	}
}

void UsuarioController::actualizarUsuario(Usuario^ objUsuario) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == objUsuario->getCodigo()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaUsuarios[i]->setCodigo(objUsuario->getCodigo());
			listaUsuarios[i]->setTipo(objUsuario->getTipo());
			listaUsuarios[i]->setNombre(objUsuario->getNombre());
			listaUsuarios[i]->setApellidoMaterno(objUsuario->getApellidoMaterno());
			listaUsuarios[i]->setApellidoPaterno(objUsuario->getApellidoPaterno());
			listaUsuarios[i]->setFechaDeNacimiento(objUsuario->getFechaDeNacimiento());
			break;
		}
	}
	escribirArchivo(listaUsuarios);
}

List<String^>^ UsuarioController::obtenerTipos() {
	List<Usuario^>^ listaUsuarios = buscarAll();
	List<String^>^ listaTipos = gcnew List<String^>();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de busqueda*/
		String^ tipo = listaUsuarios[i]->getTipo();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaTipos->Count; j++) {
			if (listaTipos[j]->Contains(tipo)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaTipos->Add(tipo);
		}
	}
	return listaTipos;
}

List<String^>^ UsuarioController::obtenerNombres() {
	List<Usuario^>^ listaUsuarios = buscarAll();
	List<String^>^ listaNombres = gcnew List<String^>();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de busqueda*/
		String^ nombre = listaUsuarios[i]->getNombre();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaNombres->Count; j++) {
			if (listaNombres[j]->Contains(nombre)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaNombres->Add(nombre);
		}
	}
	return listaNombres;
}