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
		int getCodigo();
		void setCodigo(int codigo);
		double getMin();
		void setMin(double min);
		double getMax();
		void setMax(double max);
		double getActual();
		void setActual(double actual);

	};
}