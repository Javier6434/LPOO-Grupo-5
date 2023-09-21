#pragma once

#include"Sesion.h"

using namespace System;

public ref class ConfigDatos {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	String^ DatoActual;
	String^ DatoNuevo;
	//Asociacion con Sesion
	Sesion^ objSesion;
	/*segundo: se definen los metodos*/
public:
	ConfigDatos();
	ConfigDatos(int codigo, String^ DatoActual, String^ DatoNuevo, Sesion^ objSesion);
};