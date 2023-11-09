#include <iostream>
#include "CasaController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


CasaController::CasaController(){
	this->objConexion = gcnew SqlConnection();
}

void CasaController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, Casa de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20212459;User Id=a20212459;Password=dxMPsqiw";	//tiene los datos de mi B.D. propia Piero Urbano
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void CasaController::cerrarConexionBD() {
	this->objConexion->Close();
}


List<Casa^>^ CasaController::buscarCasas(String^ Departamento, String^ Distrito) {
	List<Casa^>^ listaCasas = gcnew List<Casa^>();

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Casas where departamento like '%" + Departamento + "%' and distrito like '%" + Distrito + "%'"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		String^ Departamento = safe_cast<String^>(objData[1]);
		String^ Distrito = safe_cast<String^>(objData[2]);
		String^ Avenida = safe_cast<String^>(objData[3]);
		int cantAmbientes = safe_cast<int>(objData[4]);		//todos son con safe_cast
		Casa^ objCasa = gcnew Casa(codigo, Departamento, Distrito, Avenida, cantAmbientes);
		listaCasas->Add(objCasa);
	}
	cerrarConexionBD();	//cierro la conexión
	return listaCasas;
}

List<Casa^>^ CasaController::buscarAll() {
	List<Casa^>^ listaCasas = gcnew List<Casa^>();

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Casas"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		String^ Departamento = safe_cast<String^>(objData[1]);
		String^ Distrito = safe_cast<String^>(objData[2]);
		String^ Avenida = safe_cast<String^>(objData[3]);
		int cantAmbientes = safe_cast<int>(objData[4]);		//todos son con safe_cast
		Casa^ objCasa = gcnew Casa(codigo, Departamento,Distrito,Avenida,cantAmbientes);
		listaCasas->Add(objCasa);
	}
	cerrarConexionBD();	//cierro la conexión
	return listaCasas;
}


void CasaController::eliminarCasaFisica(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete TH_Casas where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void CasaController::agregarCasa(Casa^ objCasa) {
	int codigo = objCasa->getCodigo();
	String^ Departamento = objCasa->getDepartamento();
	String^ Distrito = objCasa->getDistrito();
	String^ Avenida = objCasa->getAvenida();
	int cantAmbientes = objCasa ->getcantAmbientes();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();	//la tabla de usuarios se llama TH_Usuario
	objSentencia->CommandText = "insert into TH_Casas(Departamento,Distrito,Avenida,cantAmbientes) values ('" + Departamento + "','" + Distrito + "','" + Avenida + "'," + cantAmbientes + ")"; //todo varchar va entre comillas simples ', '
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->ExecuteNonQuery();	//notar que el Connection y el CommandText son al revés que en select
	cerrarConexionBD();
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
	int codigo = objCasa->getCodigo();
	String^ Departamento = objCasa->getDepartamento();
	String^ Distrito = objCasa->getDistrito();
	String^ Avenida = objCasa->getAvenida();
	int cantAmbientes = objCasa->getcantAmbientes();
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update TH_Casas set Departamento='" + Departamento + "', Distrito='" + Distrito + "', Avenida='" + Avenida + "', cantAmbientes=" + cantAmbientes + "where codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
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