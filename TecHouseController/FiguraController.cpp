#include "FiguraController.h"

using namespace TecHouseController;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

FiguraController::FiguraController() {

}

void FiguraController::guardarArchivo(List<Figura^>^ listaFiguras, String^ nombreArchivo) {
	Stream^ objArchivo = File::Open(nombreArchivo, FileMode::Create);
	BinaryFormatter^ formateador = gcnew BinaryFormatter();
	formateador->Serialize(objArchivo, listaFiguras);
	objArchivo->Close();
}