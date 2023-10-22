#pragma once
#include"Temperatura.h"
#include"Ambiente.h"
#include"Iluminacion.h"
#include"ConfigCasa.h"
#include"Servomotores.h"

using namespace System;

namespace TecHouseModel {
	public ref class Sensores {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		String^ tipo;
		bool estado;
		//Asociacion con Temperatura
		Temperatura^ objTemperatura;
		//Asociacion con Ambiente
		Ambiente^ objAmbiente;
		//Asociacion con Iluminacion
		Iluminacion^ objIluminacion;
		//Asociacion con ConfigCasa
		ConfigCasa^ objConfigCasa;
		//Asociacion con Servomotores
		Servomotores^ objServomotores;
		/*segundo: se definen los metodos*/
	public:
		Sensores();
		Sensores(int codigo, String^ tipo, bool estado, Temperatura^ objTemperatura, Ambiente^ objAmbiente, Iluminacion^ objIluminacion, ConfigCasa^ objConfigCasa, Servomotores^ objServomotores);
	};
}