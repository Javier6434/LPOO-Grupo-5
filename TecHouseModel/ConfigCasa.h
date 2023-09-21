#pragma once

#include"Ambiente.h"
#include"Alarma.h"

using namespace System;

namespace TecHouseModel {
	public ref class ConfigCasa {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		bool Orden;
		//Asociacion con Ambiente
		Ambiente^ objAmbiente;
		//Asociacion con Alarma
		Alarma^ objAlarma;
		/*segundo: se definen los metodos*/
	public:
		ConfigCasa();
		ConfigCasa(int codigo, bool Orden, Ambiente^ objAmbiente, Alarma^ objAlarma);
	};
}