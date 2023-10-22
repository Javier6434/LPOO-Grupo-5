#include"Pantalla.h"

using namespace TecHouseModel;

Pantalla::Pantalla() {

}

Pantalla::Pantalla(int codigo, String^ Configuracion, bool Control) {
	this-> codigo = codigo;
	this-> Configuracion = Configuracion;
	this-> Control = Control;
}