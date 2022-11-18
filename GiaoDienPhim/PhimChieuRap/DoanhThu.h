#pragma once

namespace ManagementCinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DoanhThu
	/// </summary>
	public ref class DoanhThu : public System::Windows::Forms::Form
	{
	public:
		DoanhThu(void)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void GetDoanhthu(DateTime^ tungay, DateTime^ denngay);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DoanhThu()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::DateTimePicker^ dateTimePickerTuNgay;


	private: System::Windows::Forms::DataGridView^ dataGvDoanhThu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ten;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GiaVe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SoVe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TongTien;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDenNgay;
	private: System::Windows::Forms::Label^ labTungay;
	private: System::Windows::Forms::Label^ labDenngay;
	private: System::Windows::Forms::Button^ btnThongke;
	private: System::Windows::Forms::Button^ btnThoat;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components; //this->Controls->Add(this->labNgayChieu);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dateTimePickerTuNgay = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGvDoanhThu = (gcnew System::Windows::Forms::DataGridView());
			this->Ten = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GiaVe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SoVe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TongTien = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateTimePickerDenNgay = (gcnew System::Windows::Forms::DateTimePicker());
			this->labTungay = (gcnew System::Windows::Forms::Label());
			this->labDenngay = (gcnew System::Windows::Forms::Label());
			this->btnThongke = (gcnew System::Windows::Forms::Button());
			this->btnThoat = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvDoanhThu))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePickerTuNgay
			// 
			this->dateTimePickerTuNgay->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePickerTuNgay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePickerTuNgay->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerTuNgay->Location = System::Drawing::Point(196, 18);
			this->dateTimePickerTuNgay->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerTuNgay->Name = L"dateTimePickerTuNgay";
			this->dateTimePickerTuNgay->Size = System::Drawing::Size(162, 27);
			this->dateTimePickerTuNgay->TabIndex = 19;
			// 
			// dataGvDoanhThu
			// 
			this->dataGvDoanhThu->AllowUserToAddRows = false;
			this->dataGvDoanhThu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGvDoanhThu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Ten, this->GiaVe,
					this->SoVe, this->TongTien
			});
			this->dataGvDoanhThu->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGvDoanhThu->Location = System::Drawing::Point(0, 125);
			this->dataGvDoanhThu->Name = L"dataGvDoanhThu";
			this->dataGvDoanhThu->RowHeadersWidth = 51;
			this->dataGvDoanhThu->RowTemplate->Height = 24;
			this->dataGvDoanhThu->Size = System::Drawing::Size(796, 278);
			this->dataGvDoanhThu->TabIndex = 24;
			this->dataGvDoanhThu->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DoanhThu::dataGvDoanhThu_CellClick);
			// 
			// Ten
			// 
			this->Ten->DataPropertyName = L"Ten";
			this->Ten->HeaderText = L"Tên Phim";
			this->Ten->MinimumWidth = 50;
			this->Ten->Name = L"Ten";
			this->Ten->Width = 150;
			// 
			// GiaVe
			// 
			this->GiaVe->DataPropertyName = L"GiaVe";
			this->GiaVe->HeaderText = L"Giá Vé";
			this->GiaVe->MinimumWidth = 6;
			this->GiaVe->Name = L"GiaVe";
			this->GiaVe->Width = 125;
			// 
			// SoVe
			// 
			this->SoVe->DataPropertyName = L"SoVe";
			this->SoVe->HeaderText = L"Số Vé";
			this->SoVe->MinimumWidth = 6;
			this->SoVe->Name = L"SoVe";
			this->SoVe->Width = 125;
			// 
			// TongTien
			// 
			this->TongTien->DataPropertyName = L"TongTien";
			this->TongTien->HeaderText = L"Tổng Doanh Thu";
			this->TongTien->MinimumWidth = 6;
			this->TongTien->Name = L"TongTien";
			this->TongTien->Width = 150;
			// 
			// dateTimePickerDenNgay
			// 
			this->dateTimePickerDenNgay->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePickerDenNgay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePickerDenNgay->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerDenNgay->Location = System::Drawing::Point(196, 60);
			this->dateTimePickerDenNgay->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDenNgay->Name = L"dateTimePickerDenNgay";
			this->dateTimePickerDenNgay->Size = System::Drawing::Size(162, 27);
			this->dateTimePickerDenNgay->TabIndex = 25;
			// 
			// labTungay
			// 
			this->labTungay->AutoSize = true;
			this->labTungay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labTungay->Location = System::Drawing::Point(75, 23);
			this->labTungay->Name = L"labTungay";
			this->labTungay->Size = System::Drawing::Size(80, 22);
			this->labTungay->TabIndex = 26;
			this->labTungay->Text = L"Từ ngày:";
			// 
			// labDenngay
			// 
			this->labDenngay->AutoSize = true;
			this->labDenngay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labDenngay->Location = System::Drawing::Point(75, 65);
			this->labDenngay->Name = L"labDenngay";
			this->labDenngay->Size = System::Drawing::Size(89, 22);
			this->labDenngay->TabIndex = 27;
			this->labDenngay->Text = L"Đến ngày:";
			// 
			// btnThongke
			// 
			this->btnThongke->Location = System::Drawing::Point(467, 37);
			this->btnThongke->Name = L"btnThongke";
			this->btnThongke->Size = System::Drawing::Size(104, 36);
			this->btnThongke->TabIndex = 28;
			this->btnThongke->Text = L"Thống Kê";
			this->btnThongke->UseVisualStyleBackColor = true;
			this->btnThongke->Click += gcnew System::EventHandler(this, &DoanhThu::btnThongke_Click);
			// 
			// btnThoat
			// 
			this->btnThoat->Location = System::Drawing::Point(680, 74);
			this->btnThoat->Name = L"btnThoat";
			this->btnThoat->Size = System::Drawing::Size(104, 36);
			this->btnThoat->TabIndex = 29;
			this->btnThoat->Text = L"Thoát";
			this->btnThoat->UseVisualStyleBackColor = true;
			this->btnThoat->Click += gcnew System::EventHandler(this, &DoanhThu::btnThoat_Click);
			// 
			// DoanhThu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(796, 403);
			this->Controls->Add(this->btnThoat);
			this->Controls->Add(this->btnThongke);
			this->Controls->Add(this->labDenngay);
			this->Controls->Add(this->labTungay);
			this->Controls->Add(this->dateTimePickerDenNgay);
			this->Controls->Add(this->dataGvDoanhThu);
			this->Controls->Add(this->dateTimePickerTuNgay);
			this->Name = L"DoanhThu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"DoanhThu";
			this->Load += gcnew System::EventHandler(this, &DoanhThu::DoanhThu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGvDoanhThu))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		DataTable^ dataDoanhThu = gcnew DataTable();
#pragma endregion
	private: System::Void DoanhThu_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime dateNow = DateTime::Now;
		dateTimePickerTuNgay->Value = DateTime(dateNow.Year, dateNow.Month, 1);
		dateTimePickerDenNgay->Value = DateTime(dateNow.Year, dateNow.Month, dateNow.DaysInMonth(dateNow.Year, dateNow.Month));
		dataGvDoanhThu->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		GetDoanhthu(dateTimePickerTuNgay->Value, dateTimePickerDenNgay->Value);
	}
private: System::Void dataGvDoanhThu_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	/*if (e->RowIndex >= 0)
	{
		int a = e->RowIndex;
		int b = e->ColumnIndex;
		DataRow^ dr = dataDoanhThu->Rows[a];
		DateTime ngaychieu = DateTime::Parse(dr["NgayChieu"]->ToString()).ToString("yyyy/MM/dd");
		GetDoanhthu(ngaychieu);

	}*/
}
private: System::Void btnThongke_Click(System::Object^ sender, System::EventArgs^ e) {
	GetDoanhthu(dateTimePickerTuNgay->Value, dateTimePickerDenNgay->Value);
}
private: System::Void btnThoat_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
