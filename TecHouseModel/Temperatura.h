#pragma once

#include"ConfigDatos.h"

using namespace System;

namespace TecHouseModel {
	public ref class Temperatura {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		double Min;
		double Max;
		double Actual;
		//Asociacion con ConfigDatos
		ConfigDatos^ objConfigDatos;
		/*segundo: se definen los metodos*/
	public:
		Temperatura();
		Temperatura(int codigo, double Min, double Max, double Actual, ConfigDatos^ objConfigDatos);
	};
}