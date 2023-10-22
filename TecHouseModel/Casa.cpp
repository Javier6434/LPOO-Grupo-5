#include"Casa.h"

using namespace TecHouseModel;

Casa::Casa() {

}

Casa::Casa(int codigo, String^ Departamento, String^ Distrito, String^ Avenida, int cantAmbientes){
	this-> codigo = codigo;
	//this-> ListaAmbientes = ListaAmbientes;
	this-> Departamento = Departamento;
	this-> Distrito = Distrito;
	this-> Avenida = Avenida;
	this-> cantAmbientes = cantAmbientes;
	//this-> objPantalla = objPantalla;
}

int Casa::getCodigo() {
	return this->codigo;
}

void Casa::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Casa::getDepartamento() {
	return this->Departamento;
}

void Casa::setDepartamento(String^ Departamento) {
	this->Departamento = Departamento;
}

String^ Casa::getDistrito() {
	return this->Distrito;
}

void Casa::setDistrito(String^ Distrito) {
	this->Distrito = Distrito;
}

String^ Casa::getAvenida() {
	return this->Avenida;
}

void Casa::setAvenida(String^ Avenida) {
	this->Avenida = Avenida;
}

int Casa::getcantAmbientes() {
	return this->cantAmbientes;
}

void Casa::setcantAmbientes(int cantAmbientes) {
	this->cantAmbientes = cantAmbientes;
}