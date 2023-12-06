#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Description r�sum�e de UC_Personnel
	/// </summary>
	public ref class UC_Personnel : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~UC_Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Supprimer;
	protected:
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::DataGridView^ PersonnelData;


	protected:




	protected:




	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->PersonnelData = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersonnelData))->BeginInit();
			this->SuspendLayout();
			// 
			// Supprimer
			// 
			this->Supprimer->BackColor = System::Drawing::Color::Red;
			this->Supprimer->FlatAppearance->BorderSize = 0;
			this->Supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Supprimer->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Supprimer->Location = System::Drawing::Point(823, 281);
			this->Supprimer->Margin = System::Windows::Forms::Padding(4);
			this->Supprimer->MinimumSize = System::Drawing::Size(133, 62);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(133, 62);
			this->Supprimer->TabIndex = 7;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = false;
			// 
			// Modifier
			// 
			this->Modifier->BackColor = System::Drawing::Color::DodgerBlue;
			this->Modifier->FlatAppearance->BorderSize = 0;
			this->Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Modifier->Location = System::Drawing::Point(422, 281);
			this->Modifier->Margin = System::Windows::Forms::Padding(4);
			this->Modifier->MinimumSize = System::Drawing::Size(133, 62);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(133, 62);
			this->Modifier->TabIndex = 6;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = false;
			// 
			// Ajouter
			// 
			this->Ajouter->BackColor = System::Drawing::Color::LimeGreen;
			this->Ajouter->FlatAppearance->BorderSize = 0;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ajouter->Location = System::Drawing::Point(33, 281);
			this->Ajouter->Margin = System::Windows::Forms::Padding(4);
			this->Ajouter->MinimumSize = System::Drawing::Size(133, 62);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(133, 62);
			this->Ajouter->TabIndex = 5;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = false;
			// 
			// PersonnelData
			// 
			this->PersonnelData->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PersonnelData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PersonnelData->Location = System::Drawing::Point(33, 20);
			this->PersonnelData->Name = L"PersonnelData";
			this->PersonnelData->RowHeadersWidth = 51;
			this->PersonnelData->RowTemplate->Height = 24;
			this->PersonnelData->Size = System::Drawing::Size(923, 254);
			this->PersonnelData->TabIndex = 4;
			this->PersonnelData->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UC_Personnel::dataGridView1_CellContentClick);
			// 
			// UC_Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->PersonnelData);
			this->Name = L"UC_Personnel";
			this->Size = System::Drawing::Size(988, 363);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersonnelData))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
};
}
