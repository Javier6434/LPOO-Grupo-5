#include"Temperatura.h"

using namespace TecHouseModel;

Temperatura::Temperatura() {

}

Temperatura::Temperatura(int codigo, double Min, double Max, double Actual, ConfigDatos^ objConfigDatos) {
	this-> codigo = codigo;
	this-> Min = Min;
	this-> Max = Max;
	this-> Actual = Actual;
	this-> objConfigDatos = objConfigDatos;
}

int Temperatura::getCodigo() {
	return this->codigo;
}

void Temperatura::setCodigo(int codigo) {
	this->codigo = codigo;
}

double Temperatura::getMin() {
	return this->Min;
}

void Temperatura::setMin(double min) {
	this->Min = min;
}



double Temperatura::getMax() {
	return this->Max;
}

void Temperatura::setMax(double max) {
	this->Max = max;
}


double Temperatura::getActual() {
	return this->Actual;
}

void Temperatura::setActual(double actual) {
	this->Actual = actual;
}
