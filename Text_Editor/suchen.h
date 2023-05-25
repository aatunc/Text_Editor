#pragma once

namespace Text_Editor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für suchen
	/// </summary>
	public ref class suchen : public System::Windows::Forms::Form
	{
	public:
		suchen(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~suchen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(162, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(372, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Abrechnen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &suchen::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Suchen nach";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 64);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(437, 34);
			this->textBox1->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(188, 116);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(156, 20);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Klein-/Groß Beachten";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &suchen::checkBox1_CheckedChanged);
			// 
			// suchen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 253);
			this->ControlBox = false;
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Name = L"suchen";
			this->Text = L"Suchen";
			this->Load += gcnew System::EventHandler(this, &suchen::suchen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void suchen_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//if (checkBox1->ShowDialog()==System::Windows::Forms::DialogResult::)
}
};
}
