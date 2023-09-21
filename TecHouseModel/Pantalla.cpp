#include"Pantalla.h"

Pantalla::Pantalla() {

}

Pantalla::Pantalla(int codigo, String^ Configuracion, bool Control) {
	this-> codigo = codigo;
	this-> Configuracion = Configuracion;
	this-> Control = Control;
}