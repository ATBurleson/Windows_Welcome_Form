# Windows_Welcome_Form
This is a simple example of a GUI C++ form made in Visual Studio 2022.
# Setup:
Place a label in the form form with the text, First Name with a textbox underneath for the user to enter their first name.
Place a label in the form form with the text, Last Name with a textbox underneath for the user to enter their last name.
Place a label in the form form with the text, Welcome with a textbox beside the label to display the users first name and last name.
Place two buttons, one named 'OK' that enables the first and last name textboxes to pass the contents inside to the welcome textbox and other named 'CLEAR'
that clears the contents in all textboxes.
  
# How this words:

#pragma endregion
	//Button actions.
  //
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
