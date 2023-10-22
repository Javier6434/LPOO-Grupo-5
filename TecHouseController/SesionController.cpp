#include <iostream>
#include "SesionController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


SesionController::SesionController() {

}

int SesionController::verificarSesion(String^ ID, String^ Clave) {
	int valor = 0;
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Sesion^>^ listaSesionEncontrada = gcnew List<Sesion^>();
	array<String^>^ lineas = File::ReadAllLines("Sesiones.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoSesion = Convert::ToInt32(datos[0]);
		int CodCasaSesion = Convert::ToInt32(datos[1]);
		String^ IDSesion = datos[2];
		String^ ClaveSesion = datos[3];
		if (IDSesion->Contains(ID) && ClaveSesion->Contains(Clave)) {
			valor = 1;
		}
	}
	return valor;
}

List<Sesion^>^ SesionController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Sesion^>^ listaSesionesEncontradas = gcnew List<Sesion^>();
	array<String^>^ lineas = File::ReadAllLines("Sesiones.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoSesion = Convert::ToInt32(datos[0]);
		int CodCasaSesion = Convert::ToInt32(datos[1]);
		String^ IDSesion = datos[2];
		String^ ClaveSesion = datos[3];
		/*aquí había un if, pero esta función busca TODO*/
		Sesion^ objSesion = gcnew Sesion(codigoSesion, CodCasaSesion, IDSesion, ClaveSesion, nullptr, nullptr);
		listaSesionesEncontradas->Add(objSesion);
	}
	return listaSesionesEncontradas;
}

void SesionController::escribirArchivo(List<Sesion^>^ listaSesiones) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaSesiones->Count); //cuento cuantos proyectos o líneas hay
	for (int i = 0; i < listaSesiones->Count; i++) {

		Sesion^ objeto = listaSesiones[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getCodCasa() + ";" + objeto->getID() + ";" + objeto->getClave();
	}
	File::WriteAllLines("Sesiones.txt", lineasArchivo);
}

void SesionController::eliminarSesionFisica(int codigo) {
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		/*encontrar*/
		if (listaSesiones[i]->getCodigo() == codigo) {
			listaSesiones->RemoveAt(i);
		}
	}
	escribirArchivo(listaSesiones);
}

void SesionController::eliminarSesionFisicaxCodCasa(int CodCasa) {
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		/*encontrar*/
		if (listaSesiones[i]->getCodCasa() == CodCasa) {
			listaSesiones->RemoveAt(i);
		}
	}
	escribirArchivo(listaSesiones);
}

void SesionController::agregarSesion(Sesion^ objSesion) {
	List<Sesion^>^ listaSesiones = buscarAll();
	listaSesiones->Add(objSesion);
	escribirArchivo(listaSesiones);
}

int SesionController::buscarCodigoSesionxID(String^ ID) {
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		if (listaSesiones[i]->getID() == ID) {
			return listaSesiones[i]->getCodigo();
		}
	}
}


Sesion^ SesionController::buscarSesionxCodigo(int codigo) {
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		if (listaSesiones[i]->getCodigo() == codigo) {
			return listaSesiones[i];
		}
	}
}

int SesionController::buscarCodigoSesionxCodCasa(int CodCasa) {
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		if (listaSesiones[i]->getCodCasa() == CodCasa) {
			return listaSesiones[i]->getCodigo();
		}
	}
}

void SesionController::actualizarSesion(Sesion^ objSesion) {
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		if (listaSesiones[i]->getCodigo() == objSesion->getCodigo()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaSesiones[i]->setCodCasa(objSesion->getCodCasa());
			listaSesiones[i]->setID(objSesion->getID());
			listaSesiones[i]->setClave(objSesion->getClave());
			break;
		}
	}
	escribirArchivo(listaSesiones);
}
//
////List<String^>^ SesionController::obtenerDistritos() {
////	List<Sesion^>^ listaSesiones = buscarAll();
////	List<String^>^ listaDistritos = gcnew List<String^>();
////	for (int i = 0; i < listaSesiones->Count; i++) {
////		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de busqueda*/
////		String^ distrito = listaSesiones[i]->getDistrito();
////		/*Voy a buscarlo en la listaDepartamentos*/
////		int existe = 0;
////		for (int j = 0; j < listaDistritos->Count; j++) {
////			if (listaDistritos[j]->Contains(distrito)) {
////				existe = 1;
////			}
////		}
////		if (existe == 0) {
////			listaDistritos->Add(distrito);
////		}
////	}
////	return listaDistritos;
////}