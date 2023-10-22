#include"Usuario.h"

using namespace TecHouseModel;

Usuario::Usuario() {

}

Usuario::Usuario(int codigo, String^ Tipo, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ FechaDeNacimiento) {
	this->codigo = codigo;
	this->Tipo = Tipo;
	this->Nombre = Nombre;
	this->ApellidoMaterno = ApellidoMaterno;
	this->ApellidoPaterno = ApellidoPaterno;
	this->FechaDeNacimiento = FechaDeNacimiento;
}

int Usuario::getCodigo() {
	return this->codigo;
}
void Usuario::setCodigo(int codigo) {
	this->codigo = codigo;
}
String^ Usuario::getTipo() {
	return this->Tipo;
}
void Usuario::setTipo(String^ Tipo) {
	this->Tipo = Tipo;
}
String^ Usuario::getNombre() {
	return this->Nombre;
}
void Usuario::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}
String^ Usuario::getApellidoMaterno() {
	return this->ApellidoMaterno;
}
void Usuario::setApellidoMaterno(String^ ApellidoMaterno) {
	this->ApellidoMaterno = ApellidoMaterno;
}
String^ Usuario::getApellidoPaterno() {
	return this->ApellidoPaterno;
}
void Usuario::setApellidoPaterno(String^ ApellidoPaterno) {
	this->ApellidoPaterno = ApellidoPaterno;
}
String^ Usuario::getFechaDeNacimiento() {
	return this->FechaDeNacimiento;
}
void Usuario::setFechaDeNacimiento(String^ FechaDeNacimiento) {
	this->FechaDeNacimiento = FechaDeNacimiento;
}