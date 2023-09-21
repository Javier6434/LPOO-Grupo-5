#include"Sesion.h"

using namespace TecHouseModel;

Sesion::Sesion() {

}

Sesion::Sesion(int codigo, int CodCasa, int Clave, List<Usuario^>^ ListaUsuarios, Pantalla^ objPantalla) {
	this-> codigo = codigo;
	this-> CodCasa = CodCasa;
	this-> Clave = Clave;
	this-> ListaUsuarios = ListaUsuarios;
	this-> objPantalla = objPantalla;
};