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
	/// Resumen de frmVerCasaNoAdmin
	/// </summary>
	public ref class frmVerCasaNoAdmin : public System::Windows::Forms::Form
	{
	public:
		frmVerCasaNoAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->tipoFigura = 1;
			this->listaFiguras = gcnew List<Figura^>();
			this->objColor = Color::Black;
		}

		frmVerCasaNoAdmin(int codigo)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->codigo = codigo;
			this->tipoFigura = 1;
			this->listaFiguras = gcnew List<Figura^>();
			this->objColor = Color::Black;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerCasaNoAdmin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: int codigo;
	private: List<Figura^>^ listaFiguras;
	private: int tipoFigura; /*1 - Rectangulo y 2 - Elipse*/
	private: Color objColor;
	private: int inicioX;
	private: int inicioY;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Location = System::Drawing::Point(75, 30);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 472);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmVerCasaNoAdmin::panel1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(178, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 38);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"Casa Número _ :";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmVerCasaNoAdmin::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(316, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 21);
			this->button1->TabIndex = 12;
			this->button1->Text = L"CERRAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerCasaNoAdmin::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// frmVerCasaNoAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 535);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"frmVerCasaNoAdmin";
			this->Text = L"Ver Casa";
			this->Load += gcnew System::EventHandler(this, &frmVerCasaNoAdmin::frmVerCasaNoAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void abrirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void guardarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void frmVerCasaNoAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		//cargo el archivo según el código que haya recibido, codigo=1 => abro dibujoCasa1
		String^ nombreArchivo = "dibujoCasa" + Convert::ToString(codigo);
			FiguraController^ objFiguraController = gcnew FiguraController();
			this->listaFiguras = objFiguraController->leerArchivo(nombreArchivo);
			this->panel1->Invalidate();			//va a actualizar el panel
			this->textBox1->Text = "Casa Número " + Convert::ToString(codigo);
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
