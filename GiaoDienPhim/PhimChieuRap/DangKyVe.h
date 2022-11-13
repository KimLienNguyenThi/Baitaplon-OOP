#pragma once
#include "TaoHoaDon.h"

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DangKyVe
	/// </summary>
	public ref class DangKyVe : public System::Windows::Forms::Form
	{
	public:
		DangKyVe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void LoadDanhSachPhimCoLichChieu();
		void LoadDanhSachLichChieuTuongLai(String^ maPhim);
		void LoadDanhSachKhungGioChieu(String^ maPhim, DateTime^ date);
		void LoadDanhSachGhe(String^ idLich);
		bool TimKiemGheDangKy(DataTable^ tableLich, String^ maGhe);
		String^ GetTenGhe(int i);
		void XoaDanhSachGheDangChon();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DangKyVe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboKhungGio;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboNgayChieu;

	private: System::Windows::Forms::ComboBox^ comboTenPhim;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnLuu;
	private: System::Windows::Forms::Button^ btnHuy;

	private: System::Windows::Forms::DataGridView^ dataGvGhe;
	private: System::Windows::Forms::GroupBox^ gb2;
	private: System::Windows::Forms::ListView^ lstViewDangChonGhe;
	private: System::Windows::Forms::Button^ btnThoat;







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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnThoat = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboKhungGio = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboNgayChieu = (gcnew System::Windows::Forms::ComboBox());
			this->comboTenPhim = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->gb2 = (gcnew System::Windows::Forms::GroupBox());
			this->lstViewDangChonGhe = (gcnew System::Windows::Forms::ListView());
			this->btnLuu = (gcnew System::Windows::Forms::Button());
			this->btnHuy = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGvGhe = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->gb2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvGhe))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1244, 281);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnThoat);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboKhungGio);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboNgayChieu);
			this->groupBox1->Controls->Add(this->comboTenPhim);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(440, 0);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(804, 281);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Chọn phim";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &DangKyVe::groupBox1_Enter);
			// 
			// btnThoat
			// 
			this->btnThoat->BackColor = System::Drawing::Color::Silver;
			this->btnThoat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThoat->Location = System::Drawing::Point(605, 203);
			this->btnThoat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnThoat->Name = L"btnThoat";
			this->btnThoat->Size = System::Drawing::Size(137, 46);
			this->btnThoat->TabIndex = 4;
			this->btnThoat->Text = L"Thoát";
			this->btnThoat->UseVisualStyleBackColor = false;
			this->btnThoat->Click += gcnew System::EventHandler(this, &DangKyVe::btnThoat_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 155);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 22);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Khung giờ: ";
			// 
			// comboKhungGio
			// 
			this->comboKhungGio->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboKhungGio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboKhungGio->FormattingEnabled = true;
			this->comboKhungGio->Location = System::Drawing::Point(137, 150);
			this->comboKhungGio->Margin = System::Windows::Forms::Padding(4);
			this->comboKhungGio->Name = L"comboKhungGio";
			this->comboKhungGio->Size = System::Drawing::Size(605, 30);
			this->comboKhungGio->TabIndex = 14;
			this->comboKhungGio->SelectedValueChanged += gcnew System::EventHandler(this, &DangKyVe::comboKhungGio_SelectedValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 99);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 22);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Ngày chiếu: ";
			// 
			// comboNgayChieu
			// 
			this->comboNgayChieu->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboNgayChieu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboNgayChieu->FormatString = L"yyyy/MM/dd";
			this->comboNgayChieu->FormattingEnabled = true;
			this->comboNgayChieu->Location = System::Drawing::Point(137, 93);
			this->comboNgayChieu->Margin = System::Windows::Forms::Padding(4);
			this->comboNgayChieu->Name = L"comboNgayChieu";
			this->comboNgayChieu->Size = System::Drawing::Size(605, 30);
			this->comboNgayChieu->TabIndex = 11;
			this->comboNgayChieu->SelectedValueChanged += gcnew System::EventHandler(this, &DangKyVe::comboNgayChieu_SelectedValueChanged);
			// 
			// comboTenPhim
			// 
			this->comboTenPhim->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboTenPhim->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboTenPhim->FormattingEnabled = true;
			this->comboTenPhim->Location = System::Drawing::Point(137, 33);
			this->comboTenPhim->Margin = System::Windows::Forms::Padding(4);
			this->comboTenPhim->Name = L"comboTenPhim";
			this->comboTenPhim->Size = System::Drawing::Size(605, 30);
			this->comboTenPhim->TabIndex = 10;
			this->comboTenPhim->SelectedValueChanged += gcnew System::EventHandler(this, &DangKyVe::comboTenPhim_SelectedValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Tên Phim: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(387, 263);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->gb2);
			this->panel2->Controls->Add(this->btnLuu);
			this->panel2->Controls->Add(this->btnHuy);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 281);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1244, 95);
			this->panel2->TabIndex = 1;
			// 
			// gb2
			// 
			this->gb2->Controls->Add(this->lstViewDangChonGhe);
			this->gb2->Dock = System::Windows::Forms::DockStyle::Right;
			this->gb2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gb2->Location = System::Drawing::Point(524, 0);
			this->gb2->Margin = System::Windows::Forms::Padding(4);
			this->gb2->Name = L"gb2";
			this->gb2->Padding = System::Windows::Forms::Padding(4);
			this->gb2->Size = System::Drawing::Size(720, 95);
			this->gb2->TabIndex = 3;
			this->gb2->TabStop = false;
			this->gb2->Text = L"Danh sách ghế đang chọn";
			// 
			// lstViewDangChonGhe
			// 
			this->lstViewDangChonGhe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lstViewDangChonGhe->HideSelection = false;
			this->lstViewDangChonGhe->Location = System::Drawing::Point(4, 24);
			this->lstViewDangChonGhe->Margin = System::Windows::Forms::Padding(4);
			this->lstViewDangChonGhe->Name = L"lstViewDangChonGhe";
			this->lstViewDangChonGhe->Size = System::Drawing::Size(712, 67);
			this->lstViewDangChonGhe->TabIndex = 3;
			this->lstViewDangChonGhe->UseCompatibleStateImageBehavior = false;
			// 
			// btnLuu
			// 
			this->btnLuu->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnLuu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLuu->Location = System::Drawing::Point(94, 21);
			this->btnLuu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLuu->Name = L"btnLuu";
			this->btnLuu->Size = System::Drawing::Size(137, 46);
			this->btnLuu->TabIndex = 2;
			this->btnLuu->Text = L"Đăng ký";
			this->btnLuu->UseVisualStyleBackColor = false;
			this->btnLuu->Click += gcnew System::EventHandler(this, &DangKyVe::btnLuu_Click);
			// 
			// btnHuy
			// 
			this->btnHuy->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnHuy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHuy->Location = System::Drawing::Point(289, 21);
			this->btnHuy->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnHuy->Name = L"btnHuy";
			this->btnHuy->Size = System::Drawing::Size(137, 46);
			this->btnHuy->TabIndex = 1;
			this->btnHuy->Text = L"Hủy";
			this->btnHuy->UseVisualStyleBackColor = false;
			this->btnHuy->Click += gcnew System::EventHandler(this, &DangKyVe::btnHuy_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGvGhe);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 376);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1244, 311);
			this->panel3->TabIndex = 2;
			// 
			// dataGvGhe
			// 
			this->dataGvGhe->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGvGhe->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGvGhe->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGvGhe->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGvGhe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGvGhe->Location = System::Drawing::Point(0, 0);
			this->dataGvGhe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGvGhe->Name = L"dataGvGhe";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGvGhe->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGvGhe->RowHeadersWidth = 51;
			this->dataGvGhe->RowTemplate->Height = 24;
			this->dataGvGhe->Size = System::Drawing::Size(1244, 311);
			this->dataGvGhe->TabIndex = 0;
			this->dataGvGhe->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DangKyVe::dataGvGhe_CellClick);
			// 
			// DangKyVe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1244, 687);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DangKyVe";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Đăng ký vé";
			this->Load += gcnew System::EventHandler(this, &DangKyVe::DangKyVe_Load);
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->gb2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvGhe))->EndInit();
			this->ResumeLayout(false);

		}

		DataTable^ dataPhims = gcnew DataTable();
		DataTable^ dataLichChieus = gcnew DataTable();
		DataTable^ dataKhunGioChieus = gcnew DataTable();
		DataTable^ dataKhunGioChieusSelect = gcnew DataTable();
		String^ maPhimDangChon = "";
		String^ maLichDangChon = "";
		DataTable^ dataGheDangKy = gcnew DataTable();
		DataTable^ danhSachGheDaDangKy = gcnew DataTable();
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DangKyVe_Load(System::Object^ sender, System::EventArgs^ e) {
		this->LoadDanhSachPhimCoLichChieu();
		/*dataGvPhims->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dataGvLich->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		this->LoadDataPhim();
		this->LoadDanhSachRapPhim("");*/
	}
	private: System::Void comboTenPhim_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selected = comboTenPhim->GetItemText(this->comboTenPhim->SelectedItem);
		String^ phimDangChon = selected->Split('-')[1];
		maPhimDangChon = phimDangChon;

		this->LoadDanhSachLichChieuTuongLai(phimDangChon);
		XoaDanhSachGheDangChon();
	}
	private: System::Void comboNgayChieu_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboNgayChieu->Text == "") {
			MessageBox::Show(L"Vui lòng chọn ngày chiếu!", "Thông Báo");
			return;
		}
		String^ ngaySelected = comboNgayChieu->GetItemText(this->comboNgayChieu->SelectedItem);
		this->LoadDanhSachKhungGioChieu(maPhimDangChon, DateTime::Parse(ngaySelected));
		XoaDanhSachGheDangChon();
	}
	private: System::Void comboKhungGio_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selected = comboKhungGio->GetItemText(this->comboKhungGio->SelectedItem);
		String^ maLich = selected->Split('-')[1];
		maLichDangChon = maLich;
		this->LoadDanhSachGhe(maLich);
		XoaDanhSachGheDangChon();
	}
	private: System::Void dataGvGhe_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0)
		{
			int a = e->RowIndex;
			int b = e->ColumnIndex;

			String^ soGhe = dataGvGhe->Rows[a]->Cells[b]->Value->ToString();
			ListViewItem^ item = lstViewDangChonGhe->FindItemWithText(soGhe);
			if (item == nullptr && TimKiemGheDangKy(danhSachGheDaDangKy, soGhe) == false) {
				lstViewDangChonGhe->Items->Add(soGhe);
			}
		}
	}
	private: System::Void btnLuu_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lstViewDangChonGhe->Items->Count == 0) {
			MessageBox::Show(L"Vui lòng chọn ghế!", "Thông Báo");
			return;
		}
		String^ listGheChon = "";
		int i = 1;
		for each(ListViewItem^ item in lstViewDangChonGhe->Items)
		{
			i++;
			listGheChon += item->Text;
			if (lstViewDangChonGhe->Items->Count >= i) {
				listGheChon += ",";
			}
		}
		TaoHoaDon^ form = gcnew TaoHoaDon(maLichDangChon, listGheChon);
		form->ShowDialog();
		this->LoadDanhSachGhe(maLichDangChon);
		XoaDanhSachGheDangChon();
	}
	private: System::Void btnHuy_Click(System::Object^ sender, System::EventArgs^ e) {
		XoaDanhSachGheDangChon();
	}
private: System::Void btnThoat_Click(System::Object^ sender, System::EventArgs^ e) {
	Close(); 
}
};
}
