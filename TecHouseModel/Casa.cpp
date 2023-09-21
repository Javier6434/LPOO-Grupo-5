#include"Casa.h"

Casa::Casa() {

}

Casa::Casa(int codigo, int ListAmbientes, String^ Departamento, String^ Distrito, List<Ambiente^>^ ListaDeAmbientes, Pantalla^ objPantalla) {
	this-> codigo = codigo;
	this-> ListAmbientes = ListAmbientes;
	this-> Departamento = Departamento;
	this-> Distrito = Distrito;
	this->ListaDeAmbientes = ListaDeAmbientes;
	this->objPantalla = objPantalla;
}