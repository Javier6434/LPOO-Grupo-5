#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;

namespace TecHouseController {

	public ref class CasaController {
		public:
			CasaController();
			List <Casa^>^ buscarCasas(String^ Departamento, String^ Distrito);
			/*Estos métodos siempre deberían estar porque te sirven de mucho*/
			List<Casa^>^ buscarAll();
			void escribirArchivo(List<Casa^>^ listaCasas);
			void eliminarCasaFisica(int codigo);
			void agregarCasa(Casa^ objCasa);
			Casa^ buscarCasaxCodigo(int codigo);
			void actualizarCasa(Casa^ objCasa);
			List<String^>^ obtenerDepartamentos();
			List<String^>^ obtenerDistritos();
	};
}