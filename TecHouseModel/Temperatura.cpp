#include"Temperatura.h"

Temperatura::Temperatura() {

}

Temperatura::Temperatura(int codigo, double Min, double Max, double Actual, ConfigDatos^ objConfigDatos) {
	this-> codigo = codigo;
	this-> Min = Min;
	this-> Max = Max;
	this-> Actual = Actual;
	this-> objConfigDatos = objConfigDatos;
}