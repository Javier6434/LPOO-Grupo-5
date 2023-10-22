#pragma once

#include"Sesion.h"

using namespace System;

namespace TecHouseModel {
	public ref class ConfigDatos {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		String^ DatoActual;
		String^ DatoNuevo;
		Sesion^ objSesion;
		/*segundo: se definen los metodos*/
	public:
		ConfigDatos();
		ConfigDatos(int codigo, String^ DatoActual, String^ DatoNuevo, Sesion^ objSesion);
	};
}