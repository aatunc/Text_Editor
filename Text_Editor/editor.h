#pragma once
namespace Text_Editor{}
namespace CppCLR_WinFormsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class editor : public System::Windows::Forms::Form
	{
	public:
		editor(void)
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
		~editor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ dateiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ offnenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ speichrnToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ beendenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bearbeitenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kopierenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ einfügenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ausschneidenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ allesMakeirenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ versionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ suchenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hilfeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ versionToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ neuToolStripMenuItem;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dateiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->neuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->offnenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speichrnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beendenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bearbeitenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kopierenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->einfügenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ausschneidenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allesMakeirenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->versionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->suchenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hilfeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->versionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(688, 349);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"test version Text Editor";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Text Documents |*.txt|All Files|*.*\".";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text Documents |*.txt";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &editor::openFileDialog1_FileOk);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->dateiToolStripMenuItem,
					this->bearbeitenToolStripMenuItem, this->versionToolStripMenuItem, this->hilfeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(688, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dateiToolStripMenuItem
			// 
			this->dateiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->neuToolStripMenuItem,
					this->offnenToolStripMenuItem, this->speichrnToolStripMenuItem, this->beendenToolStripMenuItem
			});
			this->dateiToolStripMenuItem->Name = L"dateiToolStripMenuItem";
			this->dateiToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->dateiToolStripMenuItem->Text = L"Datei";
			this->dateiToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::dateiToolStripMenuItem_Click);
			// 
			// neuToolStripMenuItem
			// 
			this->neuToolStripMenuItem->Name = L"neuToolStripMenuItem";
			this->neuToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->neuToolStripMenuItem->Text = L"Neu";
			this->neuToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::neuToolStripMenuItem_Click);
			// 
			// offnenToolStripMenuItem
			// 
			this->offnenToolStripMenuItem->AutoSize = false;
			this->offnenToolStripMenuItem->Name = L"offnenToolStripMenuItem";
			this->offnenToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->offnenToolStripMenuItem->Text = L"Offnen";
			this->offnenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::offnenToolStripMenuItem_Click);
			// 
			// speichrnToolStripMenuItem
			// 
			this->speichrnToolStripMenuItem->Name = L"speichrnToolStripMenuItem";
			this->speichrnToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->speichrnToolStripMenuItem->Text = L"Speichern";
			this->speichrnToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::speichrnToolStripMenuItem_Click);
			// 
			// beendenToolStripMenuItem
			// 
			this->beendenToolStripMenuItem->Name = L"beendenToolStripMenuItem";
			this->beendenToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->beendenToolStripMenuItem->Text = L"Beenden";
			this->beendenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::beendenToolStripMenuItem_Click);
			// 
			// bearbeitenToolStripMenuItem
			// 
			this->bearbeitenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->kopierenToolStripMenuItem,
					this->einfügenToolStripMenuItem, this->ausschneidenToolStripMenuItem, this->allesMakeirenToolStripMenuItem
			});
			this->bearbeitenToolStripMenuItem->Name = L"bearbeitenToolStripMenuItem";
			this->bearbeitenToolStripMenuItem->Size = System::Drawing::Size(95, 24);
			this->bearbeitenToolStripMenuItem->Text = L"Bearbeiten";
			this->bearbeitenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::bearbeitenToolStripMenuItem_Click);
			// 
			// kopierenToolStripMenuItem
			// 
			this->kopierenToolStripMenuItem->Name = L"kopierenToolStripMenuItem";
			this->kopierenToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->kopierenToolStripMenuItem->Text = L"Kopieren";
			this->kopierenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::kopierenToolStripMenuItem_Click);
			// 
			// einfügenToolStripMenuItem
			// 
			this->einfügenToolStripMenuItem->Name = L"einfügenToolStripMenuItem";
			this->einfügenToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->einfügenToolStripMenuItem->Text = L"Einfügen";
			this->einfügenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::einfügenToolStripMenuItem_Click);
			// 
			// ausschneidenToolStripMenuItem
			// 
			this->ausschneidenToolStripMenuItem->Name = L"ausschneidenToolStripMenuItem";
			this->ausschneidenToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ausschneidenToolStripMenuItem->Text = L"Ausschneiden";
			this->ausschneidenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::ausschneidenToolStripMenuItem_Click);
			// 
			// allesMakeirenToolStripMenuItem
			// 
			this->allesMakeirenToolStripMenuItem->Name = L"allesMakeirenToolStripMenuItem";
			this->allesMakeirenToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->allesMakeirenToolStripMenuItem->Text = L"Alles Makeiren";
			this->allesMakeirenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::allesMakeirenToolStripMenuItem_Click);
			// 
			// versionToolStripMenuItem
			// 
			this->versionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->suchenToolStripMenuItem });
			this->versionToolStripMenuItem->Name = L"versionToolStripMenuItem";
			this->versionToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->versionToolStripMenuItem->Text = L"Extras";
			// 
			// suchenToolStripMenuItem
			// 
			this->suchenToolStripMenuItem->Name = L"suchenToolStripMenuItem";
			this->suchenToolStripMenuItem->Size = System::Drawing::Size(139, 26);
			this->suchenToolStripMenuItem->Text = L"Suchen";
			this->suchenToolStripMenuItem->Click += gcnew System::EventHandler(this, &editor::suchenToolStripMenuItem_Click);
			// 
			// hilfeToolStripMenuItem
			// 
			this->hilfeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->versionToolStripMenuItem1 });
			this->hilfeToolStripMenuItem->Name = L"hilfeToolStripMenuItem";
			this->hilfeToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->hilfeToolStripMenuItem->Text = L"Hilfe\?";
			// 
			// versionToolStripMenuItem1
			// 
			this->versionToolStripMenuItem1->Name = L"versionToolStripMenuItem1";
			this->versionToolStripMenuItem1->Size = System::Drawing::Size(140, 26);
			this->versionToolStripMenuItem1->Text = L"Version";
			this->versionToolStripMenuItem1->Click += gcnew System::EventHandler(this, &editor::versionToolStripMenuItem1_Click);
			// 
			// editor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 377);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"editor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Text Editor";
			this->Load += gcnew System::EventHandler(this, &editor::editor_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void editor_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bearbeitenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void kopierenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Copy();
}
private: System::Void einfügenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Paste();
}
private: System::Void ausschneidenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Cut();
}
private: System::Void allesMakeirenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->SelectAll();
}
private: System::Void versionToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result;
	result = MessageBox::Show("Version 2.1"), (MessageBoxButtons::OK, MessageBoxIcon::Information);
	if (result == System::Windows::Forms::DialogResult::OK)
		this->Close();
}
private: System::Void suchenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Text_Editor::suchen^ f2 = gcnew Text_Editor::suchen;
	f2->ShowDialog();
}
private: System::Void beendenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void neuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void offnenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
	{
		StreamReader ^ sr = gcnew StreamReader(openFileDialog1->FileName);
		textBox1->Text = sr->ReadToEnd();
		sr->Close();
	}
}
private: System::Void speichrnToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		StreamWriter ^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
		sw->Write(textBox1->Text);
		sw->Close();
	}
}
private: System::Void dateiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
//Editor_Projekt::Suche^ f2 = gcnew Editor_Projekt::Suche;
//f2->ShowDialog();