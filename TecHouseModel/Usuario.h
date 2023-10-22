#pragma once

using namespace System;

namespace TecHouseModel {
	public ref class Usuario {
		/*primeo: se definen ls atributos*/
	private:
		int codigo;
		String^ Tipo;
		String^ Nombre;
		String^ ApellidoMaterno;
		String^ ApellidoPaterno;
		String^ FechaDeNacimiento;
		/*segundo: se definen los metodos*/
	public:
		Usuario();
		Usuario(int codigo, String^ Tipo,  String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ FechaDeNacimiento);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getTipo();
		void setTipo(String^ Tipo);
		String^ getNombre();
		void setNombre(String^ Nombre);
		String^ getApellidoMaterno();
		void setApellidoMaterno(String^ ApellidoMaterno);
		String^ getApellidoPaterno();
		void setApellidoPaterno(String^ ApellidoPaterno);
		String^ getFechaDeNacimiento();
		void setFechaDeNacimiento(String^ FechaDeNacimiento);
	};
}