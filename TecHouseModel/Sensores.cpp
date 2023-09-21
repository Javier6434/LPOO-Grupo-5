#include"Sensores.h"

Sensores::Sensores() {

}

Sensores::Sensores(int codigo, String^ tipo, bool estado, Temperatura^ objTemperatura, Ambiente^ objAmbiente, Iluminacion^ objIluminacion, ConfigCasa^ objConfigCasa, Servomotores^ objServomotores) {
	this-> codigo = codigo;
	this-> tipo = tipo;
	this-> estado = estado;
	this-> objTemperatura = objTemperatura;
	this-> objAmbiente = objAmbiente;
	this-> objIluminacion = objIluminacion;
	this-> objConfigCasa = objConfigCasa;
	this-> objServomotores = objServomotores;
}