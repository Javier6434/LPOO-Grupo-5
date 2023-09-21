#include "Alarma.h"

Alarma::Alarma() {

}

Alarma::Alarma(int codigo, bool estado, Temperatura^ objTemperatura) {
	this-> codigo = codigo;
	this-> estado = estado;
	this-> objTemperatura = objTemperatura;
}