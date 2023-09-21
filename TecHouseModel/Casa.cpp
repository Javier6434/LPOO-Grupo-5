#include"Casa.h"

Casa::Casa() {

}

Casa::Casa(int codigo, int ListAmbientes, List<Ambiente^>^ ListaDeAmbientes, Ubicacion^ objUbicacion, Pantalla^ objPantalla) {
	this-> codigo = codigo;
	this-> ListAmbientes = ListAmbientes;
	this-> ListaDeAmbientes = ListaDeAmbientes;
	this-> objUbicacion = objUbicacion;
	this-> objPantalla = objPantalla;
}