#include "frmIniciarSesion.h" 

using namespace System;
using namespace System::Windows::Forms;
using namespace TecHouseView;

[STAThreadAttribute]
void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmIniciarSesion ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmIniciarSesionCasa*/
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}