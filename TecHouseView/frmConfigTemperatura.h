#pragma once
#include <random>

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
	/// Resumen de frmConfigTemperatura
	/// </summary>
	public ref class frmConfigTemperatura : public System::Windows::Forms::Form
	{
	public:
		frmConfigTemperatura(void)
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
		~frmConfigTemperatura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: double EstablecerTempMin;
	private: double EstablecerTempMax;
	private: double TempMinActual;
	private: double TempMaxActual;
	private: double TempHab1;
	private: double TempHab2;
	private: double TempHab3;
	private: bool estadoAutomatizacion = 1;		//1 para activar o actualizar automa. 0 para permanecer desactivada
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmConfigTemperatura::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(-1, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(677, 303);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(542, 179);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(108, 20);
			this->textBox8->TabIndex = 20;
			this->textBox8->Text = L"25";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(466, 179);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Habitación 3:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(542, 133);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(108, 20);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"25";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(542, 86);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(108, 20);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"20";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(466, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Habitación 2:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(466, 89);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Habitación 1:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(468, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(195, 15);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Temperatura en Habitaciones [°C]:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(362, 216);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(97, 20);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"ON/OFF";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(301, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Estado actual:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(172, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Activar/Actualizar automatización en temperatura";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmConfigTemperatura::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(63, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 52);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Desactivar automatización en temperatura";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmConfigTemperatura::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(328, 134);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"25";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(328, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"20";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(262, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Máxima:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(263, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Mínima:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(254, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Rango de valores actuales:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(128, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmConfigTemperatura::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(128, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmConfigTemperatura::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Temperatura Máxima:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Temperatura Mínima:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Establecer rango de valores:";
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmConfigTemperatura::timer1_Tick);
			// 
			// frmConfigTemperatura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 275);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmConfigTemperatura";
			this->Text = L"Configurar Temperatura";
			this->Load += gcnew System::EventHandler(this, &frmConfigTemperatura::frmConfigTemperatura_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//cambia el valor de texto de la temperatura Mínima a cambiar

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//cambia el valor de texto de la temperatura Máxima a cambiar

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//activar o actualizar automatización y rangos de temperaturas
		//comprobando que el usuario coloque algo en las casillas:
		if (textBox1->Text == "" || textBox2->Text=="" || Convert::ToDouble(textBox1->Text)<-20 || Convert::ToDouble(textBox2->Text) < -20 || Convert::ToDouble(textBox1->Text) > 45 || Convert::ToDouble(textBox2->Text) > 45 || Convert::ToDouble(textBox2->Text) == Convert::ToDouble(textBox1->Text)) {
			//si es que no hay nada en alguno de los campos, no actualizará
			MessageBox::Show("Por favor, ingrese valores válidos para el rango de temperaturas [-20;45] °C.");
		}
		else {
			//Los datos ingresados son correctos:
			EstablecerTempMin = Convert::ToDouble(textBox1->Text);
			EstablecerTempMax = Convert::ToDouble(textBox2->Text);
			//comprobando que uno sea mayor que el otro
			if (EstablecerTempMax < EstablecerTempMin) {
				double aux = EstablecerTempMin;
				EstablecerTempMin = EstablecerTempMax;
				EstablecerTempMax = aux;
			}
			estadoAutomatizacion = 1;	//activado
			textBox4->Text = Convert::ToString(EstablecerTempMin);
			textBox3->Text = Convert::ToString(EstablecerTempMax);
			textBox5->Text = "En Funcionamiento";
			//lo paso a la base de datos:
			TemperaturaController^ objController = gcnew TemperaturaController();
			ConfigDatos^ objConfigDatos;
			estadoAutomatizacion = 1;		//esto significa que Actual será 1 tmb
			Temperatura^ objTemperatura = gcnew Temperatura(1,EstablecerTempMin,EstablecerTempMax,estadoAutomatizacion,objConfigDatos);
			objController->actualizarTemperatura(objTemperatura);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//desactivar automatizacion y rangos de temperatura
		estadoAutomatizacion = 0;	//desactivado
		textBox4->Text = "Desactivado";
		textBox3->Text = "Desactivado";
		textBox5->Text = "Desactivado";
		TemperaturaController^ objController = gcnew TemperaturaController();
		ConfigDatos^ objConfigDatos;
		Temperatura^ objTemperatura = gcnew Temperatura(1, EstablecerTempMin, EstablecerTempMax, estadoAutomatizacion, objConfigDatos);
		objController->actualizarTemperatura(objTemperatura);
	}
	private: System::Void frmConfigTemperatura_Load(System::Object^ sender, System::EventArgs^ e) {
		//LOAD:
		timer1->Start();	//para inicializar la cuenta constantemente.

		TemperaturaController^ objController = gcnew TemperaturaController();
		Temperatura^ objTemperatura = gcnew Temperatura();
		objTemperatura = objController->buscarConfiguracionxCodigo(1);
		TempMinActual = objTemperatura->getMin();
		TempMaxActual = objTemperatura->getMax();

		TempHab1 = 23, TempHab2 = 22, TempHab3 = 21;		//estos 5 valores se obtendrán del arduino y se mostrarán en sus respectivos textBoxs
		//sea Actual=0 entonces estadoAutomatizacion es 0. Si actual es 1, estadoAutomatizacion tmb será 1.
		if (objTemperatura->getActual() == 0) {
			estadoAutomatizacion = 0;
		}
		else {
			estadoAutomatizacion = 1;
		}
		
		
		
		if (estadoAutomatizacion == 0) {
			//está desactivada la automatizacion y rangos de temperatura
			textBox4->Text = "Desactivado";
			textBox3->Text = "Desactivado";
			textBox5->Text = "Desactivado";
		}
		else {
			//continúa la automatizacion y muestra valores
			textBox4->Text = Convert::ToString(TempMinActual);
			textBox3->Text = Convert::ToString(TempMaxActual);
			textBox5->Text = "En Funcionamiento";
		}
		//para ambos casos igualmente mostraré las temperaturas actuales de las habitaciones
		textBox7->Text = Convert::ToString(TempHab1);
		textBox6->Text = Convert::ToString(TempHab2);
		textBox8->Text = Convert::ToString(TempHab3);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//función de interrupcion, se ejecutará cada 3 segundos
		ExtraerValoresArduino();
		TemperaturaController^ objController = gcnew TemperaturaController();
		ConfigDatos^ objConfigDatos;
		Temperatura^ objTemperatura = gcnew Temperatura(1, TempMinActual, TempMaxActual, estadoAutomatizacion, objConfigDatos);
		objController->actualizarTemperatura(objTemperatura);
		textBox7->Text = Convert::ToString(TempHab1);
		textBox6->Text = Convert::ToString(TempHab2);
		textBox8->Text = Convert::ToString(TempHab3);

	}

	private: void ExtraerValoresArduino() {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> distributionHabit(19, 24);
		TempHab1 = distributionHabit(gen);
		TempHab2 = distributionHabit(gen);
		TempHab3 = distributionHabit(gen);
	}
};
}
