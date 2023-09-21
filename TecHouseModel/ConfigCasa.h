#pragma once

#include"Ambiente.h"
#include"Alarma.h"

using namespace System;

public ref class ConfigCasa {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	bool Orden;
	//Asociacion con Ambiente
	Ambiente^ ojAmbiente;
	//Asociacion con Alarma
	Alarma^ Alarma;
	/*segundo: se definen los metodos*/
public:
	ConfigCasa();
	ConfigCasa(int codigo, bool Orden, Ambiente^ ojAmbiente, Alarma^ Alarma);
};