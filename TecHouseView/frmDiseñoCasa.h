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
	/// Resumen de frmDise�oCasa
	/// </summary>
	public ref class frmDise�oCasa : public System::Windows::Forms::Form
	{
	public:
		frmDise�oCasa(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			this->tipoFigura = 1;
			this->listaFiguras = gcnew List<Figura^>();
			this->objColor = Color::Black;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmDise�oCasa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ abrirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ guardarToolStripMenuItem;
	private: List<Figura^>^ listaFiguras;
	private: int tipoFigura; /*1 - Rectangulo y 2 - Elipse*/
	private: Color objColor;
	private: int inicioX;
	private: int inicioY;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abrirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guardarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(575, 309);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 33);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Colores";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmDise�oCasa::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(575, 247);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"C�rculo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmDise�oCasa::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(575, 178);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 32);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Rect�ngulo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDise�oCasa::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Location = System::Drawing::Point(9, 26);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 472);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmDise�oCasa::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDise�oCasa::panel1_MouseDown_1);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDise�oCasa::panel1_MouseUp_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(670, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->abrirToolStripMenuItem,
					this->guardarToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// abrirToolStripMenuItem
			// 
			this->abrirToolStripMenuItem->Name = L"abrirToolStripMenuItem";
			this->abrirToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->abrirToolStripMenuItem->Text = L"Abrir";
			this->abrirToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmDise�oCasa::abrirToolStripMenuItem_Click);
			// 
			// guardarToolStripMenuItem
			// 
			this->guardarToolStripMenuItem->Name = L"guardarToolStripMenuItem";
			this->guardarToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->guardarToolStripMenuItem->Text = L"Guardar como";
			this->guardarToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmDise�oCasa::guardarToolStripMenuItem_Click);
			// 
			// frmDise�oCasa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 509);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"frmDise�oCasa";
			this->Text = L"frmDise�oCasa";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tipoFigura = 1;
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->tipoFigura = 2;
	}

	private: System::Void panel1_MouseDown_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->inicioX = e->X;
			this->inicioY = e->Y;
		}
	}

	private: System::Void panel1_MouseUp_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			int finX = e->X;
			int finY = e->Y;
			Figura^ objFigura = gcnew Figura(this->inicioX, this->inicioY, finX, finY, this->objColor, this->tipoFigura);
			this->listaFiguras->Add(objFigura);
			this->panel1->Invalidate(); /*Este metodo llama al Paint*/
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->colorDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->objColor = this->colorDialog1->Color;
		}
	}

	private: System::Void abrirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void guardarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->saveFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ nombreArchivo = this->saveFileDialog1->FileName;
			FiguraController^ objFiguraController = gcnew FiguraController();
			objFiguraController->guardarArchivo(this->listaFiguras, nombreArchivo);
		};
	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ objGraphics = e->Graphics;
		/*Voy a dibujar todas las figuras que esten en la lista de figuras*/
		for (int i = 0; i < this->listaFiguras->Count; i++) {
			Figura^ objFigura = this->listaFiguras[i];
			Pen^ objLapiz = gcnew Pen(objFigura->getColor());
			if (objFigura->getTipo() == 1) {
				/*Aqui hay que dibujar un rectangulo*/
				objGraphics->DrawRectangle(objLapiz, objFigura->getPuntoInicioX(), objFigura->getPuntoInicioY(), objFigura->getPuntoFinX() - objFigura->getPuntoInicioX(), objFigura->getPuntoFinY() - objFigura->getPuntoInicioY());
			}
			else {
				/*Aqui hay que dibujar una elipse*/
				objGraphics->DrawEllipse(objLapiz, objFigura->getPuntoInicioX(), objFigura->getPuntoInicioY(), objFigura->getPuntoFinX() - objFigura->getPuntoInicioX(), objFigura->getPuntoFinY() - objFigura->getPuntoInicioY());
			}
		}
	}

};
}