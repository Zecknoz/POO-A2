#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Commande_Ajouter
	/// </summary>
	public ref class UC_Commande_Ajouter : public System::Windows::Forms::UserControl
	{
	public:
		UC_Commande_Ajouter(void)
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
		~UC_Commande_Ajouter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AddCommand;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddCommand = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(9, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"AJOUTER UNE COMMANDE :";
			// 
			// AddCommand
			// 
			this->AddCommand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddCommand->FlatAppearance->BorderSize = 0;
			this->AddCommand->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AddCommand->Location = System::Drawing::Point(351, 324);
			this->AddCommand->Name = L"AddCommand";
			this->AddCommand->Size = System::Drawing::Size(75, 23);
			this->AddCommand->TabIndex = 2;
			this->AddCommand->Text = L"Ajouter";
			this->AddCommand->UseVisualStyleBackColor = true;
			// 
			// UC_Commande_Ajouter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->AddCommand);
			this->Controls->Add(this->label1);
			this->Name = L"UC_Commande_Ajouter";
			this->Size = System::Drawing::Size(777, 363);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
