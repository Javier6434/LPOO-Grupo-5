#include "frmPrincipal.h" 

using namespace System;
using namespace System::Windows::Forms;
using namespace TecHouseView;

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmPrincipal ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}