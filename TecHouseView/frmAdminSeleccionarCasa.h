#pragma once
#include "frmMenuCliente.h"
#include "frmMenuComun.h"

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
	/// Resumen de frmAdminSeleccionarCasa
	/// </summary>
	public ref class frmAdminSeleccionarCasa : public System::Windows::Forms::Form
	{
	public:
		frmAdminSeleccionarCasa(void)
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
		~frmAdminSeleccionarCasa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CantAmbientes;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Void ventanaMenuCliente_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		groupBox2->Visible = true;
	}

	private: System::Void ventanaMenuComun_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		groupBox2->Visible = true;
	}

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CantAmbientes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(111, 290);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 24);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Ingresar a la Casa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAdminSeleccionarCasa::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->CantAmbientes
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 119);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(484, 158);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Departamento";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Distrito";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Avenida";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// CantAmbientes
			// 
			this->CantAmbientes->HeaderText = L"CantAmbientes";
			this->CantAmbientes->Name = L"CantAmbientes";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(5, 6);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(484, 97);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(200, 69);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(112, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(87, 70);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Distrito:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(338, 51);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAdminSeleccionarCasa::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(200, 34);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(112, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(87, 37);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Departamento:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Location = System::Drawing::Point(78, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(566, 343);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(282, 290);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 24);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAdminSeleccionarCasa::button2_Click);
			// 
			// frmAdminSeleccionarCasa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 398);
			this->Controls->Add(this->groupBox2);
			this->IsMdiContainer = true;
			this->Name = L"frmAdminSeleccionarCasa";
			this->Text = L"Seleccionar Casa de un usuario";
			this->Load += gcnew System::EventHandler(this, &frmAdminSeleccionarCasa::frmAdminSeleccionarCasa_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Buscar
		String^ departamento = this->comboBox1->Text;
		String^ distrito = this->comboBox2->Text;
		CasaController^ objProyectoController = gcnew CasaController();
		List<Casa^>^ listaProyectos = objProyectoController->buscarCasas(departamento, distrito);
		mostrarGrilla(listaProyectos);
	}

	private: void mostrarGrilla(List<Casa^>^ listaCasas) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaCasas->Count; i++) {
			Casa^ objCasa = listaCasas[i];
			/*Esta filaGrilla representa una fila del data grid de la pantalla*/
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objCasa->getCodigo());
			filaGrilla[1] = objCasa->getDepartamento();
			filaGrilla[2] = objCasa->getDistrito();
			filaGrilla[3] = objCasa->getAvenida();
			filaGrilla[4] = Convert::ToString(objCasa->getcantAmbientes());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}

	private: System::Void frmAdminSeleccionarCasa_Load(System::Object^ sender, System::EventArgs^ e) {
			CasaController^ objCasaController = gcnew CasaController();
		List<String^>^ listaDepartamentos = objCasaController->obtenerDepartamentos();
		List<String^>^ listaDistritos = objCasaController->obtenerDistritos();
		this->comboBox1->Items->Clear();
		for (int i = 0; i < listaDepartamentos->Count; i++) {
			this->comboBox1->Items->Add(listaDepartamentos[i]);
		}
		for (int j = 0; j < listaDistritos->Count; j++) {
			this->comboBox2->Items->Add(listaDistritos[j]);
		}
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		


		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		//ya tengo el código de la casa seleccionada
		codigoEditar = codigoEditar + 1; //ya que las casas comienzan del 1 al 5 mientras que javier parriba tenemos codigos 2 parriba
		//ahora el admin entrará a una ventana según el código que seleccionó (casa seleccionada)
		if (codigoEditar >= 6) {
			codigoEditar = 5;
		}
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		String^ Tipo = (objUsuarioController->buscarTipoUsuarioxCodigo(codigoEditar));
		if (Tipo != "Administrador") {
			//un administrador no puede entrar a la casa de un administrador, ya que los administradores no poseen casa asociada
			if (Tipo == "Cliente") {
				frmMenuCliente^ ventanaMenuCliente = gcnew frmMenuCliente(codigoEditar);
				ventanaMenuCliente->FormClosed += gcnew FormClosedEventHandler(this, &frmAdminSeleccionarCasa::ventanaMenuCliente_FormClosed);
				ventanaMenuCliente->MdiParent = this;
				groupBox2->Visible = false;
				ventanaMenuCliente->Show();
			}
			else {
				if (Tipo == "Familiar") {
					frmMenuComun^ ventanaMenuComun = gcnew frmMenuComun(codigoEditar);
					ventanaMenuComun->FormClosed += gcnew FormClosedEventHandler(this, &frmAdminSeleccionarCasa::ventanaMenuComun_FormClosed);
					ventanaMenuComun->MdiParent = this;
					groupBox2->Visible = false;
					ventanaMenuComun->Show();
				}
				else {
					if (Tipo == "Cuidador") {
						frmMenuComun^ ventanaMenuComun = gcnew frmMenuComun(codigoEditar);
						ventanaMenuComun->FormClosed += gcnew FormClosedEventHandler(this, &frmAdminSeleccionarCasa::ventanaMenuComun_FormClosed);
						ventanaMenuComun->MdiParent = this;
						groupBox2->Visible = false;
						ventanaMenuComun->Show();
					}
				}
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
