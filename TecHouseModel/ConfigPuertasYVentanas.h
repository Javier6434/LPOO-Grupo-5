#pragma once

#include"Sesion.h"

using namespace System;

namespace TecHouseModel {
	public ref class ConfigPuertasYVentanas {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		int codigoCasa;
		int estadoAutomatizacion;
		int gradoAutomatizacion;
		/*segundo: se definen los metodos*/
	public:
		ConfigPuertasYVentanas();
		ConfigPuertasYVentanas(int codigo, int codigoCasa, int estadoAutomatizacion, int gradoAutomatizacion);
		int getCodigo();
		void setCodigo(int codigo);
		int getCodigoCasa();
		void setCodigoCasa(int codigoCasa);
		int getEstadoAutomatizacion();
		void setEstadoAutomatizacion(int estadoAutomatizacion);
		int getGradoAutomatizacion();
		void setGradoAutomatizacion(int gradoAutomatizacion);
	};
}