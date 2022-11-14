#include "Login.h"
#include "Store.h"
#include "Main.cpp"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//WinformCDemo is your project name
	ManagementCinema::Login form;

	Application::Run(% form);
}


void ManagementCinema::Login::ThucHienLogin()
{	
	
	button1->Text = "....";
	Store^ s = gcnew Store();
	bool login = s->Login(textBox1->Text, textBox2->Text);

	if (login) {
		Main^ f = gcnew Main(this, textBox1->Text);
		this->Visible= false;
		button1->Text = L"Đăng nhập";
		f->ShowDialog();
		
	}
	else
	{
		MessageBox::Show(L"Tài khoản hoặc mật khẩu không đúng!", "Thông Báo");

		button1->Text = L"Đăng nhập";
	}
}
