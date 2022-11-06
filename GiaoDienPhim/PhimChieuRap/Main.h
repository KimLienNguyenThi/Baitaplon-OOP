#pragma once
#include "QuanLyPhim.h"
#include "QuanLyLichChieu.h"
#include "DangKyVe.h"
#include "QuanLyHoaDon.h"
#include "Login.h"

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Main(Login^ loginForm, String^ ten)
		{
			
			tenChao = ten;
			loginF = loginForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnQuanLyPhim;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnDangKyVe;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnQuanLyHoaDon;
	private: System::Windows::Forms::Label^ labelXinChao;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->btnQuanLyPhim = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnDangKyVe = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labelXinChao = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnQuanLyHoaDon = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnQuanLyPhim
			// 
			this->btnQuanLyPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuanLyPhim->Location = System::Drawing::Point(45, 47);
			this->btnQuanLyPhim->Margin = System::Windows::Forms::Padding(4);
			this->btnQuanLyPhim->Name = L"btnQuanLyPhim";
			this->btnQuanLyPhim->Size = System::Drawing::Size(159, 43);
			this->btnQuanLyPhim->TabIndex = 0;
			this->btnQuanLyPhim->Text = L"Quản lý Phim";
			this->btnQuanLyPhim->UseVisualStyleBackColor = true;
			this->btnQuanLyPhim->Click += gcnew System::EventHandler(this, &Main::btnQuanLyPhim_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(45, 125);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Quản lý lịch chiếu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// btnDangKyVe
			// 
			this->btnDangKyVe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDangKyVe->Location = System::Drawing::Point(45, 207);
			this->btnDangKyVe->Margin = System::Windows::Forms::Padding(4);
			this->btnDangKyVe->Name = L"btnDangKyVe";
			this->btnDangKyVe->Size = System::Drawing::Size(159, 43);
			this->btnDangKyVe->TabIndex = 2;
			this->btnDangKyVe->Text = L"Đăng ký vé";
			this->btnDangKyVe->UseVisualStyleBackColor = true;
			this->btnDangKyVe->Click += gcnew System::EventHandler(this, &Main::btnDangKyVe_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(259, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(655, 558);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->labelXinChao);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->btnQuanLyHoaDon);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->btnDangKyVe);
			this->panel2->Controls->Add(this->btnQuanLyPhim);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(259, 558);
			this->panel2->TabIndex = 4;
			// 
			// labelXinChao
			// 
			this->labelXinChao->AutoSize = true;
			this->labelXinChao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelXinChao->Location = System::Drawing::Point(12, 9);
			this->labelXinChao->Name = L"labelXinChao";
			this->labelXinChao->Size = System::Drawing::Size(0, 19);
			this->labelXinChao->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(45, 487);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 47);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Đăng xuất";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// btnQuanLyHoaDon
			// 
			this->btnQuanLyHoaDon->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuanLyHoaDon->Location = System::Drawing::Point(45, 285);
			this->btnQuanLyHoaDon->Margin = System::Windows::Forms::Padding(4);
			this->btnQuanLyHoaDon->Name = L"btnQuanLyHoaDon";
			this->btnQuanLyHoaDon->Size = System::Drawing::Size(159, 47);
			this->btnQuanLyHoaDon->TabIndex = 3;
			this->btnQuanLyHoaDon->Text = L"Quản lý hóa đơn";
			this->btnQuanLyHoaDon->UseVisualStyleBackColor = true;
			this->btnQuanLyHoaDon->Click += gcnew System::EventHandler(this, &Main::btnQuanLyHoaDon_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(914, 558);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PHẦN MỀM QUẢN LÝ RẠP PHIM";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
		Login^ loginF = gcnew Login();
		String^ tenChao = "";
#pragma endregion
	private: System::Void btnQuanLyPhim_Click(System::Object^ sender, System::EventArgs^ e) {
		QuanLyPhim^ frm = gcnew QuanLyPhim();
		frm->ShowDialog();	
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		QuanLyLichChieu^ frm = gcnew QuanLyLichChieu();
		frm->ShowDialog();
	}
	private: System::Void btnDangKyVe_Click(System::Object^ sender, System::EventArgs^ e) {
		DangKyVe^ frm = gcnew DangKyVe();
		frm->ShowDialog();
	}
private: System::Void btnQuanLyHoaDon_Click(System::Object^ sender, System::EventArgs^ e) {
	QuanLyHoaDon^ frm = gcnew QuanLyHoaDon();
	frm->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	loginF->Show();
}
private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	labelXinChao->Text = "Xin chào: " + tenChao;
}


private: System::Void Main_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	// check the reason (UserClosing)
	if (e->CloseReason == CloseReason::UserClosing)
	{
		loginF->Show();
	}

}
};
}
