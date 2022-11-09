#include "QuanLyPhim.h"
#include "Store.h"

String^ ManagementCinema::QuanLyPhim::getName(int i)
{
	switch (i)
	{
	case 1: return "A";
	case 2: return "B";
	case 3: return "C";
	case 4: return "D";
	case 5: return "E";
	case 6: return "F";
	case 7: return "G";
	case 8: return "H";
	default:
		break;
	}
}

void ManagementCinema::QuanLyPhim::XoaText()
{
	pictureBox1->Image = nullptr;
	txtMaPhim->Text = "";
	txtNamSanXuat->Text = "";
	txtTheLoai->Text = "";
	txtThoiLuong->Text = "";
	comboBox1->SelectedIndex = 0;
	//comboBox1->Text = "";
	txtTenPhim->Text = "";
	txtDienVien->Text = "";
	fileName = "";
	btnChonHinh->Enabled = false;
}

void ManagementCinema::QuanLyPhim::LoadDanhSachPhim()
{
	Store^ s = gcnew Store();
	dt =s->GetAllPhims("");
	dataGridView1->DataSource = dt;
}

void ManagementCinema::QuanLyPhim::LoadComboBoxQuocGia()
{
	comboBox1->Items->Add(L"");
	comboBox1->Items->Add(L"Việt Nam");
	comboBox1->Items->Add(L"Mỹ");
	comboBox1->Items->Add("Trung");
	comboBox1->Items->Add(L"Thái");
	comboBox1->Items->Add(L"Hàn");
}

bool ManagementCinema::QuanLyPhim::KiemTraPhimTonTai(String^ maPhim)
{
	Store^ s = gcnew Store();
	return s->CheckPhimTonTai(maPhim);
}

bool ManagementCinema::QuanLyPhim::Them1Phim()
{
	Store^ s = gcnew Store();
	return s->Them1Phim(txtMaPhim->Text,
		txtTenPhim->Text,
		txtNamSanXuat->Text,
		txtThoiLuong->Text,
		txtDienVien->Text,
		comboBox1->Text,
		txtTheLoai->Text,
		fileName);
}


bool ManagementCinema::QuanLyPhim::Sua1Phim()
{
	Store^ s = gcnew Store();
	return s->Sua1Phim(txtMaPhim->Text,
		txtTenPhim->Text,
		txtNamSanXuat->Text,
		txtThoiLuong->Text,
		txtDienVien->Text,
		comboBox1->Text,
		txtTheLoai->Text,
		fileName);
}

bool ManagementCinema::QuanLyPhim::Xoa1Phim(String^ maPhim)
{
	Store^ s = gcnew Store();
	return s->Xoa1Phim(maPhim);
}

bool ManagementCinema::QuanLyPhim::XoaLichChieucuaPhim(String^ MaPhim)
{
	Store^ s = gcnew Store();
	bool xoa = s->XoaLichChieucuaPhim(MaPhim);
	return xoa; 
}




/// <summary>
/// bam them thi no an di cai sua xoa de k thuc hien dc thao tac do.
void ManagementCinema::QuanLyPhim::LoadButton(bool bbtnThem, bool bbtnLuu, bool bbtnSua, bool bbtnXoa, bool bbtnHuy)
{
	btnThem->Enabled = bbtnThem;
	btnLuu->Enabled = bbtnLuu;
	btnSua->Enabled = bbtnSua;
	btnXoa->Enabled = bbtnXoa;
	btnHuy->Enabled = bbtnHuy;
}
