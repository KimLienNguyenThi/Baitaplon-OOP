#pragma once
using namespace System;
public ref class KhungGio {
	String^ ID;
	String^ KhungGioChieu;
public:
	KhungGio()
	{}

	KhungGio(String^ id, String^ khungGioChieu)
	{
		ID = id;
		KhungGioChieu = khungGioChieu;
	}
	String^ getID() {
		return this->ID;
	};
	String^ getKhungGioChieu() {
		return KhungGioChieu;
	};

protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~KhungGio()
	{
	}
};