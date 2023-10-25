#pragma once

namespace TecHouseController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace TecHouseModel;

	public ref class FiguraController {
	public:
		FiguraController();
		void guardarArchivo(List<Figura^>^ listaFiguras, String^ nombreArchivo);
		List<Figura^>^ leerArchivo(String^ nombreArchivo);
	};
}