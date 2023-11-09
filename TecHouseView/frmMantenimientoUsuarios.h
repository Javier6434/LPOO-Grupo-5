#pragma once
#include "frmNuevoUsuario.h"
#include "frmEditarUsuario.h"

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
	/// Resumen de frmMantenimientoUsuarios
	/// </summary>
	public ref class frmMantenimientoUsuarios : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoUsuarios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmMantenimientoUsuarios(int codigo)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->codigo = codigo;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantenimientoUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ApellidoPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaNacimiento;
	private: int codigo;




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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApellidoPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaNacimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(350, 316);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 19);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(253, 316);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 316);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 19);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->ApellidoPaterno, this->FechaNacimiento
			});
			this->dataGridView1->Location = System::Drawing::Point(26, 138);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(499, 158);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantenimientoUsuarios::dataGridView1_CellContentClick);
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
			this->Column2->HeaderText = L"Tipo";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombre";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ApellidoMaterno";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// ApellidoPaterno
			// 
			this->ApellidoPaterno->HeaderText = L"ApellidoPaterno";
			this->ApellidoPaterno->Name = L"ApellidoPaterno";
			// 
			// FechaNacimiento
			// 
			this->FechaNacimiento->HeaderText = L"FechaNacimiento";
			this->FechaNacimiento->Name = L"FechaNacimiento";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(26, 24);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(499, 97);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(188, 70);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(112, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 73);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(351, 52);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(188, 38);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(112, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo:";
			// 
			// frmMantenimientoUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 349);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantenimientoUsuarios";
			this->Text = L"Mantenimiento de Usuarios";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoUsuarios::frmMantenimientoUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Buscar
		String^ Tipo = this->comboBox1->Text; 
		String^ Nombre = this->comboBox2->Text;
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List<Usuario^>^ listaUsuarios = objUsuarioController->buscarUsuariosxTipoyNombre(Tipo, Nombre);
		mostrarGrilla(listaUsuarios);
	}

	private: void mostrarGrilla(List<Usuario^>^ listaUsuarios) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaUsuarios->Count; i++) {
			Usuario^ objUsuario = listaUsuarios[i];
			/*Esta filaGrilla representa una fila del data grid de la pantalla*/
			array<String^>^ filaGrilla = gcnew array<String^>(6);
			filaGrilla[0] = Convert::ToString(objUsuario->getCodigo());
			filaGrilla[1] = objUsuario->getTipo();
			filaGrilla[2] = objUsuario->getNombre();
			filaGrilla[3] = objUsuario->getApellidoMaterno();
			filaGrilla[4] = objUsuario->getApellidoPaterno();
			filaGrilla[5] = objUsuario->getFechaDeNacimiento();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Nuevo
		frmNuevoUsuario^ ventanaNuevoUsuario = gcnew frmNuevoUsuario(codigo);
		ventanaNuevoUsuario->ShowDialog();
		
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Editar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; 
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuario = objUsuarioController->buscarUsuarioxCodigo(codigoEditar);
		SesionController^ objSesionController = gcnew SesionController();
		Sesion^ objSesion = objSesionController->buscarSesionxCodigo(codigoEditar);
		frmEditarUsuario^ ventanaEditarUsuario = gcnew frmEditarUsuario(objUsuario, objSesion);
		ventanaEditarUsuario->ShowDialog();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Eliminar
		UsuarioController^ objeto = gcnew UsuarioController();
		SesionController^ objetoSesion = gcnew SesionController();
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; 
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		objeto->eliminarUsuarioFisica(codigoEliminar);
		objetoSesion->eliminarSesionFisica(codigoEliminar);
		MessageBox::Show("El Usuario ha sido eliminado con éxito");
	}

	private: System::Void frmMantenimientoUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List<String^>^ listaTipos = objUsuarioController->obtenerTipos();
		List<String^>^ listaNombres = objUsuarioController->obtenerNombres();
		this->comboBox1->Items->Clear();
		for (int i = 0; i < listaTipos->Count; i++) {
			this->comboBox1->Items->Add(listaTipos[i]);
		}
		for (int j = 0; j < listaNombres->Count; j++) {
			this->comboBox2->Items->Add(listaNombres[j]);
		}
		//ahora para filtrar si el usuario que ha entrado a esta ventana es admin o no, (no podrá eliminar otros usuarios si no es admin)
		String^ tipoUsuario = objUsuarioController->buscarUsuarioxCodigo(codigo)->getTipo();
		if (tipoUsuario != "Administrador") {
			//si no es administrador, se bloquea el botón de eliminar:
			this->button4->Enabled = false;
		}
		
	}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
