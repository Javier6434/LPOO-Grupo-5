#include"ConfigCasa.h"

using namespace TecHouseModel;

ConfigCasa::ConfigCasa() {

}

ConfigCasa::ConfigCasa(int codigo, bool Orden, Ambiente^ objAmbiente, Alarma^ objAlarma) {
	this-> codigo = codigo;
	this-> Orden = Orden;
	this-> objAmbiente = objAmbiente;
	this-> objAlarma = objAlarma;
}