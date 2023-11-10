#include <iostream>
#include "TemperaturaController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


TemperaturaController::TemperaturaController() {
	this->objConexion = gcnew SqlConnection();

}


//Métodos propios de BD:
void TemperaturaController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, Sesion de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20212459;User Id=a20212459;Password=dxMPsqiw";	//tiene los datos de mi B.D. propia Piero Urbano
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void TemperaturaController::cerrarConexionBD() {
	this->objConexion->Close();
}

Temperatura^ TemperaturaController::buscarConfiguracionxCodigo(int codigo) {
	int codigoBuscar;		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
	double min;
	double max;
	double actual;

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Temperaturas where codigo=" + codigo; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		codigoBuscar = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		min = safe_cast<double>(objData[1]);
		max = safe_cast<double>(objData[2]);
		actual = safe_cast<double>(objData[3]);
	}
	ConfigDatos^ objConfigDatos;
	Temperatura^ objetoTemperatura = gcnew Temperatura(codigoBuscar, min, max, actual,objConfigDatos);
	cerrarConexionBD();	//cierro la conexión
	return objetoTemperatura;


}

List<Temperatura^>^ TemperaturaController::buscarAll() {
	List<Temperatura^>^ listaTemperatura = gcnew List<Temperatura^>();
	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Temperaturas"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		double min = safe_cast<double>(objData[1]);
		double max = safe_cast<double>(objData[2]);
		double actual = safe_cast<double>(objData[3]);
		ConfigDatos^ objConfigDatos;
		Temperatura^ objTemperatura = gcnew Temperatura(codigo, min, max, actual, objConfigDatos);
		listaTemperatura->Add(objTemperatura);
	}
	cerrarConexionBD();	//cierro la conexión
	return listaTemperatura;
}


void TemperaturaController::actualizarTemperatura(Temperatura^ objConfigurar) {			//editar una sesión
	TemperaturaController^ objController = gcnew TemperaturaController();
	List<Temperatura^>^ objPuertasYVentanas = objController->buscarAll();

	int codigo = objConfigurar->getCodigo();
	double min = objConfigurar->getMin();
	double max = objConfigurar->getMax();
	double actual = objConfigurar->getActual();

	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update TH_Temperaturas set minimo=" + min + ", maximo=" + max + ", actual=" + actual + " where codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}