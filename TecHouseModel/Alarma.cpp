#include "Alarma.h"

using namespace TecHouseModel;

Alarma::Alarma() {

}

Alarma::Alarma(int codigo, bool estado, Temperatura^ objTemperatura) {
	this-> codigo = codigo;
	this-> estado = estado;
	this-> objTemperatura = objTemperatura;
}