#pragma once

using namespace System;

namespace TecHouseModel {
	public ref class Ubicacion {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		String^ Departamento;
		String^ Distrito;
		/*segundo: se definen los metodos*/
	public:
		Ubicacion();
		Ubicacion(int codigo, String^ Departamento, String^ Distrito);
	};
}