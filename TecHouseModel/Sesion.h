#pragma once

#include"Usuario.h"
#include"Pantalla.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Sesion {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	int CodCasa;
	int Clave;
	//composicion con Usuarios
	List<Usuario^>^ ListaUsuarios;
	//Asociacion con Pantalla
	Pantalla^ objPantalla;
	/*segundo: se definen los metodos*/
public:
	Sesion();
	Sesion(int codigo, int CodCasa, int Clave, List<Usuario^>^ ListaUsuarios, Pantalla^ objPantalla);
};