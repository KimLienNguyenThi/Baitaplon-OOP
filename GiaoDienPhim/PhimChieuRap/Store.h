#pragma once
#include "Phim.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;
// public may ham khac goi ham store duoc
public ref class Store {
public:
	Store(void)
	{}
	OleDbConnection^ ConnectionAccess();
	void CloseAccess(OleDbConnection^ conn);
	DataTable^ GetAllPhims(String^ timkiemTen);
	DataTable^ Get1Phim(String^ maPhim);
	DataTable^ LoadDanhSachLichChieu(String^ maPhim);
	DataTable^  LoadDanhSachLichChieuTuongLai(String^ maPhim);
	DataTable^ LoadDanhSachLichKhungGio(String^ maPhim,DateTime^ ngay);
	DataTable^ LoadListRapPhim(String^ maRap);
	DataTable^ GetPhimCoLichChieu();
	DataTable^ LoadDanhSachGheDaDangKy(String^ idLich, String^ maRap);
	DataTable^ GetRapPhim(String^ rapPhim);
	DataTable^ Get1LichChieu(String^ idLichChieu);
	DataTable^ KetThuc(String^ idLichChieu);
	DataTable^ GetDanhSachHoaDon(String^ timKiem, DateTime^ dateTuNgay, DateTime^ denngay);
	DataTable^ GetHoadon(String^ idHoaDon);
	DataTable^ GetSdtcuaKh(String^ sdt);
	DataTable^ GetDoanhThu(DateTime^ tungay, DateTime^ denngay);
	//DataTable^ GetDanhSachChiTietHoaDon(String^ idHoaDon);
	bool  Login(String^ taiKhoan, String^ matkhau);

	bool Sua1LichPhim(String^ idLich, String^ maPhim, String^ rapPhim, String^ giaVe, DateTime^ ngay, DateTime^ gioBatdau, DateTime^ gioKetThuc);
	bool Them1LichPhim(String^ maPhim, String^ rapPhim, String^ giaVe, DateTime^ ngay, DateTime^ gioBatdau, DateTime^ gioKetThuc);
	bool CheckPhimTonTai(String^ maPhim);
	bool CheckLichPhimTontai(String^ id);
	bool KiemTraLichChieuTonTai(DateTime batdau, DateTime ketthuc, String^ maRap);//, DateTime NgayChieu);
	bool Xoa1Phim(String^ maPhim);
	bool Xoa1LichPhim(String^ id);
	bool XoaLichChieucuaPhim(String^ MaPhim);
	bool Them1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ dienvien, String^ quocgia, String^ theloai, String^ hinhanh);
	bool Sua1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ dienvien, String^ quocgia, String^ theloai, String^ hinhanh);
	bool ThucHienDangKy(String^ idLich, array<String^>^ arrGhe, String^ tenKH, String^ sdt, int tongTien, String^ rapPhim, String^ listGhe);
	
protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~Store()
	{
	}
};
