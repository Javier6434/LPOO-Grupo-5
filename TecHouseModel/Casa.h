#pragma once

//#include"Ambiente.h"
//#include"Pantalla.h"

using namespace System;
using namespace System::Collections::Generic;

namespace TecHouseModel {
	public ref class Casa {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		//Asociacion con Ubicacion
		String^ Departamento;
		String^ Distrito;
		String^ Avenida;
		int cantAmbientes;
		//composicion con Ambiente
		//List<Ambiente^>^ ListaAmbientes;
		//Asociacion con Pantalla
		//Pantalla^ objPantalla;
		/*segundo: se definen los metodos*/
	public:
		Casa();
		Casa(int codigo, String^ Departamento, String^ Distrito, String^ Avenida, int cantAmbientes);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getDepartamento();
		void setDepartamento(String^ Departamento);
		String^ getDistrito();
		void setDistrito(String^ Distrito);
		String^ getAvenida();
		void setAvenida(String^ Avenida);
		int getcantAmbientes();
		void setcantAmbientes(int cantAmbientes);
	};
}