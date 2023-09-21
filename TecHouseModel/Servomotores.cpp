#include"Servomotores.h"

Servomotores::Servomotores() {

}

Servomotores::Servomotores(int codigo, bool estado, String^ tipo, Ambiente^ objAmbiente, ConfigCasa^ objConfigCasa) {
	this-> codigo = codigo;
	this-> estado = estado;
	this-> tipo = tipo;
	this-> objAmbiente = objAmbiente;
	this-> objConfigCasa = objConfigCasa;
}