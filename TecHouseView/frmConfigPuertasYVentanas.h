#pragma once
#include <iostream>
#include <windows.h>

namespace TecHouseView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TecHouseController;
	using namespace TecHouseModel;
	using namespace System::IO::Ports;		//estos 3 últimos para la conexión serial con arduino y Visual
	using namespace System::Text;
	using namespace System::Net;

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

	private: int estadoAutomatizacion=1;  // 0 para no tener automatizado nada y 1 para que las puertas y ventanas se abran y cierren automáticamente
	private: int gradoAutomatizacion = 1;	//del 0 al3, al ser 0, en el arduino se conmutará el estado de la puerta
											//si es 1, conmuto ventana 1 (abro o cierro)
											//si es 2, conmuto ventana 2 (abro o cierro)
											//si es 3, conmuto ventana 3 (abro o cierro)
	private: int codigo = 1;
	private: int codigoCasa = 1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::ComponentModel::IContainer^ components;
	private: bool puertaAbierta = 0;	//0 cerrada, 1 abierta
	private: bool ventana1Abierta = 0;	//0 cerrada, 1 abierta
	private: bool ventana2Abierta = 0;	//0 cerrada, 1 abierta
	private: bool ventana3Abierta = 0;	//0 cerrada, 1 abierta
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmConfigPuertasYVentanas::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
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
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Info;
			this->button6->Location = System::Drawing::Point(387, 125);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 23);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Conmutar";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->Location = System::Drawing::Point(387, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 23);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Conmutar";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Location = System::Drawing::Point(167, 126);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 23);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Conmutar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->Location = System::Drawing::Point(167, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 23);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Conmutar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(302, 128);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(79, 20);
			this->textBox4->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(302, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(79, 20);
			this->textBox3->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(86, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 20);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(86, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 20);
			this->textBox1->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(240, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Ventana3:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(240, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Ventana2:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Ventana1:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Puerta:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(287, 229);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 24);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"Activo/Desactivado";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(284, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Estado automatizacion actual:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(171, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Activar automatización en puertas y ventanas";
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
			this->label3->Location = System::Drawing::Point(29, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Estado de las Puertas y Ventanas:";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmConfigPuertasYVentanas::timer1_Tick);
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 115200;
			this->serialPort1->PortName = L"COM5";
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &frmConfigPuertasYVentanas::serialPort1_DataReceived);
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
			estadoAutomatizacion = 1;
			gradoAutomatizacion = 1;
			textBox5->Text = "Activado";
			ConfigPyVController^ objController = gcnew ConfigPyVController();
			ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas(codigo, codigoCasa, estadoAutomatizacion, gradoAutomatizacion);
			objController->actualizarConfigPyV(objConfiguracion);
			array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("ActivarAutomaPyV");		 //le digo al arduino que active la automatizacion
			serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//botón NO automatizar puertas y ventanas (desactivarlas completamente)
		estadoAutomatizacion = 0;
		textBox5->Text = "Desactivado";		//para que detecte que se cambiaron datos y por nuestro criterio, al estar desactivada la autom. entonces el estado es 0
		ConfigPyVController^ objController = gcnew ConfigPyVController();
		ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas(codigo,codigoCasa,estadoAutomatizacion,gradoAutomatizacion);
		objController->actualizarConfigPyV(objConfiguracion);
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("DesactivarAutomaPyV");		 //le digo al arduino que active la automatizacion
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}


	private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void frmConfigPuertasYVentanas_Load(System::Object^ sender, System::EventArgs^ e) {
		//LOAD:
		timer1->Start();	//para inicializar la cuenta constantemente.

		ConfigPyVController^ objController = gcnew ConfigPyVController();
		ConfigPuertasYVentanas^ objConfiguracion = gcnew ConfigPuertasYVentanas();
		objConfiguracion = objController->buscarConfiguracionxCodigo(1);
		gradoAutomatizacion = objConfiguracion->getGradoAutomatizacion();
		estadoAutomatizacion = objConfiguracion->getEstadoAutomatizacion();
		if (estadoAutomatizacion == 0) {
			//desactivado
			textBox5->Text = "Desactivada";
		}
		else {
			//estadoAutomatizacion es 1:
			textBox5->Text = "Activada";
		}
		//se tendrá que extraer el valor del arduino o de la base de datos
		ObtenerAbiertoOCerrado();
		MostrarAbiertoOCerradoTextos();

	}

	private: void MostrarAbiertoOCerradoTextos() {
		if (puertaAbierta) {
			textBox1->Text = "Abierta";
		}
		else {
			textBox1->Text = "Cerrada";
		}

		if (ventana1Abierta) {
			textBox2->Text = "Abierta";
		}
		else {
			textBox2->Text = "Cerrada";
		}

		if (ventana2Abierta) {
			textBox3->Text = "Abierta";
		}
		else {
			textBox3->Text = "Cerrada";
		}

		if (ventana3Abierta) {
			textBox4->Text = "Abierta";
		}
		else {
			textBox4->Text = "Cerrada";
		}
	}

	private: void ObtenerAbiertoOCerrado() {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("AbiertosOCerrados");		//el arduino mandara si estan cerradas o abiertas las puertas
		serialPort1->Write(miBuffer, 0, miBuffer->Length);		//recibira 1011  de izquierda a derecha es puerta hacia la ventana3
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//TIMER TICK, es como un Systick, cada cierto tiempo se ejecuta una función (el intervalo de tiempo se configura en la ventana misma)
	//click derecho al Timer1 y el Intervale ahí se coloca en ms
		ObtenerAbiertoOCerrado();
		MostrarAbiertoOCerradoTextos();
	}				

	private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		//cuando recibe datos
		recibir = serialPort1->ReadLine();	//ya tengo los 4 caracteres		1011
		int numero = Convert::ToInt32(recibir);
		
		int millar = numero / 1000;			//puerta
		int centena = (numero - millar*1000)/100 ;		//ventana 1
		int decena = (numero - centena * 100) / 10;		//ventana 2
		int unidad = numero % 10;						//ventana 3
		puertaAbierta = millar;
		ventana1Abierta = centena;
		ventana2Abierta = decena;
		ventana3Abierta = unidad;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//conmutar estado puerta
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("ConmutarPuerta");		//el arduino mandara si estan cerradas o abiertas las puertas
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//conmutar ventana 1
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("ConmutarVentanaUno");		//el arduino mandara si estan cerradas o abiertas las puertas
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("ConmutarVentanaDos");		//el arduino mandara si estan cerradas o abiertas las puertas
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		array<Byte>^ miBuffer = Encoding::ASCII->GetBytes("ConmutarVentanaTres");		//el arduino mandara si estan cerradas o abiertas las puertas
		serialPort1->Write(miBuffer, 0, miBuffer->Length);
	}
};
}
