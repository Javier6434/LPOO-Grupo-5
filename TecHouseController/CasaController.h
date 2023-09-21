#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TecHouseModel;

namespace TecHouseController {
	public ref class CasaController {
		public:
			CasaController();
			List<Casa^>^ buscarCasa(String^ distrito);
	};
}