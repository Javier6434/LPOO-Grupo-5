#pragma once

#include"Usuario.h"
#include"Pantalla.h"

using namespace System;
using namespace System::Collections::Generic;

namespace TecHouseModel {
	public ref class Sesion {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		int CodCasa;
		String^ ID;
		String^ Clave;
		//composicion con Usuarios
		List<Usuario^>^ ListaUsuarios;
		//Asociacion con Pantalla
		Pantalla^ objPantalla;
		/*segundo: se definen los metodos*/
	public:
		Sesion();
		Sesion(int codigo, int CodCasa, String^ ID, String^ Clave, List<Usuario^>^ ListaUsuarios, Pantalla^ objPantalla);
		int  getCodigo();
		void setCodigo(int  codigo);
		int getCodCasa();
		void setCodCasa(int CodCasa);
		String^ getID();
		void setID(String^ ID);
		String^ getClave();
		void setClave(String^ Clave);
	};
}