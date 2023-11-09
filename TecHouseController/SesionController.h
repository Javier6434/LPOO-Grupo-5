#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;
using namespace System::Data::SqlClient;

namespace TecHouseController {

	public ref class SesionController {

	private:
		SqlConnection^ objConexion;

	public:
		SesionController();
		int verificarSesion(String^ ID, String^ Clave);
		void abrirConexionBD();
		void cerrarConexionBD();
		List<Sesion^>^ buscarAll();
		void eliminarSesionFisica(int codigo);
		void eliminarSesionFisicaxCodCasa(int CodCasa);
		int buscarCodigoSesionxCodCasa(int CodCasa);
		void agregarSesion(Sesion^ objSesion);
		int buscarCodigoSesionxID(String^ ID);
		Sesion^ buscarSesionxCodigo(int codigo);
		void actualizarSesion(Sesion^ objSesion);
		//void ModificarCodCasa(int CodCasa);
		//List<String^>^ obtenerDistritos();
	};
}
