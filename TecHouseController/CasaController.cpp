#include <iostream>
#include "CasaController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


CasaController::CasaController(){

}

List<Casa^>^ CasaController::buscarCasas(String^ Departamento, String^ Distrito) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Casa^>^ listaCasasEncontrados = gcnew List<Casa^>();
	array<String^>^ lineas = File::ReadAllLines("Casas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoCasa = Convert::ToInt32(datos[0]);
		String^ DepartamentoCasa = datos[1];
		String^ DistritoCasa = datos[2];
		String^ avenidaCasa = datos[3];
		int cantAmbientesCasa = Convert::ToInt32(datos[4]);
		if (DepartamentoCasa->Contains(Departamento) && DistritoCasa->Contains(Distrito)) {
			Casa^ objCasa = gcnew Casa(codigoCasa, DepartamentoCasa, DistritoCasa, avenidaCasa, cantAmbientesCasa);
			listaCasasEncontrados->Add(objCasa);
		}
	}
	return listaCasasEncontrados;
}

List<Casa^>^ CasaController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Casa^>^ listaCasasEncontrados = gcnew List<Casa^>();
	array<String^>^ lineas = File::ReadAllLines("Casas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoCasa = Convert::ToInt32(datos[0]);
		String^ DepartamentoCasa = datos[1];
		String^ DistritoCasa = datos[2];
		String^ avenidaCasa = datos[3];
		int cantAmbientesCasa = Convert::ToInt32(datos[4]);
		/*aquí había un if, pero esta función busca TODO*/
		Casa^ objCasa = gcnew Casa(codigoCasa, DepartamentoCasa, DistritoCasa, avenidaCasa, cantAmbientesCasa);
		listaCasasEncontrados->Add(objCasa);
	}
	return listaCasasEncontrados;
}

void CasaController::escribirArchivo(List<Casa^>^ listaCasas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCasas->Count); //cuento cuantos proyectos o líneas hay
	for (int i = 0; i < listaCasas->Count; i++) {

		Casa^ objeto = listaCasas[i];

		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getDepartamento() + ";" + objeto->getDistrito() + ";" + objeto->getAvenida() + ";" + objeto->getcantAmbientes();
	}
	File::WriteAllLines("Casas.txt", lineasArchivo);
}

void CasaController::eliminarCasaFisica(int codigo) {
	List<Casa^>^ listaCasas = buscarAll();
	for (int i = 0; i < listaCasas->Count; i++) {
		/*encontrar*/
		if (listaCasas[i]->getCodigo() == codigo) {
			listaCasas->RemoveAt(i);
		}
	}
	escribirArchivo(listaCasas);
}

void CasaController::agregarCasa(Casa^ objCasa) {
	List<Casa^>^ listaCasas = buscarAll();
	listaCasas->Add(objCasa);
	escribirArchivo(listaCasas);
}

Casa^ CasaController::buscarCasaxCodigo(int codigo) {
	List<Casa^>^ listaCasas = buscarAll();
	for (int i = 0; i < listaCasas->Count; i++) {
		if (listaCasas[i]->getCodigo() == codigo) {
			return listaCasas[i];
		}
	}
}

void CasaController::actualizarCasa(Casa^ objCasa) {
	List<Casa^>^ listaCasas = buscarAll();
	for (int i = 0; i < listaCasas->Count; i++) {
		if (listaCasas[i]->getCodigo() == objCasa->getCodigo()) {
			/*Voy a actualizar cada dato de ese proyecto en la lista*/
			listaCasas[i]->setDepartamento(objCasa->getDepartamento());
			listaCasas[i]->setDistrito(objCasa->getDistrito());
			listaCasas[i]->setAvenida(objCasa->getAvenida());
			listaCasas[i]->setcantAmbientes(objCasa->getcantAmbientes());
			break;
		}
	}
	escribirArchivo(listaCasas);
}

List<String^>^ CasaController::obtenerDepartamentos() {
	List<Casa^>^ listaCasas = buscarAll();
	List<String^>^ listaDepartamentos = gcnew List<String^>();
	for (int i = 0; i < listaCasas->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de busqueda*/
		String^ departamento = listaCasas[i]->getDepartamento();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaDepartamentos->Count; j++) {
			if (listaDepartamentos[j]->Contains(departamento)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaDepartamentos->Add(departamento);
		}
	}
	return listaDepartamentos;
}

List<String^>^ CasaController::obtenerDistritos() {
	List<Casa^>^ listaCasas = buscarAll();
	List<String^>^ listaDistritos = gcnew List<String^>();
	for (int i = 0; i < listaCasas->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de busqueda*/
		String^ distrito = listaCasas[i]->getDistrito();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaDistritos->Count; j++) {
			if (listaDistritos[j]->Contains(distrito)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaDistritos->Add(distrito);
		}
	}
	return listaDistritos;
}