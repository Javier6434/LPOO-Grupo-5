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
	/// Resumen de frmNuevaCasa
	/// </summary>
	public ref class frmNuevaCasa : public System::Windows::Forms::Form
	{
	public:
		
		frmNuevaCasa(void)
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
		~frmNuevaCasa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(53, 26);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(321, 225);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la Casa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 168);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Cant Ambientes :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 127);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 130);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Avenida : ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 86);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 45);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 89);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Distrito : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 48);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Departamento :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 265);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevaCasa::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(239, 265);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 19);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevaCasa::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15"
			});
			this->comboBox1->Location = System::Drawing::Point(120, 168);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(102, 21);
			this->comboBox1->TabIndex = 11;
			// 
			// frmNuevaCasa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 298);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevaCasa";
			this->Text = L"Nueva Casa";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || comboBox1->Text == "" ) {
			//datos no v�lidos
			MessageBox::Show("Por favor, inserte datos en todas las casillas");
		}
		else {
			String^ Departamento = this->textBox2->Text;
			String^ Distrito = this->textBox3->Text;
			String^ Avenida = this->textBox4->Text;
			int cantAmbientes = Convert::ToInt32(this->comboBox1->Text);


			Casa^ objCasa = gcnew Casa(0, Departamento, Distrito, Avenida, cantAmbientes);
			CasaController^ objCasaController = gcnew CasaController();
			objCasaController->agregarCasa(objCasa);
			MessageBox::Show("El proyecto se ha agregado con �xito");
			this->Close();
		}
		
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
	}

};
}
