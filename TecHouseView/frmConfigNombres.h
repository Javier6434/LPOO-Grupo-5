#pragma once

namespace TecHouseView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmConfigNombres
	/// </summary>
	public ref class frmConfigNombres : public System::Windows::Forms::Form
	{
	public:
		frmConfigNombres(void)
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
		~frmConfigNombres()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox5;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(12, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 290);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cambiar Nombres";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmConfigNombres::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Habitacion 1:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(99, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Habitacion 2:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(107, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &frmConfigNombres::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ventana 1:";
			this->label3->Click += gcnew System::EventHandler(this, &frmConfigNombres::label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(99, 65);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(71, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Habitacion 3:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(107, 68);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(71, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &frmConfigNombres::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Ventana 3:";
			this->label5->Click += gcnew System::EventHandler(this, &frmConfigNombres::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(107, 37);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(71, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmConfigNombres::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Ventana 2:";
			this->label6->Click += gcnew System::EventHandler(this, &frmConfigNombres::label6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(107, 31);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(71, 20);
			this->textBox7->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Garaje:";
			this->label7->Click += gcnew System::EventHandler(this, &frmConfigNombres::label7_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(107, 0);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(71, 20);
			this->textBox8->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Puerta 1:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(10, 24);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(71, 20);
			this->textBox9->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Nombre:";
			this->label9->Click += gcnew System::EventHandler(this, &frmConfigNombres::label9_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Linen;
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(16, 122);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(193, 98);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Linen;
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Location = System::Drawing::Point(16, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(193, 95);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Linen;
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(16, 233);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(193, 53);
			this->groupBox4->TabIndex = 20;
			this->groupBox4->TabStop = false;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 54);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"(El nombre con el";
			this->label10->Click += gcnew System::EventHandler(this, &frmConfigNombres::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 67);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"cual se le llamará)";
			this->label11->Click += gcnew System::EventHandler(this, &frmConfigNombres::label11_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Location = System::Drawing::Point(223, 112);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(106, 93);
			this->groupBox5->TabIndex = 23;
			this->groupBox5->TabStop = false;
			// 
			// frmConfigNombres
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 306);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmConfigNombres";
			this->Text = L"frmConfigNombres";
			this->Load += gcnew System::EventHandler(this, &frmConfigNombres::frmConfigNombres_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmConfigNombres_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
