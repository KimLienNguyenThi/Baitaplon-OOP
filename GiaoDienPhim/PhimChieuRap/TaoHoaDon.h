#pragma once

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TaoHoaDon
	/// </summary>
	public ref class TaoHoaDon : public System::Windows::Forms::Form
	{
	public:
		TaoHoaDon(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TaoHoaDon(String^ idLich, String^ listGheChon)
		{
			idLichChieu = idLich;
			listGhe = listGheChon;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void ThucHienDangKy();
		void LoadLichPhim();
		DataTable^ LayTenKh();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TaoHoaDon()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:





	private: System::Windows::Forms::Label^ label3;






	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtTenKhachHang;



	private: System::Windows::Forms::Button^ btnDangKy;

	private: System::Windows::Forms::Button^ btnHuy;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtSoDT;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labMaPhim;
	private: System::Windows::Forms::Label^ labTenPhim;
	private: System::Windows::Forms::Label^ labGhe;
	private: System::Windows::Forms::Label^ labTongTien;
	private: System::Windows::Forms::Label^ labNgayChieu;
	private: System::Windows::Forms::Label^ lab;
	private: System::Windows::Forms::Label^ labKhungGio;
//
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ labRapPhim;
	private: System::Windows::Forms::Label^ labGiave;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ labSoluongve;
	private: System::Windows::Forms::Label^ label13;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TaoHoaDon::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtTenKhachHang = (gcnew System::Windows::Forms::TextBox());
			this->btnDangKy = (gcnew System::Windows::Forms::Button());
			this->btnHuy = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSoDT = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labMaPhim = (gcnew System::Windows::Forms::Label());
			this->labTenPhim = (gcnew System::Windows::Forms::Label());
			this->labGhe = (gcnew System::Windows::Forms::Label());
			this->labTongTien = (gcnew System::Windows::Forms::Label());
			this->labNgayChieu = (gcnew System::Windows::Forms::Label());
			this->lab = (gcnew System::Windows::Forms::Label());
			this->labKhungGio = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labRapPhim = (gcnew System::Windows::Forms::Label());
			this->labGiave = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->labSoluongve = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 96);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 19);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Tên khách hàng:";
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &TaoHoaDon::printDocument1_PrintPage);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(67, 124);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 19);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Mã phim:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(67, 156);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 19);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Tên phim:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(67, 363);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 19);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Tổng tiền:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(67, 273);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 19);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Ghế:";
			// 
			// txtTenKhachHang
			// 
			this->txtTenKhachHang->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTenKhachHang->Location = System::Drawing::Point(199, 93);
			this->txtTenKhachHang->Margin = System::Windows::Forms::Padding(4);
			this->txtTenKhachHang->Name = L"txtTenKhachHang";
			this->txtTenKhachHang->Size = System::Drawing::Size(408, 27);
			this->txtTenKhachHang->TabIndex = 33;
			// 
			// btnDangKy
			// 
			this->btnDangKy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDangKy->Location = System::Drawing::Point(199, 397);
			this->btnDangKy->Name = L"btnDangKy";
			this->btnDangKy->Size = System::Drawing::Size(134, 38);
			this->btnDangKy->TabIndex = 30;
			this->btnDangKy->Text = L"Đăng ký";
			this->btnDangKy->UseVisualStyleBackColor = true;
			this->btnDangKy->Click += gcnew System::EventHandler(this, &TaoHoaDon::button1_Click);
			// 
			// btnHuy
			// 
			this->btnHuy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHuy->Location = System::Drawing::Point(382, 397);
			this->btnHuy->Name = L"btnHuy";
			this->btnHuy->Size = System::Drawing::Size(134, 38);
			this->btnHuy->TabIndex = 32;
			this->btnHuy->Text = L"Hủy";
			this->btnHuy->UseVisualStyleBackColor = true;
			this->btnHuy->Click += gcnew System::EventHandler(this, &TaoHoaDon::btnHuy_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(68, 61);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 19);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Số điện thoại:";
			// 
			// txtSoDT
			// 
			this->txtSoDT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSoDT->Location = System::Drawing::Point(199, 58);
			this->txtSoDT->Margin = System::Windows::Forms::Padding(4);
			this->txtSoDT->Name = L"txtSoDT";
			this->txtSoDT->Size = System::Drawing::Size(408, 27);
			this->txtSoDT->TabIndex = 15;
			this->txtSoDT->TextChanged += gcnew System::EventHandler(this, &TaoHoaDon::txtSoDT_TextChanged);
			this->txtSoDT->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TaoHoaDon::txtSoDT_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(280, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 22);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Thông Tin Đăng Ký";
			// 
			// labMaPhim
			// 
			this->labMaPhim->AutoSize = true;
			this->labMaPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labMaPhim->Location = System::Drawing::Point(196, 124);
			this->labMaPhim->Name = L"labMaPhim";
			this->labMaPhim->Size = System::Drawing::Size(0, 19);
			this->labMaPhim->TabIndex = 36;
			// 
			// labTenPhim
			// 
			this->labTenPhim->AutoSize = true;
			this->labTenPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labTenPhim->Location = System::Drawing::Point(196, 156);
			this->labTenPhim->Name = L"labTenPhim";
			this->labTenPhim->Size = System::Drawing::Size(0, 19);
			this->labTenPhim->TabIndex = 37;
			// 
			// labGhe
			// 
			this->labGhe->AutoSize = true;
			this->labGhe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labGhe->Location = System::Drawing::Point(196, 273);
			this->labGhe->Name = L"labGhe";
			this->labGhe->Size = System::Drawing::Size(0, 19);
			this->labGhe->TabIndex = 38;
			// 
			// labTongTien
			// 
			this->labTongTien->AutoSize = true;
			this->labTongTien->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labTongTien->Location = System::Drawing::Point(196, 363);
			this->labTongTien->Name = L"labTongTien";
			this->labTongTien->Size = System::Drawing::Size(0, 19);
			this->labTongTien->TabIndex = 39;
			// 
			// labNgayChieu
			// 
			this->labNgayChieu->AutoSize = true;
			this->labNgayChieu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labNgayChieu->Location = System::Drawing::Point(195, 189);
			this->labNgayChieu->Name = L"labNgayChieu";
			this->labNgayChieu->Size = System::Drawing::Size(0, 19);
			this->labNgayChieu->TabIndex = 41;
			// 
			// lab
			// 
			this->lab->AutoSize = true;
			this->lab->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lab->Location = System::Drawing::Point(67, 189);
			this->lab->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lab->Name = L"lab";
			this->lab->Size = System::Drawing::Size(90, 19);
			this->lab->TabIndex = 40;
			this->lab->Text = L"Ngày chiếu:";
			// 
			// labKhungGio
			// 
			this->labKhungGio->AutoSize = true;
			this->labKhungGio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labKhungGio->Location = System::Drawing::Point(195, 218);
			this->labKhungGio->Name = L"labKhungGio";
			this->labKhungGio->Size = System::Drawing::Size(0, 19);
			this->labKhungGio->TabIndex = 43;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(67, 218);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 19);
			this->label11->TabIndex = 42;
			this->label11->Text = L"Khung giờ:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(67, 245);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 19);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Rạp:";
			// 
			// labRapPhim
			// 
			this->labRapPhim->AutoSize = true;
			this->labRapPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labRapPhim->Location = System::Drawing::Point(196, 245);
			this->labRapPhim->Name = L"labRapPhim";
			this->labRapPhim->Size = System::Drawing::Size(0, 19);
			this->labRapPhim->TabIndex = 46;
			// 
			// labGiave
			// 
			this->labGiave->AutoSize = true;
			this->labGiave->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labGiave->Location = System::Drawing::Point(196, 333);
			this->labGiave->Name = L"labGiave";
			this->labGiave->Size = System::Drawing::Size(0, 19);
			this->labGiave->TabIndex = 48;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(67, 333);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 19);
			this->label10->TabIndex = 47;
			this->label10->Text = L"Giá vé:";
			// 
			// labSoluongve
			// 
			this->labSoluongve->AutoSize = true;
			this->labSoluongve->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labSoluongve->Location = System::Drawing::Point(196, 304);
			this->labSoluongve->Name = L"labSoluongve";
			this->labSoluongve->Size = System::Drawing::Size(0, 19);
			this->labSoluongve->TabIndex = 50;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(67, 304);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(98, 19);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Số lượng vé: ";
			// 
			// TaoHoaDon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 477);
			this->Controls->Add(this->labSoluongve);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->labGiave);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->labRapPhim);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->labKhungGio);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->labNgayChieu);
			this->Controls->Add(this->lab);
			this->Controls->Add(this->labTongTien);
			this->Controls->Add(this->labGhe);
			this->Controls->Add(this->labTenPhim);
			this->Controls->Add(this->labMaPhim);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtSoDT);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnHuy);
			this->Controls->Add(this->btnDangKy);
			this->Controls->Add(this->txtTenKhachHang);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"TaoHoaDon";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"TaoHoaDon";
			this->Load += gcnew System::EventHandler(this, &TaoHoaDon::TaoHoaDon_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		String^ idLichChieu = "";
		array<String^>^ arrGhe = nullptr;
		int tongTien = 0;
		String^ listGhe = ""; 
		String^ rapPhim = "";
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		String^ sdt = txtSoDT->Text; 
		if (txtTenKhachHang->Text == "" || txtSoDT->Text == "")
		{
			MessageBox::Show(L"Vui lòng nhập Thông Tin khách hàng!", "Thông Báo");
			return;
		}

		 if (sdt->Length <10 || sdt->Length  >11 )
		{
			MessageBox::Show(L"* Vui lòng Nhap lai sodt ", "THÔNG BÁO");
			return;
		}
	/*	 String^ Sodau;
		 Sodau = sdt*/


		this->ThucHienDangKy();

	/*	MessageBox::Show(L"Đăng ký thành công!", "Thông Báo");*/
	
		printPreviewDialog1->StartPosition = FormStartPosition::CenterParent;
		printPreviewDialog1->Document = printDocument1;
		printPreviewDialog1->ShowDialog();

		tongTien = 0;
		listGhe = "";
		arrGhe = nullptr;
		this->Close();
	}
	private: System::Void TaoHoaDon_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadLichPhim();
	}
	private: System::Void btnHuy_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		 
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		//printDocument1->PrinterSettings->PrinterName = "INVOICE";
		System::Drawing::Font^ fnt = gcnew System::Drawing::Font("Times New Roman", 18, FontStyle::Regular);

		e->Graphics->DrawString(L"THÔNG TIN VÉ PHIM",fnt, Brushes::Black, 320, 111);
		e->Graphics->DrawString(L"----------------------------------------------------------", fnt, Brushes::Black, 200, 150);
		e->Graphics->DrawString(L"Tên khách hàng: " + txtTenKhachHang->Text, fnt, Brushes::Black, 111, 200);
		e->Graphics->DrawString(L"Số điện thoại: " + txtSoDT->Text, fnt, Brushes::Black, 111, 250);
		e->Graphics->DrawString(L"Tên Phim: " + labTenPhim->Text, fnt, Brushes::Black, 111, 300);
		e->Graphics->DrawString(L"Ngày chiếu: " + labNgayChieu->Text, fnt, Brushes::Black, 111, 350);
		e->Graphics->DrawString(L"Khung giờ: " + labKhungGio->Text, fnt, Brushes::Black, 111, 400);
		e->Graphics->DrawString(L"Rạp : " + labRapPhim->Text, fnt, Brushes::Black, 111, 450);
		e->Graphics->DrawString(L"Số ghế : " + listGhe, fnt, Brushes::Black, 111, 500);
		e->Graphics->DrawString(L"Số lượng vé: " + labSoluongve->Text, fnt, Brushes::Black, 111, 550);
		e->Graphics->DrawString(L"Giá vé : " + labGiave->Text, fnt, Brushes::Black, 350, 550);
		e->Graphics->DrawString(L"Tổng tiền: " + tongTien + " VND", fnt, Brushes::Black, 111, 600);
		e->Graphics->DrawString(L"----------------------------------------------------------", fnt, Brushes::Black, 200, 650);
	}
	private: System::Void txtSoDT_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	
		if ( txtSoDT->Text->Length > 11) {
			e->Handled = true;
		}
	}

private: System::Void txtSoDT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtSoDT->Text->Length == 10
		|| txtSoDT->Text->Length == 11)
	{

		DataTable^ dt= LayTenKh();
		if (dt->Rows->Count > 0)
		{
			DataRow^ dr = dt->Rows[0];
			txtTenKhachHang->Text = dr["TenKhachHang"]->ToString();
		}

	}
	if (txtSoDT->Text->Length == 0)
	{
		txtTenKhachHang->Text = "";

	}
}
};
}
