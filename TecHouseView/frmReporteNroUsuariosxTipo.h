#pragma once

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
	/// Resumen de frmReporteNroUsuariosxTipo
	/// </summary>
	public ref class frmReporteNroUsuariosxTipo : public System::Windows::Forms::Form
	{
	public:
		frmReporteNroUsuariosxTipo(void)
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
		~frmReporteNroUsuariosxTipo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Location = System::Drawing::Point(32, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(503, 334);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(218, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(82, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Filtrar por tipo de Usuario:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(324, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 22);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmReporteNroUsuariosxTipo::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(47, 54);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(417, 264);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteNroUsuariosxTipo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(565, 383);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmReporteNroUsuariosxTipo";
			this->Text = L"Reporte de número de Usuarios";
			this->Load += gcnew System::EventHandler(this, &frmReporteNroUsuariosxTipo::frmReporteNroUsuariosxTipo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//presiono buscar
		//es lo mismo que el LOAD, solo que en vez de buscarAll(), es buscarxtipo
		String^ tipo = this->comboBox1->Text; /*De esta forma obtengo el texto que el selecciono en el combo box*/
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List<Usuario^>^ listaUsuarios = objUsuarioController->buscarUsuariosxTipo(tipo);
		this->chart1->Series["Series1"]->Points->Clear();		//limpio el gráfico de barras
		List<String^>^ listaTipos = gcnew List<String^>();
		for (int i = 0; i < listaUsuarios->Count; i++) {
			String^ tipo = listaUsuarios[i]->getTipo();
			/*Voy a buscarlo en la listaDepartamentos*/
			int existe = 0;
			for (int j = 0; j < listaTipos->Count; j++) {
				if (listaTipos[j]->Contains(tipo)) {
					existe = 1;
				}
			}
			if (existe == 0) {
				listaTipos->Add(tipo);
			}
		}
		//ya tengo la lista de tipos de usuario

		int CantidadTipos[7];					//coloqué una cantidad máxima de tipos de 7
		for (int i = 0; i < 7; i++) {			//debería ser hasta listaTipos->Count, pero le cambie para que no salga warning
			CantidadTipos[i] = 0;
		}
		for (int i = 0; i < listaUsuarios->Count; i++) {
			for (int j = 0; j < listaTipos->Count; j++) {
				if (listaUsuarios[i]->getTipo() == listaTipos[j]) {
					CantidadTipos[j]++;
				}
			}
		}
		//ya obtuve la cantidad de usuarios por tipo, ordenado con la lista de tipos

		for (int i = 0; i < listaTipos->Count; i++) {		//recorro todos los Usuarios
			this->chart1->Series["Series1"]->Points->Add(CantidadTipos[i]);		//ENCONTRÉ "SERIES1" en propiedades del CHart, 
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaTipos[i];		//se llama Series la opcion, la abroy compruebo
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaTipos[i];
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(CantidadTipos[i]);
		}
		//ESTO para que cargue el comboBox con los departamentos disponibles a filtrar para los Usuarios
	}



	private: System::Void frmReporteNroUsuariosxTipo_Load(System::Object^ sender, System::EventArgs^ e) {
		//LOAD:
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List<Usuario^>^ listaUsuarios = objUsuarioController->buscarAll();
		List<String^>^ listaTipos = gcnew List<String^>();
		for (int i = 0; i < listaUsuarios->Count; i++) {
			String^ tipo = listaUsuarios[i]->getTipo();
			/*Voy a buscarlo en la listaDepartamentos*/
			int existe = 0;
			for (int j = 0; j < listaTipos->Count; j++) {
				if (listaTipos[j]->Contains(tipo)) {
					existe = 1;
				}
			}
			if (existe == 0) {
				listaTipos->Add(tipo);
			}
		}
		//ya tengo la lista de tipos de usuario

		int CantidadTipos [7] ;					//coloqué una cantidad máxima de tipos de 7
		for (int i = 0; i < 7; i++) {			//debería ser hasta listaTipos->Count, pero le cambie para que no salga warning
			CantidadTipos[i] = 0;						
		}
		for (int i = 0; i < listaUsuarios->Count; i++) {
			for (int j = 0; j < listaTipos->Count; j++) {
				if (listaUsuarios[i]->getTipo() == listaTipos[j]) {
					CantidadTipos[j]++;
				}
			}
		}
		//ya obtuve la cantidad de usuarios por tipo, ordenado con la lista de tipos

		for (int i = 0; i < listaTipos->Count; i++) {		//recorro todos los Usuarios
			this->chart1->Series["Series1"]->Points->Add(CantidadTipos[i]);		//ENCONTRÉ "SERIES1" en propiedades del CHart, 
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaTipos[i];		//se llama Series la opcion, la abroy compruebo
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaTipos[i];
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(CantidadTipos[i]);
		}
		//ESTO para que cargue el comboBox con los departamentos disponibles a filtrar para los Usuarios
		this->comboBox1->Items->Clear();
		for (int i = 0; i < listaTipos->Count; i++) {
			this->comboBox1->Items->Add(listaTipos[i]);
		}
	}
};
}
