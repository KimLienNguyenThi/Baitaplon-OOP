#include "DangKyVe.h"
#include "Store.h"
#include "KhungGio.h"

void ManagementCinema::DangKyVe::LoadDanhSachPhimCoLichChieu()
{
	Store^ s = gcnew Store();
	dataPhims = s->GetPhimCoLichChieu();
	for each (DataRow ^ item in dataPhims->Rows)
	{
		comboTenPhim->Items->Add(item["Ten"]->ToString() + "-" + item["MaPhim"]->ToString());
	}
	/*if (dataPhims->Rows->Count > 0) {
		DataRow^ row = dataPhims->Rows[0];
		String^ maPhim = row["MaPhim"]->ToString();
		dataLichChieus = s->LoadDanhSachLichChieuTuongLai(maPhim);

		for each (DataRow ^ item in dataLichChieus->Rows)
		{
			comboNgayChieu->Items->Add(item["NgayChieu"]->ToString());
		}
	}*/
}

void ManagementCinema::DangKyVe::LoadDanhSachLichChieuTuongLai(String^ maPhim)
{
	Store^ s = gcnew Store();
	dataLichChieus = s->LoadDanhSachLichChieuTuongLai(maPhim);
	comboNgayChieu->Items->Clear();

	DataTable^ phim = s->Get1Phim(maPhim);
	if (phim->Rows->Count == 0) {
		MessageBox::Show(L"Không tìm thấy phim!", "Thông Báo");
		return;
	}
	DataRow^ dr = phim->Rows[0];
	pictureBox1->Image = gcnew Bitmap(dr["HinhAnh"]->ToString());
	for each (DataRow ^ item in dataLichChieus->Rows)
	{
		comboNgayChieu->Items->Add(item[0]->ToString());
	}
}

void ManagementCinema::DangKyVe::LoadDanhSachKhungGioChieu(String^ maPhim, DateTime^ date)
{
	Store^ s = gcnew Store();
	dataKhunGioChieus = s->LoadDanhSachLichKhungGio(maPhim, date);
	comboKhungGio->Items->Clear();
	for each (DataRow ^ item in dataKhunGioChieus->Rows)
	{
		//String^ a = DateTime::Parse(item["GioBatDau"]->ToString()).ToString("HH:mm") + L" đến " + DateTime::Parse(item["GioKetThuc"]->ToString()).ToString("HH:mm");
		//KhungGio^ khungGio = gcnew KhungGio(item["ID"]->ToString(), a);
		//dataKhunGioChieusSelect->NewRow();
		comboKhungGio->Items->Add(DateTime::Parse(item["GioBatDau"]->ToString()).ToString("HH:mm") + L" đến " + DateTime::Parse(item["GioKetThuc"]->ToString()).ToString("HH:mm") + "  -" + item["ID"]->ToString());
	}
	//comboKhungGio->DataSource = dataKhunGioChieus;
	//comboKhungGio->ValueMember = "ID";
	//comboKhungGio->DisplayMember = "GioBatDau" + "GioKetThuc";
	
}

void ManagementCinema::DangKyVe::LoadDanhSachGhe(String^ idLich)
{
	Store^ s = gcnew Store();
	String^ rapPhim = "";
	for each (DataRow^ item in dataKhunGioChieus->Rows)
	{
		if (item["ID"]->ToString() == idLich) {
			rapPhim = item["RapPhim"]->ToString();
			break;
		}
	}
	if (rapPhim == "") {
		MessageBox::Show(L"Không tìm thấy rạp phim!", "Thông Báo");
		return;
	}
	danhSachGheDaDangKy = s->LoadDanhSachGheDaDangKy(idLich, rapPhim);
	DataTable^ rapTable = s->GetRapPhim(rapPhim);
	DataRow^ rap = rapTable->Rows[0];

	dataGvGhe->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

	dataGheDangKy->Columns->Clear();
	dataGheDangKy->Rows->Clear();
	for (int j = 0; j < int::Parse(rap["SoCot"]->ToString()); j++)
	{
		dataGheDangKy->Columns->Add((j + 1).ToString());
	}
	
	for (int i = 0; i < int::Parse(rap["SoHang"]->ToString()); i++)
	{
		DataRow^ dr = dataGheDangKy->NewRow();
		for (int j = 0; j < int::Parse(rap["SoCot"]->ToString()); j++)
		{
			dr[j] = GetTenGhe(i) +(j + 1).ToString();
		}
		dataGheDangKy->Rows->Add(dr);
	}
	dataGvGhe->DataSource = dataGheDangKy;
	for (int i = 0; i < int::Parse(rap["SoHang"]->ToString()); i++)
	{
		dataGvGhe->Rows[i]->ReadOnly = true;
		for (int j = 0; j < int::Parse(rap["SoCot"]->ToString()); j++)
		{
			if (TimKiemGheDangKy(danhSachGheDaDangKy, GetTenGhe(i) + (j + 1).ToString()) == true) {
				dataGvGhe->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
			}

			if (i == 0) {
				dataGvGhe->Columns[j]->SortMode = DataGridViewColumnSortMode::NotSortable;
			}
			
		}
	}
}

bool ManagementCinema::DangKyVe::TimKiemGheDangKy(DataTable^ tableLich, String^ maGhe)
{
	for each (DataRow^ row in tableLich->Rows)
	{
		if (row["MaGhe"]->ToString() == maGhe) {
			return true;
		}
	}
	return false;
}

String^ ManagementCinema::DangKyVe::GetTenGhe(int i)
{
	switch (i)
	{
	case 0: return "A";
	case 1: return"B";
	case 2: return"C";
	case 3: return"D";
	case 4: return"E";
	case 5: return"F";
	case 6: return"G";
	case 7: return"H";
	case 8: return"I";
	case 9: return"J";
	case 10: return"K";
	default:
		break;
	}
}

void ManagementCinema::DangKyVe::XoaDanhSachGheDangChon()
{
	lstViewDangChonGhe->Items->Clear();
}
