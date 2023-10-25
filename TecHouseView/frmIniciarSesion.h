#pragma once
#include "frmMenuAdministrador.h"
#include "frmMenuCliente.h"
#include "frmMenuComun.h"

namespace TecHouseView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TecHouseController;
	using namespace TecHouseModel;

	/// <summary>
	/// Resumen de frmIniciarSesion
	/// </summary>
	public ref class frmIniciarSesion : public System::Windows::Forms::Form
	{
	public:
		frmIniciarSesion(void)
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
		~frmIniciarSesion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmIniciarSesion::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(572, 287);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(339, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 37);
			this->label4->TabIndex = 7;
			this->label4->Text = L"TECHOUSE++";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(323, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(221, 177);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 24);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmIniciarSesion::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 127);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Por favor, ahora inicie sesión en su hogar:";
			// 
			// frmIniciarSesion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 299);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmIniciarSesion";
			this->Text = L"Iniciar Sesión";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int SiExiste;
		String^ Tipo;
		int Codigo;
		String^ ID = this->textBox1->Text;
		String^ Clave = this->textBox2->Text;
		SesionController^ objSesionController = gcnew SesionController();
		SiExiste = (objSesionController->verificarSesion(ID, Clave));
		if (SiExiste==1) {
			Codigo= (objSesionController->buscarCodigoSesionxID(ID));
			UsuarioController^ objUsuarioController = gcnew UsuarioController();
			Tipo = (objUsuarioController->buscarTipoUsuarioxCodigo(Codigo));
			if (Tipo == "Administrador") {
				frmMenuAdministrador^ ventanaMenuAdministrador = gcnew frmMenuAdministrador(Codigo);
				ventanaMenuAdministrador->Show();
			}else {
				if(Tipo == "Cliente"){
					frmMenuCliente^ ventanaMenuCliente = gcnew frmMenuCliente(Codigo);
					ventanaMenuCliente->Show();
				}else {
					if (Tipo == "Familiar") {
						frmMenuComun^ ventanaMenuComun = gcnew frmMenuComun(Codigo);
						ventanaMenuComun->Show();
					}
					else {
						if (Tipo == "Cuidador") {
							frmMenuComun^ ventanaMenuComun = gcnew frmMenuComun(Codigo);
							ventanaMenuComun->Show();
						}
					}
				}
			}
		}else {
			MessageBox::Show("Su ID no existe o Contraseña inválida");
		}
	}
};
}
