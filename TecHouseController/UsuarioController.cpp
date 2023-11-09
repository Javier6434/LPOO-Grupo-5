#include <iostream>
#include "UsuarioController.h"

using namespace TecHouseModel;
using namespace TecHouseController;
using namespace System::IO;


UsuarioController::UsuarioController() {
	this->objConexion = gcnew SqlConnection();
}

//Métodos propios de BD:
void UsuarioController::abrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, nombre de la BD, usuario de BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20212459;User Id=a20212459;Password=dxMPsqiw";	//tiene los datos de mi B.D. propia Piero Urbano
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}

void UsuarioController::cerrarConexionBD() {
	this->objConexion->Close();
}

List<Usuario^>^ UsuarioController::buscarUsuariosxTipoyNombre(String^ Tipo,String^ Nombre) {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Usuario where Tipo like '%" + Tipo + "%' and Nombre like '%" + Nombre + "%'"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		String^ tipos = safe_cast<String^>(objData[1]);
		String^ nombres = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ apellidoPaterno = safe_cast<String^>(objData[4]);		//todos son con safe_cast
		String^ FechaDeNacimiento = safe_cast<String^>(objData[5]);					//los varchar en BD son los string aquí
		Usuario^ objUsuario = gcnew Usuario(codigo, tipos, nombres, apellidoMaterno, apellidoPaterno, FechaDeNacimiento);
		listaUsuarios->Add(objUsuario);

	}
	cerrarConexionBD();	//cierro la conexión
	return listaUsuarios;
}


List<Usuario^>^ UsuarioController::buscarAll() {			//busca todos los usuarios en base de datos
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Usuario"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		String^ tipos = safe_cast<String^>(objData[1]);
		String^ nombres = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ apellidoPaterno = safe_cast<String^>(objData[4]);		//todos son con safe_cast
		String^ FechaDeNacimiento = safe_cast<String^>(objData[5]);					//los varchar en BD son los string aquí
		Usuario^ objUsuario = gcnew Usuario(codigo, tipos, nombres, apellidoMaterno, apellidoPaterno, FechaDeNacimiento);
		listaUsuarios->Add(objUsuario);

	}
	cerrarConexionBD();	//cierro la conexión
	return listaUsuarios;
}


void UsuarioController::eliminarUsuarioFisica(int codigo) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "delete TH_Usuario where codigo=" + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();
}

void UsuarioController::agregarUsuario(String^ Tipo, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ FechaDeNacimiento) {
	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();	//la tabla de usuarios se llama TH_Usuario
	objSentencia->CommandText = "insert into TH_Usuario(tipo,nombre,apellidomaterno,apellidopaterno,fechadenacimiento) values ('" + Tipo + "','" + Nombre + "','" + ApellidoMaterno + "','" + ApellidoPaterno + "','" + FechaDeNacimiento + "')"; //todo varchar va entre comillas simples ','
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->ExecuteNonQuery();	//notar que el Connection y el CommandText son al revés que en select
	cerrarConexionBD();
}

String^ UsuarioController::buscarTipoUsuarioxCodigo(int codigo) {
	String^ tipo;
	List<Usuario^>^ listaUsuarios = buscarAll();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo) {
			tipo = listaUsuarios[i]->getTipo();
			
		}
	}
	return tipo;
}

Usuario^ UsuarioController::buscarUsuarioxCodigo(int codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	Usuario^ objUsuario;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo) {
			objUsuario=listaUsuarios[i];
		}
	}
	return objUsuario;
}

void UsuarioController::actualizarUsuario(Usuario^ objUsuario) {
	int codigo = objUsuario->getCodigo();		
	String^ tipo = objUsuario->getTipo();
	String^ nombre = objUsuario->getNombre();
	String^ apellidoMaterno = objUsuario->getApellidoMaterno();
	String^ apellidoPaterno = objUsuario->getApellidoPaterno();		
	String^ FechaDeNacimiento = objUsuario->getFechaDeNacimiento();

	abrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "update TH_Usuario set tipo='" + tipo + "', nombre='" + nombre + "', apellidoMaterno='" + apellidoMaterno + "', apellidoPaterno='" + apellidoPaterno + "', FechaDeNacimiento='" + FechaDeNacimiento + "' where codigo = " + codigo;
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	cerrarConexionBD();

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

List<Usuario^>^ UsuarioController::buscarUsuariosxTipo(String^ Tipo) {
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();

	abrirConexionBD();	//primero abro la conexión, y luego tendré que cerrar la conexión, indispensables ambas acciones
	/*SqlCommand viene a ser el objeto que utilizare para usar/trabajar el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion; /*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->CommandText = "select * from TH_Usuario where Tipo like '%" + Tipo + "%'"; 	/*Aqui voy a indicar la sentencia que voy a ejecutar, mi Query*/
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	//SIEMPRE EXECUTE READER PARA LEER LO QUE NOS DEVOLVIÓ AL USAR SELECT
	while (objData->Read()) {		//ahora vamos a leer cada registro y asociarlo al objeto que quería extraer con sus atributos etc
		int codigo = safe_cast<int>(objData[0]);		//los de la derecha son cada columna de la BD,  el índice es la columna, y le aplicamos un casteo para convertir int de BD a int de programación
		String^ tipos = safe_cast<String^>(objData[1]);
		String^ nombres = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ apellidoPaterno = safe_cast<String^>(objData[4]);		//todos son con safe_cast
		String^ FechaDeNacimiento = safe_cast<String^>(objData[5]);					//los varchar en BD son los string aquí
		Usuario^ objUsuario = gcnew Usuario(codigo, tipos, nombres, apellidoMaterno, apellidoPaterno, FechaDeNacimiento);
		listaUsuarios->Add(objUsuario);

	}
	cerrarConexionBD();	//cierro la conexión
	return listaUsuarios;
}