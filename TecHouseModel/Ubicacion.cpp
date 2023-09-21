#include"Ubicacion.h"

Ubicacion::Ubicacion() {

}

Ubicacion::Ubicacion(int codigo, String^ Departamento, String^ Distrito) {
	this-> codigo = codigo;
	this-> Departamento = Departamento;
	this-> Distrito = Distrito;
}