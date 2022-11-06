#pragma once
using namespace System;
	public ref class Phim {
		int ID;
		String^ Ten;
		int ThoiLuong;
		int NamSanXuat;
		String^ QuocGia;
		String^ TheLoai;
	public:
		Phim(void)
		{}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Phim()
		{
		}
	};