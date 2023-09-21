#include"Ambiente.h"

Ambiente::Ambiente() {

}

Ambiente::Ambiente(int codigo, int DatoSenProx, int DatoSenTemp, int NroServo, int NroPuerta, int NroVentana, int CantPersonas, String^ tipo) {
	this-> codigo = codigo;
	this-> DatoSenProx = DatoSenProx;
	this-> DatoSenTemp = DatoSenTemp;
	this-> NroServo = NroServo;
	this-> NroPuerta = NroPuerta;
	this-> NroVentana = NroVentana;
	this-> CantPersonas = CantPersonas;
	this-> tipo = tipo;
}