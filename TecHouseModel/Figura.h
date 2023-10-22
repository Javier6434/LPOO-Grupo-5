#pragma once
#pragma once

namespace TecHouseModel {

	using namespace System::Drawing;
	using namespace System;

	[Serializable]
		public ref class Figura {
		private:
			int puntoInicioX;
			int puntoInicioY;
			int puntoFinX;
			int puntoFinY;
			Color objColor;
			int tipo; //0 es cuando es Rectángulo y 1 es cuando es Elipse.
		public:
			Figura();
			Figura(int puntoInicioX, int puntoInicioY, int puntoFinX, int puntoFinY, Color objColor, int tipo);
			int getPuntoInicioX();
			void setPuntoInicioX(int inicioX);
			int getPuntoInicioY();
			void setPuntoInicioY(int inicioY);
			int getPuntoFinX();
			void setPuntoFinX(int finX);
			int getPuntoFinY();
			void setPuntoFinY(int finY);
			Color getColor();
			void setColor(Color objColor);
			int getTipo();
			void setTipo(int tipo);
	};
}