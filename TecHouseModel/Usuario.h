#pragma once

using namespace System;

public ref class Usuario {
	/*primeo: se definen ls atributos*/
private:
	int codigo;
	String^ Nombre;
	String^ ApellidoMaterno;
	String^ ApellidoPaterno;
	String^ FechaDeNacimiento;
	/*segundo: se definen los metodos*/
public:
	Usuario();
	Usuario(int codigo, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ FechaDeNacimiento);
};