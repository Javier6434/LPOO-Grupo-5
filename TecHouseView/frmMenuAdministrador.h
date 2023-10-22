#pragma once
#include "frmMantenimientoCasas.h"
#include "frmMantenimientoUsuarios.h"
#include "frmNuevoUsuarioAdmi.h"
#include "frmDiseñoCasa.h"

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ menúPrincipalActualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoCasasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contraseñaToolStripMenuItem;

	private: System::Windows::Forms::MenuStrip^ menuStrip2;


	private: System::Windows::Forms::ToolStripMenuItem^ diseñoDeCasaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ diseñarCasaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarCasaToolStripMenuItem;





	protected:







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenuAdministrador::typeid));
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->menúPrincipalActualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoCasasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contraseñaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarCasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->diseñoDeCasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diseñarCasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip3->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip3
			// 
			this->menuStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menúPrincipalActualToolStripMenuItem });
			this->menuStrip3->Location = System::Drawing::Point(0, 0);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip3->Size = System::Drawing::Size(667, 24);
			this->menuStrip3->TabIndex = 12;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// menúPrincipalActualToolStripMenuItem
			// 
			this->menúPrincipalActualToolStripMenuItem->Name = L"menúPrincipalActualToolStripMenuItem";
			this->menúPrincipalActualToolStripMenuItem->Size = System::Drawing::Size(194, 20);
			this->menúPrincipalActualToolStripMenuItem->Text = L"Menú Principal de Administrador";
			// 
			// configuraciónToolStripMenuItem
			// 
			this->configuraciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoCasasToolStripMenuItem,
					this->mantenimientoUsuariosToolStripMenuItem
			});
			this->configuraciónToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"configuraciónToolStripMenuItem.Image")));
			this->configuraciónToolStripMenuItem->Name = L"configuraciónToolStripMenuItem";
			this->configuraciónToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->configuraciónToolStripMenuItem->Text = L"Mantenimiento";
			this->configuraciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuAdministrador::configuraciónToolStripMenuItem_Click);
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
			// contraseñaToolStripMenuItem
			// 
			this->contraseñaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->buscarCasaToolStripMenuItem });
			this->contraseñaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"contraseñaToolStripMenuItem.Image")));
			this->contraseñaToolStripMenuItem->Name = L"contraseñaToolStripMenuItem";
			this->contraseñaToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->contraseñaToolStripMenuItem->Text = L"Control de Casa";
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
				this->configuraciónToolStripMenuItem,
					this->contraseñaToolStripMenuItem, this->diseñoDeCasaToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 24);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(667, 28);
			this->menuStrip2->TabIndex = 11;
			this->menuStrip2->Text = L"menuStrip2";
			this->menuStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmMenuAdministrador::menuStrip2_ItemClicked);
			// 
			// diseñoDeCasaToolStripMenuItem
			// 
			this->diseñoDeCasaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->diseñarCasaToolStripMenuItem });
			this->diseñoDeCasaToolStripMenuItem->Name = L"diseñoDeCasaToolStripMenuItem";
			this->diseñoDeCasaToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->diseñoDeCasaToolStripMenuItem->Text = L"Diseño";
			// 
			// diseñarCasaToolStripMenuItem
			// 
			this->diseñarCasaToolStripMenuItem->Name = L"diseñarCasaToolStripMenuItem";
			this->diseñarCasaToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->diseñarCasaToolStripMenuItem->Text = L"Diseñar Casa";
			this->diseñarCasaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuAdministrador::diseñarCasaToolStripMenuItem_Click);
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
	private: System::Void diseñarCasaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmDiseñoCasa^ ventanaDiseñoCasa = gcnew frmDiseñoCasa();
		ventanaDiseñoCasa->ShowDialog();
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

private: System::Void configuraciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
