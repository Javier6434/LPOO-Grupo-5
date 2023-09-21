#pragma once

#include"Ambiente.h"
#include"Pantalla.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Casa {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	int ListAmbientes;
	String^ Departamento;
	String^ Distrito;
	//composicion con Ambiente
	List<Ambiente^>^ ListaDeAmbientes;
	//Asociacion con Pantalla
	Pantalla^ objPantalla;
	/*segundo: se definen los metodos*/
public:
	Casa();
	Casa(int codigo, int ListAmbientes, String^ Departamento, String^ Distrito, List<Ambiente^>^ ListaDeAmbientes, Pantalla^ objPantalla);
};