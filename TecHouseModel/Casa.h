#pragma once

#include"Ambiente.h"
#include"Ubicacion.h"
#include"Pantalla.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Casa {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	int ListAmbientes;
	//composicion con Ambiente
	List<Ambiente^>^ ListaDeAmbientes;
	//Asociacion con Ubicacion
	Ubicacion^ objUbicacion;
	//Asociacion con Pantalla
	Pantalla^ objPantalla;
	/*segundo: se definen los metodos*/
public:
	Casa();
	Casa(int codigo, int ListAmbientes, List<Ambiente^>^ ListaDeAmbientes, Ubicacion^ objUbicacion, Pantalla^ objPantalla);
}