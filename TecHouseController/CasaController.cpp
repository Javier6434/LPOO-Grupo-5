#include<iostream>
#include"CasaController.h"

using namespace TecHouseController;
using namespace System::IO;

CasaController::CasaController() {

}

List<Casa^>^ CasaController::buscarCasa(String^ distrito) {
	/*En esta lista vamos a colocar la información de las casas que encontremos en el archivo de texto*/

	List<Casa^>^ listaCasasEncontradas = gcnew List<Casa^>();

	array<String^>^ lineas = File::ReadAllLines("casas.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/

	for each (String ^ lineaCasa in lineas) {

		array<String^>^ datos = lineaCasa->Split(separadores->ToCharArray());

		int codigoCasa = Convert::ToInt32(datos[0]);

		String^ Distrito = datos[1];

		String^ Avenida = datos[2];

		String^ FechaEntrega = datos[3];

		int NumCasa = Convert::ToInt32(datos[4]);

		if (Distrito->Contains(distrito)) {

			Casa^ objCasa = gcnew Casa(codigoCasa, Distrito, Avenida, FechaEntrega, NumCasa);

			listaCasasEncontradas->Add(objCasa);

		}

	}

	return listaCasasEncontradas;
}