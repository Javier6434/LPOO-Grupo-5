#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;
using namespace System::Data::SqlClient;

namespace TecHouseController {

	public ref class UsuarioController {
	private:
		SqlConnection^ objConexion;

	public:
		UsuarioController();
		void abrirConexionBD();
		void cerrarConexionBD();
		List<Usuario^>^ buscarUsuariosxTipoyNombre(String^ Tipo, String^ Nombre);	//creado para BD
		/*Estos métodos siempre deberían estar porque te sirven de mucho*/
		List<Usuario^>^ buscarAll();
		void eliminarUsuarioFisica(int codigo);
		void agregarUsuario(String^ Tipo,String^ Nombre,String^ ApellidoMaterno,String^ ApellidoPaterno,String^ FechaDeNacimiento);
		String^ buscarTipoUsuarioxCodigo(int codigo);
		Usuario^ buscarUsuarioxCodigo(int codigo);
		void actualizarUsuario(Usuario^ objUsuario);
		List<String^>^ obtenerTipos();
		List<String^>^ obtenerNombres();
		List <Usuario^>^ buscarUsuariosxTipo(String^ Tipo);
	};
}
