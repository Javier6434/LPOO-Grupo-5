#include"Iluminacion.h"

using namespace TecHouseModel;

Iluminacion::Iluminacion() {

}

Iluminacion::Iluminacion(int codigo, bool Estado, double Intensidad, String^ Color, String^ tipo) {
	this-> codigo = codigo;
	this-> Estado = Estado;
	this-> Intensidad = Intensidad;
	this-> Color = Color;
	this-> tipo = tipo;
}