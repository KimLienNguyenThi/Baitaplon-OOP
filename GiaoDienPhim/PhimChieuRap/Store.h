#pragma once
#include "Phim.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;
public ref class Store {
public:
	Store(void)
	{}
	OleDbConnection^ ConnectionAccess();
	void CloseAccess(OleDbConnection^ conn);
	DataTable^ GetAllPhims(String^ timkiemTen);
	DataTable^ LoadDanhSachLichChieu(String^ maPhim);
	DataTable^  LoadDanhSachLichChieuTuongLai(String^ maPhim);
	/*DataTable^ LoadTenPhimLichChieu(String^ maPhim);*/
	DataTable^ LoadListRapPhim(String^ maRap);
	DataTable^ GetPhimCoLichChieu();
	bool Sua1LichPhim(String^ idLich, String^ maPhim, String^ rapPhim, String^ giaVe, DateTime^ ngay, DateTime^ gioBatdau, DateTime^ gioKetThuc);
	bool Them1LichPhim(String^ maPhim, String^ rapPhim, String^ giaVe, DateTime^ ngay, DateTime^ gioBatdau, DateTime^ gioKetThuc);
	bool CheckPhimTonTai(String^ maPhim);
	bool CheckLichPhimTontai(String^ id);
	bool KiemTraLichChieuTonTai(DateTime batdau, DateTime ketthuc, String^ maRap);//, DateTime NgayChieu);
	bool Xoa1Phim(String^ maPhim);
	bool Xoa1LichPhim(String^ id);
	bool Them1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ dienvien, String^ quocgia, String^ theloai, String^ hinhanh);
	bool Sua1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ dienvien, String^ quocgia, String^ theloai, String^ hinhanh);
protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~Store()
	{
	}
};
