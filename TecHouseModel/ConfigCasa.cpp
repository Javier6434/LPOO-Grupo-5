#include"ConfigCasa.h"

ConfigCasa::ConfigCasa() {

}

ConfigCasa::ConfigCasa(int codigo, bool Orden, Ambiente^ ojAmbiente, Alarma^ Alarma) {
	this-> codigo = codigo;
	this-> Orden = Orden;
	this-> ojAmbiente = ojAmbiente;
	this-> Alarma = Alarma;
}