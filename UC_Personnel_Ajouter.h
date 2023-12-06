#pragma once
#include "CL_Services.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Personnel_Ajouter
	/// </summary>
	public ref class UC_Personnel_Ajouter : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel_Ajouter(void)
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
		~UC_Personnel_Ajouter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblAjouterEmployes;
	private: System::Windows::Forms::Button^ button1;
	private: CL_Services^ Services;
	protected:

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
			this->lblAjouterEmployes = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAjouterEmployes
			// 
			this->lblAjouterEmployes->AutoSize = true;
			this->lblAjouterEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->lblAjouterEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblAjouterEmployes->Location = System::Drawing::Point(2, 4);
			this->lblAjouterEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAjouterEmployes->Name = L"lblAjouterEmployes";
			this->lblAjouterEmployes->Size = System::Drawing::Size(126, 13);
			this->lblAjouterEmployes->TabIndex = 2;
			this->lblAjouterEmployes->Text = L"AJOUTER EMPLOYE";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(253, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UC_Personnel_Ajouter::button1_Click);
			// 
			// UC_Personnel_Ajouter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblAjouterEmployes);
			this->Name = L"UC_Personnel_Ajouter";
			this->Size = System::Drawing::Size(583, 295);
			this->Load += gcnew System::EventHandler(this, &UC_Personnel_Ajouter::UC_Personnel_Ajouter_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Services->ajouterPersonne("Geores", "gor", "12", "13", 5);
	}
	private: System::Void UC_Personnel_Ajouter_Load(System::Object^ sender, System::EventArgs^ e) {
		Services = gcnew CL_Services();
	}
	};
}
