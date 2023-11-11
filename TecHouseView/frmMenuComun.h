#pragma once
#include "frmVerCasaNoAdmin.h"
#include "frmConfigPuertasYVentanas.h"
#include "frmConfigTemperatura.h"

namespace TecHouseView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TecHouseController;
	using namespace TecHouseModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmMenuComun
	/// </summary>
	public ref class frmMenuComun : public System::Windows::Forms::Form
	{
	public:
		frmMenuComun(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmMenuComun(int codigo)
		{
			InitializeComponent();
			this->codigo = codigo;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMenuComun()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox5;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciónDeControlAutomáticoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ puertasYVentanasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ temperaturaToolStripMenuItem;
	private: int codigo;
	private: double tempH1, tempH2, tempH3;		//mostrarán la temperatura de cada habitación
	private: bool LuzH1, LuzH2, LuzH3;			//mostrarán si la luz está encendida (1) o apagada (0) por habitación
	private: int cantPerH1, cantPerH2, cantPerH3;	//cantidad de personas por habitación, solo enteros del 0 a más
	private: int estadoCasa = 0;					//inicializada con 0 para mostrar Casa Segura

	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ menúPrincipalActualToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::ToolStripMenuItem^ verCasaToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenuComun::typeid));
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->configuraciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraciónDeControlAutomáticoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puertasYVentanasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temperaturaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verCasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->menúPrincipalActualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Linen;
			this->groupBox5->Controls->Add(this->pictureBox5);
			this->groupBox5->Controls->Add(this->pictureBox4);
			this->groupBox5->Location = System::Drawing::Point(537, 214);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(143, 106);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"ALERTA DE INCENDIO:";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(25, 21);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 67);
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(24, 20);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(101, 68);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Peru;
			this->groupBox4->Controls->Add(this->textBox11);
			this->groupBox4->Location = System::Drawing::Point(57, 234);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(111, 42);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Estado de la casa:";
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(16, 16);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(76, 20);
			this->textBox11->TabIndex = 13;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->pictureBox3);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Location = System::Drawing::Point(236, 204);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(272, 125);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cantidad de Personas";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(199, 10);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(44, 20);
			this->textBox10->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(89, 81);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 20);
			this->textBox7->TabIndex = 14;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label13->Location = System::Drawing::Point(156, 13);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Casa:";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(89, 55);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 20);
			this->textBox8->TabIndex = 13;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(89, 29);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(44, 20);
			this->textBox9->TabIndex = 12;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(159, 51);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(95, 68);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Habitacion 3:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Habitacion 2:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Habitacion 1:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(6, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"__________________";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(408, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(272, 112);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Sistema de Luces";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(148, 29);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(95, 68);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Habitacion 3:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(89, 81);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"ON/OFF";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Habitacion 2:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(89, 55);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"ON/OFF";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Habitacion 1:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(89, 29);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(53, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"ON/OFF";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(-3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"________________";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(73, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(272, 112);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Temperatura";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(148, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Habitacion 3:";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(98, 81);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 20);
			this->textBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Habitacion 2:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(98, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Habitacion 1:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(98, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"_____________";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->configuraciónToolStripMenuItem,
					this->verCasaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 24);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(728, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// configuraciónToolStripMenuItem
			// 
			this->configuraciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->configuraciónDeControlAutomáticoToolStripMenuItem });
			this->configuraciónToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"configuraciónToolStripMenuItem.Image")));
			this->configuraciónToolStripMenuItem->Name = L"configuraciónToolStripMenuItem";
			this->configuraciónToolStripMenuItem->Size = System::Drawing::Size(115, 24);
			this->configuraciónToolStripMenuItem->Text = L"Configuración";
			// 
			// configuraciónDeControlAutomáticoToolStripMenuItem
			// 
			this->configuraciónDeControlAutomáticoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->puertasYVentanasToolStripMenuItem,
					this->temperaturaToolStripMenuItem
			});
			this->configuraciónDeControlAutomáticoToolStripMenuItem->Name = L"configuraciónDeControlAutomáticoToolStripMenuItem";
			this->configuraciónDeControlAutomáticoToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->configuraciónDeControlAutomáticoToolStripMenuItem->Text = L"Configuración de Control Automático";
			// 
			// puertasYVentanasToolStripMenuItem
			// 
			this->puertasYVentanasToolStripMenuItem->Name = L"puertasYVentanasToolStripMenuItem";
			this->puertasYVentanasToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->puertasYVentanasToolStripMenuItem->Text = L"Puertas Y Ventanas";
			this->puertasYVentanasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuComun::puertasYVentanasToolStripMenuItem_Click);
			// 
			// temperaturaToolStripMenuItem
			// 
			this->temperaturaToolStripMenuItem->Name = L"temperaturaToolStripMenuItem";
			this->temperaturaToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->temperaturaToolStripMenuItem->Text = L"Temperatura";
			this->temperaturaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuComun::temperaturaToolStripMenuItem_Click);
			// 
			// verCasaToolStripMenuItem
			// 
			this->verCasaToolStripMenuItem->Name = L"verCasaToolStripMenuItem";
			this->verCasaToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->verCasaToolStripMenuItem->Text = L"Ver Casa";
			this->verCasaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuComun::verCasaToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menúPrincipalActualToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(728, 24);
			this->menuStrip2->TabIndex = 10;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// menúPrincipalActualToolStripMenuItem
			// 
			this->menúPrincipalActualToolStripMenuItem->Name = L"menúPrincipalActualToolStripMenuItem";
			this->menúPrincipalActualToolStripMenuItem->Size = System::Drawing::Size(144, 20);
			this->menúPrincipalActualToolStripMenuItem->Text = L"Menú Principal (Actual)";
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(408, 24);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(307, 26);
			this->textBox12->TabIndex = 23;
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmMenuComun::timer1_Tick);
			// 
			// frmMenuComun
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(728, 394);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Name = L"frmMenuComun";
			this->Text = L"Menú Común";
			this->Load += gcnew System::EventHandler(this, &frmMenuComun::frmMenuComun_Load);
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmMenuComun_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();	//para inicializar la cuenta constantemente.

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuario = objUsuarioController->buscarUsuarioxCodigo(codigo);
		String^ nombre = objUsuario->getNombre();
		this->textBox12->Text = "Bienvenido de nuevo " + nombre + "!";
		this->textBox10->Text = Convert::ToString((objUsuario->getCodigo()-1));
		this->textBox11->Text = "Activa";

		//cargará los datos actuales del Arduino a la pantalla como temperatura en cuartos, Sistema de luces y cantidad de personas
		tempH1 = 17, tempH2 = 21, tempH3 = 19;		//las inicializo con esos números pq no hay conexión con el arduino todavía
		LuzH1 = 1, LuzH2 = 0, LuzH3 = 1;				//cuando la haya se extraerán los datos del Arduino y se les asignarán a los valores de esta ventana
		cantPerH1 = 2, cantPerH2 = 0, cantPerH3 = 4;
		MostrarTemperaturas(tempH1, tempH2, tempH3);
		MostrarEstadoLuces(LuzH1, LuzH2, LuzH3);
		MostrarCantPersonas(cantPerH1, cantPerH2, cantPerH3);
		if (estadoCasa == 0) {	//estado de la casa: Seguro (0) o En Peligro (Por incendio,1)
			textBox11->Text = "Seguro";
		}
		else if (estadoCasa == 1) {
			textBox11->Text = "EN PELIGRO!";
		}
	}

	private: Void MostrarTemperaturas(double tempH1, double tempH2, double tempH3) {
		textBox1->Text = Convert::ToString(tempH1);
		textBox2->Text = Convert::ToString(tempH2);
		textBox3->Text = Convert::ToString(tempH3);
	}

	private: Void MostrarEstadoLuces(bool LuzH1, bool LuzH2, bool LuzH3) {
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

	private: Void MostrarCantPersonas(int cantPerH1, int cantPerH2, int cantPerH3) {
		textBox9->Text = Convert::ToString(cantPerH1);
		textBox8->Text = Convert::ToString(cantPerH2);
		textBox7->Text = Convert::ToString(cantPerH3);
	}

	private: System::Void verCasaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//se abrirá la ventana para ver su casa: frmVerCasaNoAdmin.h:
		frmVerCasaNoAdmin^ ventanaVerCasa = gcnew frmVerCasaNoAdmin(codigo);
		ventanaVerCasa->ShowDialog();
	}
	private: System::Void puertasYVentanasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmConfigPuertasYVentanas^ ventanaConfigPuertasYVentanas = gcnew frmConfigPuertasYVentanas();
		ventanaConfigPuertasYVentanas->ShowDialog();
	}
	private: System::Void temperaturaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmConfigTemperatura^ ventanaConfigTemperatura = gcnew frmConfigTemperatura();
		ventanaConfigTemperatura->ShowDialog();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//función de interrupción:
		ObtenerDatosArduino();
		MostrarTemperaturas(tempH1, tempH2, tempH3);
		MostrarEstadoLuces(LuzH1, LuzH2, LuzH3);
		MostrarCantPersonas(cantPerH1, cantPerH2, cantPerH3);
	}

	private: void ObtenerDatosArduino() {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> distributionHabit(19, 24);

		tempH1 = 17, tempH2 = 21, tempH3 = distributionHabit(gen);		//mostrarán la temperatura de cada habitación
		LuzH1 = 1, LuzH2 = 0, LuzH3 = 1;			//mostrarán si la luz está encendida (1) o apagada (0) por habitación
		cantPerH1 = 2, cantPerH2 = 0, cantPerH3 = 4;
	}
};
}
