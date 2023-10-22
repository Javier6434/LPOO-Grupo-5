#include "Figura.h"

using namespace TecHouseModel;

Figura::Figura() {

}

Figura::Figura(int puntoInicioX, int puntoInicioY, int puntoFinX, int puntoFinY, Color objColor, int tipo) {
	this->puntoInicioX = puntoInicioX;
	this->puntoInicioY = puntoInicioY;
	this->puntoFinX = puntoFinX;
	this->puntoFinY = puntoFinY;
	this->tipo = tipo;
	this->objColor = objColor;
}
int Figura::getPuntoInicioX() {
	return this->puntoInicioX;
}
void Figura::setPuntoInicioX(int inicioX) {
	this->puntoInicioX = inicioX;
}

int Figura::getPuntoInicioY() {
	return this->puntoInicioY;
}
void Figura::setPuntoInicioY(int inicioY) {
	this->puntoInicioY = inicioY;
}
int Figura::getPuntoFinX() {
	return this->puntoFinX;
}

void Figura::setPuntoFinX(int finX) {
	this->puntoFinX = finX;
}
int Figura::getPuntoFinY() {
	return this->puntoFinY;
}

void Figura::setPuntoFinY(int finY) {
	this->puntoFinY = finY;
}
Color Figura::getColor() {
	return this->objColor;
}

void Figura::setColor(Color objColor) {
	this->objColor = objColor;
}

int Figura::getTipo() {
	return this->tipo;
}

void Figura::setTipo(int tipo) {
	this->tipo = tipo;
}