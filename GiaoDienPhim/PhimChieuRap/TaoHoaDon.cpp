#include "TaoHoaDon.h"
#include "Store.h"

void ManagementCinema::TaoHoaDon::ThucHienDangKy()
{
	Store^ s = gcnew Store();
	s->ThucHienDangKy(idLichChieu, arrGhe, txtTenKhachHang->Text, txtSoDT->Text, tongTien, rapPhim);
}

void ManagementCinema::TaoHoaDon::LoadLichPhim()
{
	Store^ s = gcnew Store();

	if (idLichChieu == "" || listGhe == "") {
		MessageBox::Show(L"Không có ID Lịch phim hoặc chưa chọn ghế!", "Thông Báo");
		return;
	}

	DataTable^ lichPhim = s->Get1LichChieu(idLichChieu);
	if (lichPhim == nullptr || lichPhim->Rows->Count == 0) {
		MessageBox::Show(L"Không tìm thấy lịch phim!", "Thông Báo");
		return;
	}

	DataRow^ dr = lichPhim->Rows[0];
	rapPhim = dr["RapPhim"]->ToString();
	labTenPhim->Text = dr["Ten"]->ToString();
	labMaPhim->Text = dr["Phim.MaPhim"]->ToString();
	labGhe->Text = listGhe;
	arrGhe = listGhe->Split(',');
	tongTien = (arrGhe->Length * int::Parse(dr["GiaVe"]->ToString()));
	labTongTien->Text = tongTien.ToString();
	labNgayChieu->Text = DateTime::Parse(dr["NgayChieu"]->ToString()).ToString("yyyy/MM/dd");
	labKhungGio->Text = DateTime::Parse(dr["GioBatDau"]->ToString()).ToString("HH:mm") + L" đến " + DateTime::Parse(dr["GioKetThuc"]->ToString()).ToString("HH:mm");
}
