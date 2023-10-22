#include"Sesion.h"

using namespace TecHouseModel;

Sesion::Sesion() {

}

Sesion::Sesion(int codigo, int CodCasa, String^ ID, String^ Clave, List<Usuario^>^ ListaUsuarios, Pantalla^ objPantalla) {
	this->codigo = codigo;
	this->CodCasa = CodCasa;
	this->ID = ID;
	this->Clave = Clave;
	this->ListaUsuarios = ListaUsuarios;
	this->objPantalla = objPantalla;
}

int  Sesion::getCodigo() {
	return this->codigo;
}
void Sesion::setCodigo(int  codigo) {
	this->codigo = codigo;
}
int Sesion::getCodCasa() {
	return this->CodCasa;
}
void Sesion::setCodCasa(int CodCasa) {
	this->CodCasa = CodCasa;
}
String^ Sesion::getID() {
	return this->ID;
}
void Sesion::setID(String^ ID) {
	this->ID = ID;
}
String^ Sesion::getClave() {
	return this->Clave;
}
void Sesion::setClave(String^ Clave) {
	this->Clave = Clave;
}

