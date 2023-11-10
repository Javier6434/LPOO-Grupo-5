#include <iostream>
#include "ConfigPyVController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


ConfigPyVController::ConfigPyVController() {
	this->objConexion = gcnew SqlConnection();

}


//Métodos propios de BD:
void ConfigPyVController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, Sesion de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20212459;User Id=a20212459;Password=dxMPsqiw";	//tiene los datos de mi B.D. propia Piero Urbano
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void ConfigPyVController::cerrarConexionBD() {
	this->objConexion->Close();
}

ConfigPuertasYVentanas^ ConfigPyVController::buscarConfiguracionxCodigo(int codigo) {
	int codigoBuscar;		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
	int CodCasa;
	int estadoAutomatizacion;
	int gradoAutomatizacion;

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_ConfigPuertasYVentanas where codigo=" + codigo; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		codigoBuscar = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		CodCasa = safe_cast<int>(objData[1]);
		estadoAutomatizacion = safe_cast<int>(objData[2]);
		gradoAutomatizacion = safe_cast<int>(objData[3]);
	}
	ConfigPuertasYVentanas^ objetoConfigPuertasYVentanas = gcnew ConfigPuertasYVentanas(codigoBuscar, CodCasa, estadoAutomatizacion, gradoAutomatizacion);
	cerrarConexionBD();	//cierro la conexión
	return objetoConfigPuertasYVentanas;


}

List<ConfigPuertasYVentanas^>^ ConfigPyVController::buscarAll() {
	List<ConfigPuertasYVentanas^>^ listaConfigPuertasYVentanas = gcnew List<ConfigPuertasYVentanas^>();
	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_ConfigPuertasYVentanas"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		int CodCasa = safe_cast<int>(objData[1]);
		int estadoAutomatizacion = safe_cast<int>(objData[2]);
		int gradoAutomatizacion = safe_cast<int>(objData[3]);
		ConfigPuertasYVentanas^objConfigPuertasYVentanas = gcnew ConfigPuertasYVentanas(codigo, CodCasa,estadoAutomatizacion,gradoAutomatizacion);
		listaConfigPuertasYVentanas->Add(objConfigPuertasYVentanas);
	}
	cerrarConexionBD();	//cierro la conexión
	return listaConfigPuertasYVentanas;
}


void ConfigPyVController::actualizarConfigPyV(ConfigPuertasYVentanas^ objConfigurar) {			//editar una sesión
	ConfigPyVController^ objController = gcnew ConfigPyVController();
	List<ConfigPuertasYVentanas^>^ objPuertasYVentanas = objController->buscarAll();

	int codigo = objConfigurar->getCodigo();
	int CodCasa = objConfigurar->getCodigoCasa();
	int estadoAutomatizacion = objConfigurar->getEstadoAutomatizacion();
	int gradoAutomatizacion = objConfigurar->getGradoAutomatizacion();

	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update TH_ConfigPuertasYVentanas set codigoCasa=" + CodCasa + ", estadoAutomatizacion=" + estadoAutomatizacion + ", gradoAutomatizacion=" + gradoAutomatizacion + " where codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}