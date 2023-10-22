#pragma once
#include "frmMantenimientoCasas.h"
#include "frmMantenimientoUsuarios.h"
#include "frmNuevoUsuarioAdmi.h"
#include "frmDise�oCasa.h"

namespace TecHouseView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TecHouseController;
	using namespace System::Collections::Generic;
	using namespace TecHouseModel;

	/// <summary>
	/// Resumen de frmMenuAdministrador
	/// </summary>
	public ref class frmMenuAdministrador : public System::Windows::Forms::Form
	{
	public:
		frmMenuAdministrador(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmMenuAdministrador()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::MenuStrip^ menuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^ men�PrincipalActualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoCasasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contrase�aToolStripMenuItem;

	private: System::Windows::Forms::MenuStrip^ menuStrip2;


	private: System::Windows::Forms::ToolStripMenuItem^ dise�oDeCasaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dise�arCasaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarCasaToolStripMenuItem;





	protected:







	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenuAdministrador::typeid));
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->men�PrincipalActualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoCasasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contrase�aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarCasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->dise�oDeCasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dise�arCasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip3->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip3
			// 
			this->menuStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->men�PrincipalActualToolStripMenuItem });
			this->menuStrip3->Location = System::Drawing::Point(0, 0);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip3->Size = System::Drawing::Size(667, 24);
			this->menuStrip3->TabIndex = 12;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// men�PrincipalActualToolStripMenuItem
			// 
			this->men�PrincipalActualToolStripMenuItem->Name = L"men�PrincipalActualToolStripMenuItem";
			this->men�PrincipalActualToolStripMenuItem->Size = System::Drawing::Size(194, 20);
			this->men�PrincipalActualToolStripMenuItem->Text = L"Men� Principal de Administrador";
			// 
			// configuraci�nToolStripMenuItem
			// 
			this->configuraci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoCasasToolStripMenuItem,
					this->mantenimientoUsuariosToolStripMenuItem
			});
			this->configuraci�nToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"configuraci�nToolStripMenuItem.Image")));
			this->configuraci�nToolStripMenuItem->Name = L"configuraci�nToolStripMenuItem";
			this->configuraci�nToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->configuraci�nToolStripMenuItem->Text = L"Mantenimiento";
			this->configuraci�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuAdministrador::configuraci�nToolStripMenuItem_Click);
			// 
			// mantenimientoCasasToolStripMenuItem
			// 
			this->mantenimientoCasasToolStripMenuItem->Name = L"mantenimientoCasasToolStripMenuItem";
			this->mantenimientoCasasToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->mantenimientoCasasToolStripMenuItem->Text = L"Mantenimiento Casas";
			this->mantenimientoCasasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuAdministrador::mantenimientoCasasToolStripMenuItem_Click);
			// 
			// mantenimientoUsuariosToolStripMenuItem
			// 
			this->mantenimientoUsuariosToolStripMenuItem->Name = L"mantenimientoUsuariosToolStripMenuItem";
			this->mantenimientoUsuariosToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->mantenimientoUsuariosToolStripMenuItem->Text = L"Mantenimiento Usuarios";
			this->mantenimientoUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuAdministrador::mantenimientoUsuariosToolStripMenuItem_Click);
			// 
			// contrase�aToolStripMenuItem
			// 
			this->contrase�aToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->buscarCasaToolStripMenuItem });
			this->contrase�aToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"contrase�aToolStripMenuItem.Image")));
			this->contrase�aToolStripMenuItem->Name = L"contrase�aToolStripMenuItem";
			this->contrase�aToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->contrase�aToolStripMenuItem->Text = L"Control de Casa";
			// 
			// buscarCasaToolStripMenuItem
			// 
			this->buscarCasaToolStripMenuItem->Name = L"buscarCasaToolStripMenuItem";
			this->buscarCasaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->buscarCasaToolStripMenuItem->Text = L"Buscar Casa";
			this->buscarCasaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuAdministrador::buscarCasaToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->configuraci�nToolStripMenuItem,
					this->contrase�aToolStripMenuItem, this->dise�oDeCasaToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 24);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(667, 28);
			this->menuStrip2->TabIndex = 11;
			this->menuStrip2->Text = L"menuStrip2";
			this->menuStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmMenuAdministrador::menuStrip2_ItemClicked);
			// 
			// dise�oDeCasaToolStripMenuItem
			// 
			this->dise�oDeCasaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->dise�arCasaToolStripMenuItem });
			this->dise�oDeCasaToolStripMenuItem->Name = L"dise�oDeCasaToolStripMenuItem";
			this->dise�oDeCasaToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->dise�oDeCasaToolStripMenuItem->Text = L"Dise�o";
			// 
			// dise�arCasaToolStripMenuItem
			// 
			this->dise�arCasaToolStripMenuItem->Name = L"dise�arCasaToolStripMenuItem";
			this->dise�arCasaToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->dise�arCasaToolStripMenuItem->Text = L"Dise�ar Casa";
			this->dise�arCasaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuAdministrador::dise�arCasaToolStripMenuItem_Click);
			// 
			// frmMenuAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 346);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->menuStrip3);
			this->Name = L"frmMenuAdministrador";
			this->Text = L"frmMenuAdministrador";
			this->menuStrip3->ResumeLayout(false);
			this->menuStrip3->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void menuStrip2_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}

	private: System::Void mantenimientoCasasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoCasas^ ventanaMantenimientoCasas = gcnew frmMantenimientoCasas();
		ventanaMantenimientoCasas->ShowDialog();
	}

	private: System::Void mantenimientoUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoUsuarios^ ventanaMantenimientoUsuarios = gcnew frmMantenimientoUsuarios();
		ventanaMantenimientoUsuarios->ShowDialog();
	}
	private: System::Void dise�arCasaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmDise�oCasa^ ventanaDise�oCasa = gcnew frmDise�oCasa();
		ventanaDise�oCasa->ShowDialog();
	}

	private: System::Void buscarCasaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Lo que se busca es que seleccione una Casa y el "Codigo" de la casa se pase al CodCasa de los Administradores, ya que 
		//estos podrian cambiar su CodCasa a voluntad para entrar a cualquier casa elegida
		//Pdst: Es un hueco en el codigo, filtrar los tipos de usuarios para que los clientes no creen admis y al momento de iniciar 
		//una sesion y se pase al menu de cada categoria, que este sepa que usuario haya entrado, lit. hay un libre albedrio de sesiones
		//Pero si asumimos que solo una casa es la "funcional" y el resto de adorno, entonces es nuestro hardware esa unica casa funcional.
		//
		//Si puedes llegar a realizar que los admis cambien de en su sesion el CodCasa con seleccionar casa, seria genial
		//Y tambien hacer que los menus sean conscientes (como private objeto) de la cuante ingresada, seria god
	}

private: System::Void configuraci�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
