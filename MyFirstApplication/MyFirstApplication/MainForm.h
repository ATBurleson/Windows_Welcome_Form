#pragma once

namespace MyFirstApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ First_Name_Label;
	protected:
	private: System::Windows::Forms::TextBox^ First_Name_Textbox;
	private: System::Windows::Forms::Label^ Last_Name_Lable;
	private: System::Windows::Forms::TextBox^ Last_Name_Textbox;
	private: System::Windows::Forms::Label^ Welcome_label;
	private: System::Windows::Forms::Button^ Clear_button;
	private: System::Windows::Forms::Button^ OK_button;
	private: System::Windows::Forms::TableLayoutPanel^ ButtonstableLayoutPanel;
	private: System::Windows::Forms::TextBox^ Welcome_textBox;

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
			this->First_Name_Label = (gcnew System::Windows::Forms::Label());
			this->First_Name_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->Last_Name_Lable = (gcnew System::Windows::Forms::Label());
			this->Last_Name_Textbox = (gcnew System::Windows::Forms::TextBox());
			this->Welcome_label = (gcnew System::Windows::Forms::Label());
			this->Clear_button = (gcnew System::Windows::Forms::Button());
			this->OK_button = (gcnew System::Windows::Forms::Button());
			this->ButtonstableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Welcome_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ButtonstableLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// First_Name_Label
			// 
			this->First_Name_Label->AutoSize = true;
			this->First_Name_Label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->First_Name_Label->Location = System::Drawing::Point(12, 9);
			this->First_Name_Label->Name = L"First_Name_Label";
			this->First_Name_Label->Size = System::Drawing::Size(85, 19);
			this->First_Name_Label->TabIndex = 0;
			this->First_Name_Label->Text = L"First Name";
			// 
			// First_Name_Textbox
			// 
			this->First_Name_Textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->First_Name_Textbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->First_Name_Textbox->Location = System::Drawing::Point(16, 30);
			this->First_Name_Textbox->Name = L"First_Name_Textbox";
			this->First_Name_Textbox->Size = System::Drawing::Size(671, 26);
			this->First_Name_Textbox->TabIndex = 1;
			// 
			// Last_Name_Lable
			// 
			this->Last_Name_Lable->AutoSize = true;
			this->Last_Name_Lable->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Last_Name_Lable->Location = System::Drawing::Point(12, 70);
			this->Last_Name_Lable->Name = L"Last_Name_Lable";
			this->Last_Name_Lable->Size = System::Drawing::Size(81, 19);
			this->Last_Name_Lable->TabIndex = 2;
			this->Last_Name_Lable->Text = L"Last Name";
			// 
			// Last_Name_Textbox
			// 
			this->Last_Name_Textbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Last_Name_Textbox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Last_Name_Textbox->Location = System::Drawing::Point(16, 92);
			this->Last_Name_Textbox->Name = L"Last_Name_Textbox";
			this->Last_Name_Textbox->Size = System::Drawing::Size(671, 26);
			this->Last_Name_Textbox->TabIndex = 3;
			// 
			// Welcome_label
			// 
			this->Welcome_label->AutoSize = true;
			this->Welcome_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Welcome_label->Location = System::Drawing::Point(13, 200);
			this->Welcome_label->Name = L"Welcome_label";
			this->Welcome_label->Size = System::Drawing::Size(87, 20);
			this->Welcome_label->TabIndex = 4;
			this->Welcome_label->Text = L"Welcome:";
			// 
			// Clear_button
			// 
			this->Clear_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Clear_button->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Clear_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear_button->Location = System::Drawing::Point(327, 3);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(319, 88);
			this->Clear_button->TabIndex = 1;
			this->Clear_button->Text = L"CLEAR";
			this->Clear_button->UseVisualStyleBackColor = false;
			this->Clear_button->Click += gcnew System::EventHandler(this, &MainForm::Clear_button_Click);
			// 
			// OK_button
			// 
			this->OK_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OK_button->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->OK_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OK_button->Location = System::Drawing::Point(3, 3);
			this->OK_button->Name = L"OK_button";
			this->OK_button->Size = System::Drawing::Size(318, 88);
			this->OK_button->TabIndex = 0;
			this->OK_button->Text = L"OK";
			this->OK_button->UseVisualStyleBackColor = false;
			this->OK_button->Click += gcnew System::EventHandler(this, &MainForm::OK_button_Click);
			// 
			// ButtonstableLayoutPanel
			// 
			this->ButtonstableLayoutPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonstableLayoutPanel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ButtonstableLayoutPanel->ColumnCount = 2;
			this->ButtonstableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->ButtonstableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->ButtonstableLayoutPanel->Controls->Add(this->Clear_button, 1, 0);
			this->ButtonstableLayoutPanel->Controls->Add(this->OK_button, 0, 0);
			this->ButtonstableLayoutPanel->Location = System::Drawing::Point(12, 251);
			this->ButtonstableLayoutPanel->Name = L"ButtonstableLayoutPanel";
			this->ButtonstableLayoutPanel->RowCount = 1;
			this->ButtonstableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->ButtonstableLayoutPanel->Size = System::Drawing::Size(649, 94);
			this->ButtonstableLayoutPanel->TabIndex = 5;
			// 
			// Welcome_textBox
			// 
			this->Welcome_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Welcome_textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Welcome_textBox->Location = System::Drawing::Point(99, 200);
			this->Welcome_textBox->Name = L"Welcome_textBox";
			this->Welcome_textBox->Size = System::Drawing::Size(588, 26);
			this->Welcome_textBox->TabIndex = 6;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(699, 369);
			this->Controls->Add(this->Welcome_textBox);
			this->Controls->Add(this->ButtonstableLayoutPanel);
			this->Controls->Add(this->Welcome_label);
			this->Controls->Add(this->Last_Name_Textbox);
			this->Controls->Add(this->Last_Name_Lable);
			this->Controls->Add(this->First_Name_Textbox);
			this->Controls->Add(this->First_Name_Label);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MaximumSize = System::Drawing::Size(715, 408);
			this->MinimumSize = System::Drawing::Size(319, 408);
			this->Name = L"MainForm";
			this->Text = L"Welcome Form";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ButtonstableLayoutPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void OK_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ First_Name = this->First_Name_Textbox->Text;
		String^ Last_Name = this->Last_Name_Textbox->Text;
		this->Welcome_textBox->Text = First_Name + " " + Last_Name;
	}
private: System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->First_Name_Textbox->Text = "";
	this->Last_Name_Textbox->Text = "";
	this->Welcome_textBox->Text = "";
}

};

}
