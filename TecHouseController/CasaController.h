#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;
using namespace System::Data::SqlClient;  //para hacer la conexión con la base de datos

namespace TecHouseController {

	public ref class CasaController {
		private:
		SqlConnection^ objConexion;

		public:
			CasaController();
			void abrirConexionBD();
			void cerrarConexionBD();
			List <Casa^>^ buscarCasas(String^ Departamento, String^ Distrito);
			/*Estos métodos siempre deberían estar porque te sirven de mucho*/
			List<Casa^>^ buscarAll();
			void eliminarCasaFisica(int codigo);
			void agregarCasa(Casa^ objCasa);
			Casa^ buscarCasaxCodigo(int codigo);
			void actualizarCasa(Casa^ objCasa);
			List<String^>^ obtenerDepartamentos();
			List<String^>^ obtenerDistritos();
	};
}