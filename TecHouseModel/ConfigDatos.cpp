#include"ConfigDatos.h"

using namespace TecHouseModel;

ConfigDatos::ConfigDatos() {

}

ConfigDatos::ConfigDatos(int codigo, String^ DatoActual, String^ DatoNuevo, Sesion^ objSesion) {
	this-> codigo = codigo;
	this-> DatoActual = DatoActual;
	this-> DatoNuevo = DatoNuevo;
	this-> objSesion = objSesion;
}