#pragma once

using namespace System;

namespace TecHouseModel {
	public ref class Iluminacion {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		bool Estado;
		double Intensidad;
		String^ Color;
		String^ tipo;
		/*segundo: se definen los metodos*/
	public:
		Iluminacion();
		Iluminacion(int codigo, bool Estado, double Intensidad, String^ Color, String^ tipo);
	};
}