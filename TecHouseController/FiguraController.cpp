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

List<Figura^>^ FiguraController::leerArchivo(String^ nombreArchivo) {
	Stream^ objArchivo = File::Open(nombreArchivo, FileMode::Open);
	BinaryFormatter^ formateador = gcnew BinaryFormatter();
	List<Figura^>^ listaFiguras = dynamic_cast<List<Figura^>^>(formateador->Deserialize(objArchivo));	//devuelve un conjunto de bytes, por lo que lo casteo a ser una lista de figuras
	return listaFiguras;
}