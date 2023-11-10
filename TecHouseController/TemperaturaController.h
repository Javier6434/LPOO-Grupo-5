#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;
using namespace System::Data::SqlClient;

namespace TecHouseController {

	public ref class TemperaturaController {

	private:
		SqlConnection^ objConexion;

	public:
		TemperaturaController();
		void abrirConexionBD();
		void cerrarConexionBD();
		List<Temperatura^>^ buscarAll();
		void actualizarTemperatura(Temperatura^ objActualizar);
		Temperatura^ buscarConfiguracionxCodigo(int codigo);
	};
}