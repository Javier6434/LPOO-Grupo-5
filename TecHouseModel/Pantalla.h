#pragma once

using namespace System;

public ref class Pantalla {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	String^ Configuracion;
	bool Control;
	/*segundo: se definen los metodos*/
public:
	Pantalla();
	Pantalla(int codigo, String^ Configuracion, bool Control);
};