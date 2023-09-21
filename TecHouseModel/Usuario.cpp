#include"Usuario.h"

Usuario::Usuario() {

}

Usuario::Usuario(int codigo, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ FechaDeNacimiento) {
	this-> codigo = codigo;
	this-> Nombre = Nombre;
	this-> ApellidoMaterno = ApellidoMaterno;
	this-> ApellidoPaterno = ApellidoPaterno;
	this-> FechaDeNacimiento = FechaDeNacimiento;
}