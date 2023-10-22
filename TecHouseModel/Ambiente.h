#pragma once

using namespace System;

namespace TecHouseModel{
	public ref class Ambiente {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		int DatoSenProx;
		int DatoSenTemp;
		int NroServo;
		int NroPuerta;
		int NroVentana;
		int CantPersonas;
		String^ tipo;
		/*segundo: se definen los metodos*/
	public:
		Ambiente();
		Ambiente(int codigo, int DatoSenProx, int DatoSenTemp, int NroServo, int NroPuerta, int NroVentana, int CantPersonas, String^ tipo);
	};
}