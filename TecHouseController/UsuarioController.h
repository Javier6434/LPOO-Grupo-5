#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;

namespace TecHouseController {

	public ref class UsuarioController {
	public:
		UsuarioController();
		List <Usuario^>^ buscarUsuarios(String^ Tipo, String^ Nombre);
		/*Estos métodos siempre deberían estar porque te sirven de mucho*/
		List<Usuario^>^ buscarAll();
		void escribirArchivo(List<Usuario^>^ listaUsuarios);
		void eliminarUsuarioFisica(int codigo);
		void agregarUsuario(Usuario^ objUsuario);
		String^ buscarTipoUsuarioxCodigo(int codigo);
		Usuario^ buscarUsuarioxCodigo(int codigo);
		void actualizarUsuario(Usuario^ objUsuario);
		List<String^>^ obtenerTipos();
		List<String^>^ obtenerNombres();
		List <Usuario^>^ buscarUsuariosxTipo(String^ Tipo);
	};
}
