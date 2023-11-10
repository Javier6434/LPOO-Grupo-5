#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;
using namespace System::Data::SqlClient;

namespace TecHouseController {

	public ref class ConfigPyVController {

	private:
		SqlConnection^ objConexion;

	public:
		ConfigPyVController();
		void abrirConexionBD();
		void cerrarConexionBD();
		List<ConfigPuertasYVentanas^>^ buscarAll();
		void actualizarConfigPyV(ConfigPuertasYVentanas^ objConfigurar);
		ConfigPuertasYVentanas^ buscarConfiguracionxCodigo(int codigo);
	};
}
