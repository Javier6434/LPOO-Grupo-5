#pragma once

namespace TecHouseView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Text;
	using namespace System::Net;

	/// <summary>
	/// Resumen de frmConfigLuces
	/// </summary>
	public ref class frmConfigLuces : public System::Windows::Forms::Form
	{
	public:
		frmConfigLuces(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			//
			//TODO: agregar código de constructor aquí
			//
			// Abrir puerto mientras se ejecuta la aplicación.  
			if (!serialPort1->IsOpen)
			{
				try
				{
					serialPort1->Open();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->ToString());
				}

			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmConfigLuces()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Timer^ timer1;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::ComponentModel::IContainer^ components;
	private: bool estadoAutoLuces = 1;
	private: bool LuzH1=0, LuzH2=1, LuzH3=0;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: String^ recibir;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmConfigLuces::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Location = System::Drawing::Point(2, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(496, 304);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Luces:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(26, 103);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(430, 184);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sistema de Luces";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(326, 140);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 27);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Apagar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmConfigLuces::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(260, 139);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 27);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Prender";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmConfigLuces::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(326, 86);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 27);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Apagar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmConfigLuces::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(260, 86);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 27);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Prender";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmConfigLuces::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(326, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 27);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Apagar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmConfigLuces::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(260, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 27);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Prender";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmConfigLuces::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Habitacion 3:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(157, 134);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(84, 31);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"ON/OFF";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 25);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Habitacion 2:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(157, 84);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(84, 31);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"ON/OFF";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Habitacion 1:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(157, 30);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(84, 31);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"ON/OFF";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(-3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 25);
			this->label8->TabIndex = 4;
			this->label8->Text = L"________________";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(109, 29);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(280, 68);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 115200;
			this->serialPort1->PortName = L"COM5";
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmConfigLuces::serialPort1_DataReceived);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmConfigLuces::timer1_Tick);
			// 
			// frmConfigLuces
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 304);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmConfigLuces";
			this->Text = L"frmConfigLuces";
			this->Load += gcnew System::EventHandler(this, &frmConfigLuces::frmConfigLuces_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//función del timer
		ObtenerDatosArduino();
		MostrarEstadoLuces(LuzH1,LuzH2,LuzH3);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	}

	private: Void MostrarEstadoLuces(bool LuzH1,bool LuzH2,bool LuzH3) {
		if (LuzH1 == 1) {
			textBox6->Text = "ON";
		}
		else {
			textBox6->Text = "OFF";
		}
		
		if (LuzH2 == 1) {
			textBox5->Text = "ON";
		}
		else {
			textBox5->Text = "OFF";
		}

		if (LuzH3 == 1) {
			textBox4->Text = "ON";
		}
		else {
			textBox4->Text = "OFF";
		}
	}
	private: System::Void frmConfigLuces_Load(System::Object^ sender, System::EventArgs^ e) {
	//LOAD:
		
		timer1->Start();	//para inicializar la cuenta constantemente.

		Object^ objectArray = SerialPort::GetPortNames();			//para conectar al puerto del Arduino
		if (!this->serialPort1->IsOpen)
		{
			this->serialPort1->PortName = Convert::ToString(objectArray);

			this->serialPort1->Open();
		}
		ObtenerDatosArduino();
		MostrarEstadoLuces(LuzH1, LuzH2, LuzH3);	//muestra en los textBox


	}


	private: void ObtenerDatosArduino() {

		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Leds");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);

	}
	private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		recibir = serialPort1->ReadLine();	//obtendrá los datos de los leds tipo "101" significa led1 a 1, led 2 a 0 y led3 a 1
		int aux = Convert::ToInt32(recibir);
		LuzH3 = aux % 10;//la 3ra cifra
		LuzH2 = (aux / 10) % 10;
		LuzH1 = aux / 100;	//la 1ra cifra (de 100, obtendría 1)
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//boton apagar LUZH3
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Led3OFF");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//boton prender LUZH1
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Led1ON");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//boton apagar LUZH1
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Led1OFF");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//prender LUZH2
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Led2ON");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//apagar LUZH2
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Led2OFF");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//prender LUZH3
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("Led3ON");
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
};
}
