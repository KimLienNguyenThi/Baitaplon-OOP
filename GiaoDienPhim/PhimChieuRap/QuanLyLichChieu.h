#pragma once

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QuanLyLichChieu
	/// </summary>
	public ref class QuanLyLichChieu : public System::Windows::Forms::Form
	{
	public:
		QuanLyLichChieu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void LoadDataPhim();
		void LoadDanhSachLichChieu(String^ maPhim);
		/*void LoadTenPhimLichChieu(String^ maPhim);*/
		void LoadDanhSachRapPhim(String^ maRap);
		bool KiemTraLichChieu();
		bool ThemLichPhim();
		bool XoaLichPhim();
		bool KiemTraPhimTonTai();
		bool KiemTraLichPhim();
		bool SuaLichPhim();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuanLyLichChieu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnTimKiem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGvPhims;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGvLich;

	private: System::Windows::Forms::TextBox^ txtGiaVe;

	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::TextBox^ txtMaPhim;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ datePickNgayChieu;
	private: System::Windows::Forms::DateTimePicker^ datePickBatDau;
	private: System::Windows::Forms::DateTimePicker^ datePickKetThuc;



	private: System::Windows::Forms::Label^ labRap;
	private: System::Windows::Forms::ComboBox^ comboRapPhim;
	private: System::Windows::Forms::Button^ btnThemLich;











	private: System::Windows::Forms::Button^ btnXoaLich;

	private: System::Windows::Forms::TextBox^ txtIdLichPhim;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnSua;















	private: System::Windows::Forms::TextBox^ txtTenPhim;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDLich;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ maphimLichPhim;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RapChieu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Giave;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NgayChieu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GioBatDau;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GioKetThuc;
	private: System::Windows::Forms::Button^ btnThoat;







private: System::Windows::Forms::TextBox^ txtThoiLuong;
private: System::Windows::Forms::Label^ labThoiLuong;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ HinhAnh;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ MaPhim;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ten;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NamSanXuat;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ThoiLuong;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TrangThai;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TheLoai;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuocGia;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DienVien;



























private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtThoiLuong = (gcnew System::Windows::Forms::TextBox());
			this->labThoiLuong = (gcnew System::Windows::Forms::Label());
			this->txtTenPhim = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtIdLichPhim = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labRap = (gcnew System::Windows::Forms::Label());
			this->comboRapPhim = (gcnew System::Windows::Forms::ComboBox());
			this->datePickKetThuc = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePickBatDau = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePickNgayChieu = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtGiaVe = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMaPhim = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTimKiem = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnThoat = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnXoaLich = (gcnew System::Windows::Forms::Button());
			this->btnThemLich = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGvPhims = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HinhAnh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MaPhim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ten = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NamSanXuat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ThoiLuong = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TrangThai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TheLoai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuocGia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DienVien = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGvLich = (gcnew System::Windows::Forms::DataGridView());
			this->IDLich = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maphimLichPhim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RapChieu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Giave = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NgayChieu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GioBatDau = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GioKetThuc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvPhims))->BeginInit();
			this->panel4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvLich))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnTimKiem);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1269, 187);
			this->panel1->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtThoiLuong);
			this->groupBox3->Controls->Add(this->labThoiLuong);
			this->groupBox3->Controls->Add(this->txtTenPhim);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->txtIdLichPhim);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->labRap);
			this->groupBox3->Controls->Add(this->comboRapPhim);
			this->groupBox3->Controls->Add(this->datePickKetThuc);
			this->groupBox3->Controls->Add(this->datePickBatDau);
			this->groupBox3->Controls->Add(this->datePickNgayChieu);
			this->groupBox3->Controls->Add(this->txtGiaVe);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->txtMaPhim);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox3->Location = System::Drawing::Point(381, 0);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(888, 187);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Thông tin";
			// 
			// txtThoiLuong
			// 
			this->txtThoiLuong->Enabled = false;
			this->txtThoiLuong->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtThoiLuong->Location = System::Drawing::Point(575, 42);
			this->txtThoiLuong->Margin = System::Windows::Forms::Padding(4);
			this->txtThoiLuong->Name = L"txtThoiLuong";
			this->txtThoiLuong->Size = System::Drawing::Size(268, 27);
			this->txtThoiLuong->TabIndex = 27;
			this->txtThoiLuong->TextChanged += gcnew System::EventHandler(this, &QuanLyLichChieu::txtThoiLuong_TextChanged);
			// 
			// labThoiLuong
			// 
			this->labThoiLuong->AutoSize = true;
			this->labThoiLuong->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labThoiLuong->Location = System::Drawing::Point(456, 45);
			this->labThoiLuong->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labThoiLuong->Name = L"labThoiLuong";
			this->labThoiLuong->Size = System::Drawing::Size(93, 19);
			this->labThoiLuong->TabIndex = 28;
			this->labThoiLuong->Text = L"Thời Lượng:";
			// 
			// txtTenPhim
			// 
			this->txtTenPhim->Enabled = false;
			this->txtTenPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTenPhim->Location = System::Drawing::Point(153, 97);
			this->txtTenPhim->Margin = System::Windows::Forms::Padding(4);
			this->txtTenPhim->Name = L"txtTenPhim";
			this->txtTenPhim->Size = System::Drawing::Size(268, 27);
			this->txtTenPhim->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(26, 105);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 19);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Tên Phim:";
			// 
			// txtIdLichPhim
			// 
			this->txtIdLichPhim->Enabled = false;
			this->txtIdLichPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdLichPhim->Location = System::Drawing::Point(153, 65);
			this->txtIdLichPhim->Margin = System::Windows::Forms::Padding(4);
			this->txtIdLichPhim->Name = L"txtIdLichPhim";
			this->txtIdLichPhim->Size = System::Drawing::Size(268, 27);
			this->txtIdLichPhim->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 71);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 19);
			this->label6->TabIndex = 24;
			this->label6->Text = L"ID Lịch Chiếu:";
			// 
			// labRap
			// 
			this->labRap->AutoSize = true;
			this->labRap->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labRap->Location = System::Drawing::Point(26, 136);
			this->labRap->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labRap->Name = L"labRap";
			this->labRap->Size = System::Drawing::Size(40, 19);
			this->labRap->TabIndex = 22;
			this->labRap->Text = L"Rạp:";
			// 
			// comboRapPhim
			// 
			this->comboRapPhim->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboRapPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboRapPhim->FormattingEnabled = true;
			this->comboRapPhim->Location = System::Drawing::Point(153, 133);
			this->comboRapPhim->Margin = System::Windows::Forms::Padding(4);
			this->comboRapPhim->Name = L"comboRapPhim";
			this->comboRapPhim->Size = System::Drawing::Size(268, 27);
			this->comboRapPhim->TabIndex = 21;
			// 
			// datePickKetThuc
			// 
			this->datePickKetThuc->CustomFormat = L"HH:mm";
			this->datePickKetThuc->Enabled = false;
			this->datePickKetThuc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePickKetThuc->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePickKetThuc->Location = System::Drawing::Point(575, 147);
			this->datePickKetThuc->Margin = System::Windows::Forms::Padding(4);
			this->datePickKetThuc->Name = L"datePickKetThuc";
			this->datePickKetThuc->Size = System::Drawing::Size(268, 27);
			this->datePickKetThuc->TabIndex = 20;
			// 
			// datePickBatDau
			// 
			this->datePickBatDau->CustomFormat = L"HH:mm";
			this->datePickBatDau->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePickBatDau->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePickBatDau->Location = System::Drawing::Point(575, 112);
			this->datePickBatDau->Margin = System::Windows::Forms::Padding(4);
			this->datePickBatDau->Name = L"datePickBatDau";
			this->datePickBatDau->Size = System::Drawing::Size(268, 27);
			this->datePickBatDau->TabIndex = 19;
			this->datePickBatDau->ValueChanged += gcnew System::EventHandler(this, &QuanLyLichChieu::dateTimePicker1_ValueChanged);
			// 
			// datePickNgayChieu
			// 
			this->datePickNgayChieu->CustomFormat = L"yyyy-MM-dd";
			this->datePickNgayChieu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePickNgayChieu->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePickNgayChieu->Location = System::Drawing::Point(575, 77);
			this->datePickNgayChieu->Margin = System::Windows::Forms::Padding(4);
			this->datePickNgayChieu->Name = L"datePickNgayChieu";
			this->datePickNgayChieu->Size = System::Drawing::Size(268, 27);
			this->datePickNgayChieu->TabIndex = 18;
			// 
			// txtGiaVe
			// 
			this->txtGiaVe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGiaVe->Location = System::Drawing::Point(575, 10);
			this->txtGiaVe->Margin = System::Windows::Forms::Padding(4);
			this->txtGiaVe->Name = L"txtGiaVe";
			this->txtGiaVe->Size = System::Drawing::Size(268, 27);
			this->txtGiaVe->TabIndex = 16;
			this->txtGiaVe->TextChanged += gcnew System::EventHandler(this, &QuanLyLichChieu::txtGiaVe_TextChanged);
			this->txtGiaVe->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &QuanLyLichChieu::txtGiaVe_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(456, 13);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 19);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Giá Vé:";
			// 
			// txtMaPhim
			// 
			this->txtMaPhim->Enabled = false;
			this->txtMaPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMaPhim->Location = System::Drawing::Point(153, 31);
			this->txtMaPhim->Margin = System::Windows::Forms::Padding(4);
			this->txtMaPhim->Name = L"txtMaPhim";
			this->txtMaPhim->Size = System::Drawing::Size(268, 27);
			this->txtMaPhim->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(456, 153);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 19);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Giờ kết thúc:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 37);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 19);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Mã phim:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(456, 118);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 19);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Giờ bắt đầu:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(456, 83);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Ngày chiếu:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tên Phim";
			// 
			// btnTimKiem
			// 
			this->btnTimKiem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTimKiem->Location = System::Drawing::Point(81, 47);
			this->btnTimKiem->Margin = System::Windows::Forms::Padding(4);
			this->btnTimKiem->Name = L"btnTimKiem";
			this->btnTimKiem->Size = System::Drawing::Size(100, 28);
			this->btnTimKiem->TabIndex = 1;
			this->btnTimKiem->Text = L"Tìm kiếm";
			this->btnTimKiem->UseVisualStyleBackColor = true;
			this->btnTimKiem->Click += gcnew System::EventHandler(this, &QuanLyLichChieu::btnTimKiem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(81, 15);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(229, 27);
			this->textBox1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->btnThoat);
			this->panel2->Controls->Add(this->btnSua);
			this->panel2->Controls->Add(this->btnXoaLich);
			this->panel2->Controls->Add(this->btnThemLich);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 187);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1269, 62);
			this->panel2->TabIndex = 1;
			// 
			// btnThoat
			// 
			this->btnThoat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThoat->Location = System::Drawing::Point(1039, 14);
			this->btnThoat->Name = L"btnThoat";
			this->btnThoat->Size = System::Drawing::Size(125, 30);
			this->btnThoat->TabIndex = 3;
			this->btnThoat->Text = L"Thoát";
			this->btnThoat->UseVisualStyleBackColor = true;
			this->btnThoat->Click += gcnew System::EventHandler(this, &QuanLyLichChieu::btnThoat_Click);
			// 
			// btnSua
			// 
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->Location = System::Drawing::Point(840, 14);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(125, 30);
			this->btnSua->TabIndex = 2;
			this->btnSua->Text = L"Sửa";
			this->btnSua->UseVisualStyleBackColor = true;
			this->btnSua->Click += gcnew System::EventHandler(this, &QuanLyLichChieu::btnSua_Click);
			// 
			// btnXoaLich
			// 
			this->btnXoaLich->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXoaLich->Location = System::Drawing::Point(650, 14);
			this->btnXoaLich->Margin = System::Windows::Forms::Padding(4);
			this->btnXoaLich->Name = L"btnXoaLich";
			this->btnXoaLich->Size = System::Drawing::Size(125, 30);
			this->btnXoaLich->TabIndex = 1;
			this->btnXoaLich->Text = L"Xóa lịch chiếu";
			this->btnXoaLich->UseVisualStyleBackColor = true;
			this->btnXoaLich->Click += gcnew System::EventHandler(this, &QuanLyLichChieu::btnXoaLich_Click);
			// 
			// btnThemLich
			// 
			this->btnThemLich->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThemLich->Location = System::Drawing::Point(452, 14);
			this->btnThemLich->Margin = System::Windows::Forms::Padding(4);
			this->btnThemLich->Name = L"btnThemLich";
			this->btnThemLich->Size = System::Drawing::Size(125, 30);
			this->btnThemLich->TabIndex = 0;
			this->btnThemLich->Text = L"Thêm lịch chiếu";
			this->btnThemLich->UseVisualStyleBackColor = true;
			this->btnThemLich->Click += gcnew System::EventHandler(this, &QuanLyLichChieu::btnThemLich_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 249);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1269, 228);
			this->panel3->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGvPhims);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1269, 228);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Danh sách Phim";
			// 
			// dataGvPhims
			// 
			this->dataGvPhims->AllowUserToAddRows = false;
			this->dataGvPhims->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGvPhims->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->ID, this->HinhAnh,
					this->MaPhim, this->Ten, this->NamSanXuat, this->ThoiLuong, this->TrangThai, this->TheLoai, this->QuocGia, this->DienVien
			});
			this->dataGvPhims->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGvPhims->Location = System::Drawing::Point(4, 19);
			this->dataGvPhims->Margin = System::Windows::Forms::Padding(4);
			this->dataGvPhims->Name = L"dataGvPhims";
			this->dataGvPhims->RowHeadersWidth = 51;
			this->dataGvPhims->Size = System::Drawing::Size(1261, 205);
			this->dataGvPhims->TabIndex = 0;
			this->dataGvPhims->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &QuanLyLichChieu::dataGvPhims_CellClick);
			this->dataGvPhims->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &QuanLyLichChieu::dataGvPhims_CellContentClick);
			// 
			// ID
			// 
			this->ID->DataPropertyName = L"ID";
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 125;
			// 
			// HinhAnh
			// 
			this->HinhAnh->DataPropertyName = L"HinhAnh";
			this->HinhAnh->HeaderText = L"Hình Ảnh";
			this->HinhAnh->MinimumWidth = 6;
			this->HinhAnh->Name = L"HinhAnh";
			this->HinhAnh->Visible = false;
			this->HinhAnh->Width = 125;
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
			// Ten
			// 
			this->Ten->DataPropertyName = L"Ten";
			this->Ten->HeaderText = L"Tên Phim";
			this->Ten->MinimumWidth = 6;
			this->Ten->Name = L"Ten";
			this->Ten->ReadOnly = true;
			this->Ten->Width = 125;
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
			// ThoiLuong
			// 
			this->ThoiLuong->DataPropertyName = L"ThoiLuong";
			this->ThoiLuong->HeaderText = L"Thời Lượng";
			this->ThoiLuong->MinimumWidth = 6;
			this->ThoiLuong->Name = L"ThoiLuong";
			this->ThoiLuong->ReadOnly = true;
			this->ThoiLuong->Width = 125;
			// 
			// TrangThai
			// 
			this->TrangThai->DataPropertyName = L"TrangThai";
			this->TrangThai->HeaderText = L"Trạng thái";
			this->TrangThai->MinimumWidth = 6;
			this->TrangThai->Name = L"TrangThai";
			this->TrangThai->Visible = false;
			this->TrangThai->Width = 125;
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
			// DienVien
			// 
			this->DienVien->DataPropertyName = L"DienVien";
			this->DienVien->HeaderText = L"Diễn viên";
			this->DienVien->MinimumWidth = 6;
			this->DienVien->Name = L"DienVien";
			this->DienVien->Visible = false;
			this->DienVien->Width = 125;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->groupBox2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 477);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1269, 220);
			this->panel4->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGvLich);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(1269, 220);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Danh Sách Lịch chiếu";
			// 
			// dataGvLich
			// 
			this->dataGvLich->AllowUserToAddRows = false;
			this->dataGvLich->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGvLich->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->IDLich, this->maphimLichPhim,
					this->RapChieu, this->Giave, this->NgayChieu, this->GioBatDau, this->GioKetThuc
			});
			this->dataGvLich->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGvLich->Location = System::Drawing::Point(4, 19);
			this->dataGvLich->Margin = System::Windows::Forms::Padding(4);
			this->dataGvLich->Name = L"dataGvLich";
			this->dataGvLich->RowHeadersWidth = 51;
			this->dataGvLich->Size = System::Drawing::Size(1261, 197);
			this->dataGvLich->TabIndex = 0;
			this->dataGvLich->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &QuanLyLichChieu::dataLichChieu_CellClick);
			// 
			// IDLich
			// 
			this->IDLich->DataPropertyName = L"ID";
			this->IDLich->HeaderText = L"ID";
			this->IDLich->MinimumWidth = 6;
			this->IDLich->Name = L"IDLich";
			this->IDLich->ReadOnly = true;
			this->IDLich->Visible = false;
			this->IDLich->Width = 125;
			// 
			// maphimLichPhim
			// 
			this->maphimLichPhim->DataPropertyName = L"MaPhim";
			this->maphimLichPhim->HeaderText = L"Mã Phim";
			this->maphimLichPhim->MinimumWidth = 6;
			this->maphimLichPhim->Name = L"maphimLichPhim";
			this->maphimLichPhim->Width = 125;
			// 
			// RapChieu
			// 
			this->RapChieu->DataPropertyName = L"RapPhim";
			this->RapChieu->HeaderText = L"Rạp Phim ";
			this->RapChieu->MinimumWidth = 6;
			this->RapChieu->Name = L"RapChieu";
			this->RapChieu->Width = 125;
			// 
			// Giave
			// 
			this->Giave->DataPropertyName = L"GiaVe";
			this->Giave->HeaderText = L"Giá Vé";
			this->Giave->MinimumWidth = 6;
			this->Giave->Name = L"Giave";
			this->Giave->Width = 125;
			// 
			// NgayChieu
			// 
			this->NgayChieu->DataPropertyName = L"NgayChieu";
			dataGridViewCellStyle1->Format = L"yyyy/MM/dd";
			this->NgayChieu->DefaultCellStyle = dataGridViewCellStyle1;
			this->NgayChieu->HeaderText = L"Ngày chiếu";
			this->NgayChieu->MinimumWidth = 6;
			this->NgayChieu->Name = L"NgayChieu";
			this->NgayChieu->ReadOnly = true;
			this->NgayChieu->Width = 125;
			// 
			// GioBatDau
			// 
			this->GioBatDau->DataPropertyName = L"GioBatDau";
			dataGridViewCellStyle2->Format = L"HH:mm";
			this->GioBatDau->DefaultCellStyle = dataGridViewCellStyle2;
			this->GioBatDau->HeaderText = L"Giờ Bắt Đầu";
			this->GioBatDau->MinimumWidth = 6;
			this->GioBatDau->Name = L"GioBatDau";
			this->GioBatDau->Width = 125;
			// 
			// GioKetThuc
			// 
			this->GioKetThuc->DataPropertyName = L"GioKetThuc";
			dataGridViewCellStyle3->Format = L"HH:mm";
			this->GioKetThuc->DefaultCellStyle = dataGridViewCellStyle3;
			this->GioKetThuc->HeaderText = L"Giờ Kết Thúc";
			this->GioKetThuc->MinimumWidth = 6;
			this->GioKetThuc->Name = L"GioKetThuc";
			this->GioKetThuc->Width = 125;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// QuanLyLichChieu
			// 
			this->AcceptButton = this->btnTimKiem;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1269, 697);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"QuanLyLichChieu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"QuanLyLichChieu";
			this->Load += gcnew System::EventHandler(this, &QuanLyLichChieu::QuanLyLichChieu_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvPhims))->EndInit();
			this->panel4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvLich))->EndInit();
			this->ResumeLayout(false);

		}

		DataTable^ dt = gcnew DataTable();
		DataTable^ dtLichChieu = gcnew DataTable();
		DataTable^ dataCombo = gcnew DataTable();

#pragma endregion

	private: System::Void QuanLyLichChieu_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGvPhims->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dataGvLich->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		this->LoadDataPhim();
		this->LoadDanhSachRapPhim("");
	}
	private: System::Void dataGvPhims_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0)
		{
			int a = e->RowIndex;
			int b = e->ColumnIndex;
			DataRow^ dr = dt->Rows[a];
			String^ maPhim = dr["MaPhim"]->ToString();
			LoadDanhSachLichChieu(maPhim);
			txtMaPhim->Text = maPhim;
			String^ tenPhim = dr["Ten"]->ToString();
			txtTenPhim->Text = tenPhim;
			String^ thoiLuong = dr["ThoiLuong"]->ToString(); 
			txtThoiLuong->Text = thoiLuong; 
			
		}

	}

	private: System::Void dataLichChieu_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0)
		{
			int a = e->RowIndex;
			int b = e->ColumnIndex;
			DataRow^ dr = dtLichChieu->Rows[a];
			String^ idLichPhim = dr["ID"]->ToString();
			txtIdLichPhim->Text = idLichPhim;
			String^ Giave = dr["GiaVe"]->ToString();
			txtGiaVe->Text = Giave;
			String^ RapPhim = dr["RapPhim"]->ToString();
			comboRapPhim->Text = RapPhim;
			DateTime Ngaychieu = DateTime::Parse(dr["Ngaychieu"]->ToString());
			datePickNgayChieu->Value = Ngaychieu;
			DateTime GioBatDau = DateTime::Parse(dr["GioBatDau"]->ToString());
			datePickBatDau->Value = GioBatDau;
			/*DateTime GioKetThuc = DateTime::Parse(dr["GioKetThuc"]->ToString());
			datePickKetThuc->Value = GioKetThuc;*/
			/*String^ tenPhim = dr["Ten"]->ToString();
			txtTenPhim->Text = tenPhim; */

		}

	}
	private: System::Void btnTimKiem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDataPhim();
	}
	private: System::Void btnThemLich_Click(System::Object^ sender, System::EventArgs^ e) {
		// kiểm tra dữ liệu đầu vào đầy đủ không
		if (txtMaPhim->Text == ""
			|| txtTenPhim->Text == ""
			|| comboRapPhim->Text == ""
			|| datePickBatDau->Text == ""
			|| datePickKetThuc->Text == ""
			|| datePickNgayChieu->Text == ""
			|| txtGiaVe->Text == "")
		{
			MessageBox::Show(L"Bạn vui lòng nhập đầy đủ thông tin!", "Thông Báo");
			return;
		}

		// kiểm tra ngày chiếu có nằm trong quá khứ thì báo lỗi
		if (datePickNgayChieu->Value.Date < System::DateTime::Now.Date) {
			MessageBox::Show(L"Vui lòng chọn ngày chiếu trong tương lai!", "Thông Báo");
			return;
		}

		// kiểm tra giờ bắt đầu và kết thúc hợp lệ không
		System::TimeSpan batdau = datePickBatDau->Value.TimeOfDay;
		System::TimeSpan ketthuc = datePickKetThuc->Value.TimeOfDay;
		if (System::TimeSpan::Compare(batdau, ketthuc) >= 0) {
			MessageBox::Show(L"Vui lòng chọn giờ chiếu bắt đầu và kết thúc hợp lệ!", "Thông Báo");
			return;
		}

		// kiểm tra phim đang thêm + rạp phim + thời gian chiếu đã trùng với lịch nào chưa
		// ví dụ: thêm phim A ngày chiếu 10/10/2022 thời gian chiếu 12h đến 2h rạp số 1
		// => thì khi thêm 1 lịch chiếu nếu tồn tại 1 lịch trùng với thời gian của rạp số 1 thì báo lỗi
		if (KiemTraLichChieu()) {
			MessageBox::Show(L"Thời gian chiếu phim của rạp " + comboRapPhim->Text + L" đã có lịch chiếu", "Thông Báo");
			return;
		}

		this->ThemLichPhim();
		String^ maPhim = txtMaPhim->Text;
		LoadDanhSachLichChieu(maPhim);

	}
	private: System::Void txtGiaVe_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void txtGiaVe_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//txtGiaVe->Text = String::Format("{0:#,##0}", double::Parse(txtGiaVe->Text));
	}
	private: System::Void btnXoaLich_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIdLichPhim->Text == "") {
			MessageBox::Show(L"Bạn vui lòng chọn lich phim để xóa!", "Thông Báo");
			return;
		}
		else
		{
			bool phimTonTai = this->KiemTraPhimTonTai();
			bool lichphimTonTai = this->KiemTraLichPhim();
			if (phimTonTai == false || lichphimTonTai == false) {
				MessageBox::Show(L"Mã phim hoac lich phim không tồn tại!", "Thông Báo");
				return;
			}
		}

		if ((MessageBox::Show(L"Bạn muốn xóa Phim này?", "Confirmation",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question)) == System::Windows::Forms::DialogResult::Yes)
		{
			bool xoa = this->XoaLichPhim();
			if (xoa) {
				String^ maPhim = txtMaPhim->Text;
				LoadDanhSachLichChieu(maPhim);
				/*LoadTenPhimLichChieu(maPhim);*/
			}
			else {
				MessageBox::Show(L"Xóa không thành công!", "Thông Báo");
			}
		}
	}

	private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
		// kiểm tra dữ liệu đầu vào đầy đủ không
		if (comboRapPhim->Text == ""
			|| datePickBatDau->Text == ""
			|| datePickKetThuc->Text == ""
			|| datePickNgayChieu->Text == ""
			|| txtGiaVe->Text == "")
		{
			MessageBox::Show(L"Bạn vui lòng nhập đầy đủ thông tin!", "Thông Báo");
			return;
		}

		// kiểm tra ngày chiếu có nằm trong quá khứ thì báo lỗi
		if (datePickNgayChieu->Value.Date < System::DateTime::Now.Date) {
			MessageBox::Show(L"Vui lòng chọn ngày chiếu trong tương lai!", "Thông Báo");
			return;
		}

		// kiểm tra giờ bắt đầu và kết thúc hợp lệ không
		System::TimeSpan batdau = datePickBatDau->Value.TimeOfDay;
		System::TimeSpan ketthuc = datePickKetThuc->Value.TimeOfDay;
		if (System::TimeSpan::Compare(batdau, ketthuc) >= 0) {
			MessageBox::Show(L"Vui lòng chọn giờ chiếu bắt đầu và kết thúc hợp lệ!", "Thông Báo");
			return;
		}

		// kiểm tra phim đang thêm + rạp phim + thời gian chiếu đã trùng với lịch nào chưa
		// ví dụ: thêm phim A ngày chiếu 10/10/2022 thời gian chiếu 12h đến 2h rạp số 1
		// => thì khi thêm 1 lịch chiếu nếu tồn tại 1 lịch trùng với thời gian của rạp số 1 thì báo lỗi
		if (KiemTraLichChieu()) {
			MessageBox::Show(L"Thời gian chiếu phim của rạp " + comboRapPhim->Text + L" đã có lịch chiếu", "Thông Báo");
			return;
		}
		this->SuaLichPhim();
		String^ maPhim = txtMaPhim->Text;
		LoadDanhSachLichChieu(maPhim);
		/*LoadTenPhimLichChieu(maPhim);*/

	}
	private: System::Void btnThoat_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	


private: System::Void dataGvPhims_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
public: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, EventArgs^ e)
{
	DateTime^ batdau = gcnew DateTime(
		datePickNgayChieu->Value.Year,
		datePickNgayChieu->Value.Month,
		datePickNgayChieu->Value.Day,
		datePickBatDau->Value.Hour,
		datePickBatDau->Value.Minute,
		datePickBatDau->Value.Second);
	if (txtThoiLuong->Text == "")
	{
		txtThoiLuong->Text = "0"; 
	}
	int i = int::Parse(txtThoiLuong->Text->ToString());

	DateTime^ KetThuc = batdau->AddMinutes(i);

	datePickKetThuc->Value = DateTime(KetThuc->Year, KetThuc->Month, KetThuc->Day, KetThuc->Hour, KetThuc->Minute, KetThuc->Second);

}
private: System::Void txtThoiLuong_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	/*DateTime^ batdau = gcnew DateTime(
		datePickNgayChieu->Value.Year,
		datePickNgayChieu->Value.Month,
		datePickNgayChieu->Value.Day,
		datePickBatDau->Value.Hour,
		datePickBatDau->Value.Minute,
		datePickBatDau->Value.Second);
	int i = int::Parse(txtThoiLuong->Text->ToString());
	DateTime^ KetThuc = batdau->AddMinutes(i);
	String^ time = KetThuc->ToString();
	timeEnd->Text = time;
	textBox1->Text = time;
	
	datePickKetThuc->Value = DateTime(KetThuc->Year, KetThuc->Month, KetThuc->Day, KetThuc->Hour,KetThuc->Minute , KetThuc->Second);*/
}
};
}
