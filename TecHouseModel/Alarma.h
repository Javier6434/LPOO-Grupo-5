#pragma once

#include"Temperatura.h"

using namespace System;

public ref class Alarma {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	bool estado;
	//Asociacion con Temperatura
	Temperatura^ objTemperatura;
	/*segundo: se definen los metodos*/
public:
	Alarma();
	Alarma(int codigo, bool estado, Temperatura^ objTemperatura);
};