#pragma once

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
	/// Resumen de frmConfigPuertasYVentanas
	/// </summary>
	public ref class frmConfigPuertasYVentanas : public System::Windows::Forms::Form
	{
	public:
		frmConfigPuertasYVentanas(void)
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
		~frmConfigPuertasYVentanas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: int estadoAutomatizacion=1;  // 0 para no tener automatizado nada y 1 para que las puertas y ventanas se abran y cierren automáticamente
	private: int gradoAutomatizacion = 2;	//del 1 al 3, siendo al 3 máximo grado de automatización, mientras que en 1 el menor
	private: int codigo = 1;
	private: int codigoCasa = 1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmConfigPuertasYVentanas::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(-1, 1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(479, 313);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"(1) Casi libre albedrío", L"(2) Seguridad regular",
					L"(3) Seguridad absoluta"
			});
			this->comboBox1->Location = System::Drawing::Point(17, 141);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 21);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::comboBox1_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(254, 138);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 24);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(230, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Estado actual:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(171, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Activar/actualizar automatización en puertas y ventanas";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(44, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 53);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Desactivar automatización en puertas y ventanas";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(61, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Establecer modo:";
			// 
			// frmConfigPuertasYVentanas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 294);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmConfigPuertasYVentanas";
			this->Text = L"Configurar Puertas Y Ventanas";
			this->Load += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::frmConfigPuertasYVentanas_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//botón automatizar puertas y ventanas
		//selecciono un grado de automatizacion del 1 al 3, al asignarle un valor se actualizará el textbox
		//que muestra en qué grado de automatizacion se encuentra actualmente, obs: si el estadoAutomatizacion es 0
		//entonces no importará el grado, siempre será 0 el textbox en ese caso
		if (comboBox1->Text=="(1) Casi libre albedrío" || comboBox1->Text == "(2) Seguridad regular" || comboBox1->Text == "(3) Seguridad absoluta" ) {
			//los valores introducidos son válidos
			estadoAutomatizacion = 1;
			if (comboBox1->Text == "(1) Casi libre albedrío") {
				gradoAutomatizacion = 1;
				textBox5->Text = "1, casi libre albedrío";
				ConfigPyVController^ objController = gcnew ConfigPyVController();
				ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas(codigo, codigoCasa, estadoAutomatizacion, gradoAutomatizacion);
				objController->actualizarConfigPyV(objConfiguracion);
			}
			else if (comboBox1->Text == "(2) Seguridad regular") {
				gradoAutomatizacion = 2;
				textBox5->Text = "2, seguridad regular";
				ConfigPyVController^ objController = gcnew ConfigPyVController();
				ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas(codigo, codigoCasa, estadoAutomatizacion, gradoAutomatizacion);
				objController->actualizarConfigPyV(objConfiguracion);
			}
			else {
				//grado de automatización es 3
				gradoAutomatizacion = 3;
				textBox5->Text = "3, seguridad absoluta";
				ConfigPyVController^ objController = gcnew ConfigPyVController();
				ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas(codigo, codigoCasa, estadoAutomatizacion, gradoAutomatizacion);
				objController->actualizarConfigPyV(objConfiguracion);
			}
		}
		else {
			//DATOS NO SON VÁLIDOS
			MessageBox::Show("Por favor escoja entre los modos disponibles de automatización (1,2 o 3)");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//botón NO automatizar puertas y ventanas (desactivarlas completamente)
		estadoAutomatizacion = 0;
		textBox5->Text = "Desactivado";		//para que detecte que se cambiaron datos y por nuestro criterio, al estar desactivada la autom. entonces el estado es 0
		ConfigPyVController^ objController = gcnew ConfigPyVController();
		ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas(codigo,codigoCasa,estadoAutomatizacion,gradoAutomatizacion);
		objController->actualizarConfigPyV(objConfiguracion);
	}
	private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void frmConfigPuertasYVentanas_Load(System::Object^ sender, System::EventArgs^ e) {
		//LOAD:
		ConfigPyVController^ objController = gcnew ConfigPyVController();
		ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas();
		objConfiguracion = objController->buscarConfiguracionxCodigo(1);
		gradoAutomatizacion = objConfiguracion->getGradoAutomatizacion();
		estadoAutomatizacion = objConfiguracion->getEstadoAutomatizacion();
		if (estadoAutomatizacion == 0) {
			//desactivado
			textBox5->Text = "Desactivado";
		}
		else {
			//estadoAutomatizacion es 1:
			if (gradoAutomatizacion == 1) {
				textBox5->Text = "1, casi libre albedrío";

			}
			else if (gradoAutomatizacion == 2) {
				textBox5->Text = "2, seguridad regular";
			}
			else {
				//grado automatizacion es 3:
				textBox5->Text = "3, seguridad absoluta";
			}

		}
				//se tendrá que extraer el valor del arduino o de la base de datos
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
