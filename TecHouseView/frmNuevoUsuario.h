#pragma once

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
	/// Resumen de frmNuevoUsuario
	/// </summary>
	public ref class frmNuevoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmNuevoUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmNuevoUsuario(int codigo)
		{
			InitializeComponent();
			this->codigo = codigo;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: int codigo;
	private: Usuario^ objUsuario;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(27, 22);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(392, 197);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la Sesion";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(139, 125);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 128);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Contraseña : ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(139, 84);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 43);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 87);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Codigo Casa :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 37);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Tipo :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(27, 235);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(392, 227);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos del Usuario";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(124, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(158, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 177);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Fecha Nacimiento:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(124, 138);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(160, 20);
			this->textBox8->TabIndex = 10;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(124, 171);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(107, 20);
			this->dateTimePicker1->TabIndex = 5;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &frmNuevoUsuario::dateTimePicker1_ValueChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(124, 66);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(160, 20);
			this->textBox6->TabIndex = 4;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(124, 102);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(160, 20);
			this->textBox7->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 69);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Nombre : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 105);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Apellido Materno :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 141);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Apellido Paterno :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 478);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(238, 478);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 19);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button2_Click);
			// 
			// frmNuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 518);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoUsuario";
			this->Text = L"Nuevo Usuario";
			this->Load += gcnew System::EventHandler(this, &frmNuevoUsuario::frmNuevoUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int CodCasa = Convert::ToInt32(this->textBox2->Text);
		String^ ID = this->textBox3->Text;
		String^ Clave = this->textBox4->Text;
		String^ Tipo = this->comboBox1->Text;
		String^ Nombre = this->textBox6->Text;
		String^ ApellidoMaterno = this->textBox7->Text;
		String^ ApellidoPaterno = this->textBox8->Text;
		String^ FechaDeNacimiento = this->dateTimePicker1->Text;

		Sesion^ objSesion = gcnew Sesion(codigo,CodCasa, ID, Clave, nullptr, nullptr);
		SesionController^ objSesionController = gcnew SesionController();
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		objSesionController->agregarSesion(objSesion); 
		objUsuarioController->agregarUsuario(Tipo, Nombre, ApellidoMaterno, ApellidoPaterno, FechaDeNacimiento);
		MessageBox::Show("El Usuario se ha agregado con éxito");
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmNuevoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		this->objUsuario = objUsuarioController->buscarUsuarioxCodigo(this->codigo);
		//la ventana ya reconoció al usuario que ha ingresado

		if (objUsuario->getTipo() == "Administrador") {
			//el administrador puedo añadir, eliminar y editar usuarios; los demás solo pueden editar su usuario
			//el administrador tiene la opción de crear más administradores y demás usuarios
			//los usuarios comunes solo pueden crear familiar y 
			List<String^>^ listaTipos = objUsuarioController->obtenerTipos();
			this->comboBox1->Items->Clear();
			for (int i = 0; i < listaTipos->Count; i++) {
				this->comboBox1->Items->Add(listaTipos[i]);		//obtendra los nombres de los proyectos
			}
		}
		else {
			//todos los demás tipos de usuario pueden crear familiares o cuidadores únicamente
			List<String^>^ listaTipos = objUsuarioController->obtenerTipos();
			this->comboBox1->Items->Clear();
			for (int i = 0; i < listaTipos->Count; i++) {
				if (listaTipos[i] == "Familiar" || listaTipos[i] == "Cuidador") {
					this->comboBox1->Items->Add(listaTipos[i]);		//obtendra los nombres de los proyectos
				}
			}
		}
	}
};
}
