#pragma once

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QuanLyHoaDon
	/// </summary>
	public ref class QuanLyHoaDon : public System::Windows::Forms::Form
	{
	public:
		QuanLyHoaDon(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void LoadDanhSachHoaDon();
		//void GetDanhSachChiTietHoaDon(String^ idhoadon);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuanLyHoaDon()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ gvHoaDon;




















	private: System::Windows::Forms::GroupBox^ groupBox3;














	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnTimKiem;
	private: System::Windows::Forms::TextBox^ txtTimKiem;











	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDenNgay;

	private: System::Windows::Forms::DateTimePicker^ dateTimePickerTuNgay;
	private: System::Windows::Forms::Button^ btnThoat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TenKhachHang;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SoDienThoai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TongTien;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SoVe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ten;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MaPhim;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NamSanXuat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TheLoai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuocGia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ThoiLuong;
	private: System::Windows::Forms::Button^ btnInHoaDon;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
































































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QuanLyHoaDon::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnInHoaDon = (gcnew System::Windows::Forms::Button());
			this->btnThoat = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerDenNgay = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerTuNgay = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTimKiem = (gcnew System::Windows::Forms::Button());
			this->txtTimKiem = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gvHoaDon = (gcnew System::Windows::Forms::DataGridView());
			this->TenKhachHang = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SoDienThoai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TongTien = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SoVe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ten = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MaPhim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NamSanXuat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TheLoai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuocGia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ThoiLuong = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvHoaDon))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1297, 121);
			this->panel2->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnInHoaDon);
			this->groupBox3->Controls->Add(this->btnThoat);
			this->groupBox3->Controls->Add(this->dateTimePickerDenNgay);
			this->groupBox3->Controls->Add(this->dateTimePickerTuNgay);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->btnTimKiem);
			this->groupBox3->Controls->Add(this->txtTimKiem);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1297, 121);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Thao tác";
			// 
			// btnInHoaDon
			// 
			this->btnInHoaDon->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInHoaDon->Location = System::Drawing::Point(323, 68);
			this->btnInHoaDon->Margin = System::Windows::Forms::Padding(4);
			this->btnInHoaDon->Name = L"btnInHoaDon";
			this->btnInHoaDon->Size = System::Drawing::Size(100, 36);
			this->btnInHoaDon->TabIndex = 13;
			this->btnInHoaDon->Text = L"In Hóa Đơn";
			this->btnInHoaDon->UseVisualStyleBackColor = true;
			this->btnInHoaDon->Click += gcnew System::EventHandler(this, &QuanLyHoaDon::btnInHoaDon_Click);
			// 
			// btnThoat
			// 
			this->btnThoat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThoat->Location = System::Drawing::Point(1056, 68);
			this->btnThoat->Margin = System::Windows::Forms::Padding(4);
			this->btnThoat->Name = L"btnThoat";
			this->btnThoat->Size = System::Drawing::Size(100, 36);
			this->btnThoat->TabIndex = 12;
			this->btnThoat->Text = L"Thoát";
			this->btnThoat->UseVisualStyleBackColor = true;
			this->btnThoat->Click += gcnew System::EventHandler(this, &QuanLyHoaDon::btnThoat_Click);
			// 
			// dateTimePickerDenNgay
			// 
			this->dateTimePickerDenNgay->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePickerDenNgay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePickerDenNgay->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerDenNgay->Location = System::Drawing::Point(771, 22);
			this->dateTimePickerDenNgay->MaxDate = System::DateTime(2030, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDenNgay->MinDate = System::DateTime(1970, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDenNgay->Name = L"dateTimePickerDenNgay";
			this->dateTimePickerDenNgay->Size = System::Drawing::Size(200, 27);
			this->dateTimePickerDenNgay->TabIndex = 11;
			// 
			// dateTimePickerTuNgay
			// 
			this->dateTimePickerTuNgay->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePickerTuNgay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePickerTuNgay->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerTuNgay->Location = System::Drawing::Point(421, 21);
			this->dateTimePickerTuNgay->MaxDate = System::DateTime(2025, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerTuNgay->MinDate = System::DateTime(1970, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerTuNgay->Name = L"dateTimePickerTuNgay";
			this->dateTimePickerTuNgay->Size = System::Drawing::Size(200, 27);
			this->dateTimePickerTuNgay->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(335, 25);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 19);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Từ ngày";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(672, 28);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Đến ngày";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Tìm kiếm";
			// 
			// btnTimKiem
			// 
			this->btnTimKiem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTimKiem->Location = System::Drawing::Point(90, 68);
			this->btnTimKiem->Margin = System::Windows::Forms::Padding(4);
			this->btnTimKiem->Name = L"btnTimKiem";
			this->btnTimKiem->Size = System::Drawing::Size(100, 36);
			this->btnTimKiem->TabIndex = 4;
			this->btnTimKiem->Text = L"Tìm kiếm";
			this->btnTimKiem->UseVisualStyleBackColor = true;
			this->btnTimKiem->Click += gcnew System::EventHandler(this, &QuanLyHoaDon::btnTimKiem_Click);
			// 
			// txtTimKiem
			// 
			this->txtTimKiem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTimKiem->Location = System::Drawing::Point(90, 22);
			this->txtTimKiem->Margin = System::Windows::Forms::Padding(4);
			this->txtTimKiem->Name = L"txtTimKiem";
			this->txtTimKiem->Size = System::Drawing::Size(229, 27);
			this->txtTimKiem->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 121);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1297, 412);
			this->panel3->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->gvHoaDon);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1297, 412);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Danh sách hóa đơn";
			// 
			// gvHoaDon
			// 
			this->gvHoaDon->AllowUserToAddRows = false;
			this->gvHoaDon->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gvHoaDon->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->TenKhachHang,
					this->ID, this->SoDienThoai, this->TongTien, this->SoVe, this->Ten, this->MaPhim, this->NamSanXuat, this->TheLoai, this->QuocGia,
					this->ThoiLuong
			});
			this->gvHoaDon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gvHoaDon->Location = System::Drawing::Point(4, 19);
			this->gvHoaDon->Margin = System::Windows::Forms::Padding(4);
			this->gvHoaDon->Name = L"gvHoaDon";
			this->gvHoaDon->RowHeadersWidth = 51;
			this->gvHoaDon->Size = System::Drawing::Size(1289, 389);
			this->gvHoaDon->TabIndex = 0;
			this->gvHoaDon->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &QuanLyHoaDon::dataGvHoaDon_CellClick);
			// 
			// TenKhachHang
			// 
			this->TenKhachHang->DataPropertyName = L"TenKhachHang";
			this->TenKhachHang->HeaderText = L"Tên khách hàng";
			this->TenKhachHang->MinimumWidth = 6;
			this->TenKhachHang->Name = L"TenKhachHang";
			this->TenKhachHang->Width = 125;
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"ID";
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Visible = false;
			this->ID->Width = 125;
			// 
			// SoDienThoai
			// 
			this->SoDienThoai->DataPropertyName = L"SDT";
			this->SoDienThoai->HeaderText = L"Số điện thoại";
			this->SoDienThoai->MinimumWidth = 6;
			this->SoDienThoai->Name = L"SoDienThoai";
			this->SoDienThoai->Width = 125;
			// 
			// TongTien
			// 
			this->TongTien->DataPropertyName = L"TongTien";
			this->TongTien->HeaderText = L"Tổng tiền";
			this->TongTien->MinimumWidth = 6;
			this->TongTien->Name = L"TongTien";
			this->TongTien->Width = 125;
			// 
			// SoVe
			// 
			this->SoVe->DataPropertyName = L"SoVe";
			this->SoVe->HeaderText = L"Số vé";
			this->SoVe->MinimumWidth = 6;
			this->SoVe->Name = L"SoVe";
			this->SoVe->Width = 125;
			// 
			// Ten
			// 
			this->Ten->DataPropertyName = L"Ten";
			this->Ten->HeaderText = L"Tên Phim";
			this->Ten->MinimumWidth = 6;
			this->Ten->Name = L"Ten";
			this->Ten->ReadOnly = true;
			this->Ten->Width = 125;
			// 
			// MaPhim
			// 
			this->MaPhim->DataPropertyName = L"MaPhim";
			this->MaPhim->HeaderText = L"Mã Phim";
			this->MaPhim->MinimumWidth = 6;
			this->MaPhim->Name = L"MaPhim";
			this->MaPhim->ReadOnly = true;
			this->MaPhim->Width = 125;
			// 
			// NamSanXuat
			// 
			this->NamSanXuat->DataPropertyName = L"NamSanXuat";
			this->NamSanXuat->HeaderText = L"Năm Sản Xuất";
			this->NamSanXuat->MinimumWidth = 6;
			this->NamSanXuat->Name = L"NamSanXuat";
			this->NamSanXuat->ReadOnly = true;
			this->NamSanXuat->Width = 125;
			// 
			// TheLoai
			// 
			this->TheLoai->DataPropertyName = L"TheLoai";
			this->TheLoai->HeaderText = L"Thể Loại";
			this->TheLoai->MinimumWidth = 6;
			this->TheLoai->Name = L"TheLoai";
			this->TheLoai->ReadOnly = true;
			this->TheLoai->Width = 125;
			// 
			// QuocGia
			// 
			this->QuocGia->DataPropertyName = L"QuocGia";
			this->QuocGia->HeaderText = L"Quốc Gia";
			this->QuocGia->MinimumWidth = 6;
			this->QuocGia->Name = L"QuocGia";
			this->QuocGia->ReadOnly = true;
			this->QuocGia->Width = 125;
			// 
			// ThoiLuong
			// 
			this->ThoiLuong->DataPropertyName = L"ThoiLuong";
			this->ThoiLuong->HeaderText = L"Thời Lượng";
			this->ThoiLuong->MinimumWidth = 6;
			this->ThoiLuong->Name = L"ThoiLuong";
			this->ThoiLuong->ReadOnly = true;
			this->ThoiLuong->Width = 125;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &QuanLyHoaDon::printDocument1_PrintPage);
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
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &QuanLyHoaDon::printPreviewDialog1_Load);
			// 
			// QuanLyHoaDon
			// 
			this->AcceptButton = this->btnTimKiem;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1297, 533);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Name = L"QuanLyHoaDon";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"QuanLyHoaDon";
			this->Load += gcnew System::EventHandler(this, &QuanLyHoaDon::QuanLyHoaDon_Load);
			this->panel2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gvHoaDon))->EndInit();
			this->ResumeLayout(false);

		}
		DataTable^ dataHoaDon = gcnew DataTable();
		DataTable^ dataChiTietHoaDon = gcnew DataTable();
#pragma endregion
	private: System::Void QuanLyHoaDon_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime dateNow = DateTime::Now;
		dateTimePickerTuNgay->Value = DateTime(dateNow.Year, dateNow.Month, 1);
		dateTimePickerDenNgay->Value = DateTime(dateNow.Year, dateNow.Month, dateNow.DaysInMonth(dateNow.Year, dateNow.Month));

	//	gvChiTiet->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		gvHoaDon->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		LoadDanhSachHoaDon();
	}

	private: System::Void dataGvHoaDon_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// 	GetHoadon(idLichPhim);
	/*	if (e->RowIndex >= 0)
		{
			int a = e->RowIndex;
			int b = e->ColumnIndex;
			DataRow^ dr = dtHoaDon->Rows[a];*/
	}
	private: System::Void btnTimKiem_Click(System::Object^ sender, System::EventArgs^ e) {

		// kiểm tra ngày chiếu có nằm trong quá khứ thì báo lỗi
		if (dateTimePickerTuNgay->Value > dateTimePickerDenNgay->Value) {
			MessageBox::Show(L"Vui lòng chọn giờ chiếu bắt đầu và kết thúc hợp lệ!", "Thông Báo");
			return;
		}
		LoadDanhSachHoaDon();
		//this->GetDanhSachChiTietHoaDon("0");
	}
private: System::Void btnThoat_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

private: System::Void gvChiTiet_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnInHoaDon_Click(System::Object^ sender, System::EventArgs^ e) {
	printPreviewDialog1->StartPosition = FormStartPosition::CenterParent;
	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
	
}
	 private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		   //printDocument1->PrinterSettings->PrinterName = "INVOICE";
	
		 DataTable^ dataHoaDon = gcnew DataTable();
		   System::Drawing::Font^ fnt = gcnew System::Drawing::Font("Times New Roman", 18, FontStyle::Regular);

		   e->Graphics->DrawString(L"THÔNG TIN VÉ PHIM", fnt, Brushes::Black, 320, 111);
		e->Graphics->DrawString(L"----------------------------------------------------------", fnt, Brushes::Black, 200, 150);
		  /* e->Graphics->DrawString(L"Tên khách hàng: " + txtTenKhachHang->Text, fnt, Brushes::Black, 111, 200);
		  e->Graphics->DrawString(L"Số điện thoại: " + txtSoDT->Text, fnt, Brushes::Black, 111, 250);
		   e->Graphics->DrawString(L"Tên Phim: " + labTenPhim->Text, fnt, Brushes::Black, 111, 300);
		   e->Graphics->DrawString(L"Ngày chiếu: " + labNgayChieu->Text, fnt, Brushes::Black, 111, 350);
		   e->Graphics->DrawString(L"Khung giờ: " + labKhungGio->Text, fnt, Brushes::Black, 111, 400);
		   e->Graphics->DrawString(L"Rạp : " + labRapPhim->Text, fnt, Brushes::Black, 111, 450);*/
		   //e->Graphics->DrawString(L"Số ghế : " + listGhe, fnt, Brushes::Black, 111, 500);
		   //e->Graphics->DrawString(L"Số lượng : " + labSoluongve->Text, fnt, Brushes::Black, 111, 550);
		   //e->Graphics->DrawString(L"Giá vé : " + labGiave->Text, fnt, Brushes::Black, 200, 550);
		   //e->Graphics->DrawString(L"Tổng tiền: " + tongTien + " VND", fnt, Brushes::Black, 111, 550);
		   e->Graphics->DrawString(L"----------------------------------------------------------", fnt, Brushes::Black, 200, 650);
	   }

private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
