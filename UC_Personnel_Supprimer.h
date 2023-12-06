#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace POOA2 {

	/// <summary>
	/// Summary for UC_Personnel_Supprimer
	/// </summary>
	public ref class UC_Personnel_Supprimer : public System::Windows::Forms::UserControl
	{
	public:
		UC_Personnel_Supprimer(void)
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
		~UC_Personnel_Supprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblSupprimerEmployes;
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
			this->lblSupprimerEmployes = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblSupprimerEmployes
			// 
			this->lblSupprimerEmployes->AutoSize = true;
			this->lblSupprimerEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(254)));
			this->lblSupprimerEmployes->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblSupprimerEmployes->Location = System::Drawing::Point(2, 5);
			this->lblSupprimerEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSupprimerEmployes->Name = L"lblSupprimerEmployes";
			this->lblSupprimerEmployes->Size = System::Drawing::Size(150, 13);
			this->lblSupprimerEmployes->TabIndex = 2;
			this->lblSupprimerEmployes->Text = L"SUPPRIMER EMPLOYES";
			// 
			// UC_Personnel_Supprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblSupprimerEmployes);
			this->Name = L"UC_Personnel_Supprimer";
			this->Size = System::Drawing::Size(583, 295);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
