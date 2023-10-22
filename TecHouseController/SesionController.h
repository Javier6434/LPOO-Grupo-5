#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;

namespace TecHouseController {

	public ref class SesionController {
	public:
		SesionController();
		int verificarSesion(String^ ID, String^ Clave);
		List<Sesion^>^ buscarAll();
		void escribirArchivo(List<Sesion^>^ listaSesions);
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
