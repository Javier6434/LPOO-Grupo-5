#pragma once

#include"Ambiente.h"
#include"ConfigCasa.h"

using namespace System;

namespace TecHouseModel {
	public ref class Servomotores {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		bool estado;
		String^ tipo;
		//Asociacion con Ambiente
		Ambiente^ objAmbiente;
		//Asociacion con ConfigCasa
		ConfigCasa^ objConfigCasa;
		/*segundo: se definen los metodos*/
	public:
		Servomotores();
		Servomotores(int codigo, bool estado, String^ tipo, Ambiente^ objAmbiente, ConfigCasa^ objConfigCasa);
	};
}