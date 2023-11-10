#include "ConfigPuertasYVentanas.h"

using namespace TecHouseModel;

ConfigPuertasYVentanas::ConfigPuertasYVentanas() {

}

ConfigPuertasYVentanas::ConfigPuertasYVentanas(int codigo, int codigoCasa, int estadoAutomatizacion, int gradoAutomatizacion) {
	this->codigo = codigo;
	//this-> ListaAmbientes = ListaAmbientes;
	this->codigoCasa=codigoCasa;
	this->estadoAutomatizacion = estadoAutomatizacion;
	this->gradoAutomatizacion = gradoAutomatizacion;
	//this-> objPantalla = objPantalla;
}

int ConfigPuertasYVentanas::getCodigo() {
	return this->codigo;
}

void ConfigPuertasYVentanas::setCodigo(int codigo) {
	this->codigo = codigo;
}

int ConfigPuertasYVentanas::getCodigoCasa() {
	return this->codigoCasa;
}

void ConfigPuertasYVentanas::setCodigoCasa(int codigoCasa) {
	this->codigoCasa = codigoCasa;
}

int ConfigPuertasYVentanas::getEstadoAutomatizacion() {
	return this->estadoAutomatizacion;
}

void ConfigPuertasYVentanas::setEstadoAutomatizacion(int estadoAutomatizacion) {
	this->estadoAutomatizacion = estadoAutomatizacion;
}


int ConfigPuertasYVentanas::getGradoAutomatizacion() {
	return this->gradoAutomatizacion;
}

void ConfigPuertasYVentanas::setGradoAutomatizacion(int gradoAutomatizacion) {
	this->gradoAutomatizacion = gradoAutomatizacion;
}
