#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Personnel_Afficher
	/// </summary>
	public ref class UC_Personnel_Afficher : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel_Afficher(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UC_Personnel_Afficher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblAfficherEmployes;
	protected:

	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblAfficherEmployes = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblAfficherEmployes
			// 
			this->lblAfficherEmployes->AutoSize = true;
			this->lblAfficherEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lblAfficherEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblAfficherEmployes->Location = System::Drawing::Point(3, 5);
			this->lblAfficherEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAfficherEmployes->Name = L"lblAfficherEmployes";
			this->lblAfficherEmployes->Size = System::Drawing::Size(174, 13);
			this->lblAfficherEmployes->TabIndex = 1;
			this->lblAfficherEmployes->Text = L"AFFICHAGE DES EMPLOYES";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(574, 271);
			this->dataGridView1->TabIndex = 2;
			// 
			// UC_Personnel_Afficher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lblAfficherEmployes);
			this->Name = L"UC_Personnel_Afficher";
			this->Size = System::Drawing::Size(583, 295);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
