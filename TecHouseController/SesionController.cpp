#include <iostream>
#include "SesionController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


SesionController::SesionController() {
	this->objConexion = gcnew SqlConnection();

}

int SesionController::verificarSesion(String^ ID, String^ Clave) {
	int valor = 0;
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		/*encontrar*/
		String^ idSesion = listaSesiones[i]->getID();
		String^ claveSesion = listaSesiones[i]->getClave();
		if (idSesion == ID && claveSesion == Clave) {
			valor = 1;
			break;
		}
	}
	return valor;
}

//Métodos propios de BD:
void SesionController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, Sesion de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20212459;User Id=a20212459;Password=dxMPsqiw";	//tiene los datos de mi B.D. propia Piero Urbano
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void SesionController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<Sesion^>^ SesionController::buscarAll() {
	List<Sesion^>^ listaSesions = gcnew List<Sesion^>();

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Sesiones"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		int CodCasa = safe_cast<int>(objData[1]);
		String^ ID = safe_cast<String^>(objData[2]);
		String^ Clave = safe_cast<String^>(objData[3]);				//los varchar en BD son los string aquí
		List < Usuario^>^ listaUsuarios;
		Pantalla^ objPantalla;
		Sesion^ objSesion = gcnew Sesion(codigo, CodCasa,ID,Clave,listaUsuarios,objPantalla);
		listaSesions->Add(objSesion);

	}
	cerrarConexionBD();	//cierro la conexión
	return listaSesions;
}

void SesionController::eliminarSesionFisicaxCodCasa(int CodCasa) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete TH_Sesiones where codigo=" + CodCasa;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();

	cerrarConexionBD();
}

void SesionController::eliminarSesionFisica(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete TH_Sesiones where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();

	cerrarConexionBD();
}

void SesionController::agregarSesion(Sesion^ objSesion) {
	int CodCasa = objSesion->getCodCasa();
	String^ ID = objSesion->getID();
	String^ Clave = objSesion->getClave();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "insert into TH_Sesiones(codCasa,ID,Clave) values (" + CodCasa + ",'" + ID + "','" + Clave + "')"; //todo varchar va entre comillas simples ','
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->ExecuteNonQuery();	//notar que el Connection y el CommandText son al revés que en select
	cerrarConexionBD();
}

int SesionController::buscarCodigoSesionxID(String^ ID) {
	int codigo=0;
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		if (listaSesiones[i]->getID() == ID) {
			codigo= listaSesiones[i]->getCodigo();
			break;
		}
	}
	return codigo;
}


Sesion^ SesionController::buscarSesionxCodigo(int codigo) {
	Sesion^ objSesion = gcnew Sesion();
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		if (listaSesiones[i]->getCodigo() == codigo) {
			return listaSesiones[i];
		}
	}
	return objSesion;
}

int SesionController::buscarCodigoSesionxCodCasa(int CodCasa) {
	int codigo=0;
	List<Sesion^>^ listaSesiones = buscarAll();
	for (int i = 0; i < listaSesiones->Count; i++) {
		if (listaSesiones[i]->getCodCasa() == CodCasa) {
			codigo=listaSesiones[i]->getCodigo();
			break;
		}
	}
	return codigo;
}

void SesionController::actualizarSesion(Sesion^ objSesion) {			//editar una sesión
	int codigo = objSesion->getCodigo();
	int CodCasa = objSesion->getCodCasa();
	String^ ID = objSesion->getID();
	String^ Clave = objSesion->getClave();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update TH_Sesiones set codCasa=" + CodCasa + ", ID='" + ID + "', Clave='" + Clave + "' where codigo = " + codigo+1;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
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