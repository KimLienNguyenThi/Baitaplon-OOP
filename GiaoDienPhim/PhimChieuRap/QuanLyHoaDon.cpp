#include "QuanLyHoaDon.h"
#include "Store.h"
void ManagementCinema::QuanLyHoaDon::LoadDanhSachHoaDon()
{
    Store^ s = gcnew Store();
    dataHoaDon = s->GetDanhSachHoaDon(txtTimKiem->Text,dateTimePickerTuNgay->Value, dateTimePickerDenNgay->Value);
    gvHoaDon->DataSource = dataHoaDon;
}

//void ManagementCinema::QuanLyHoaDon::GetDanhSachChiTietHoaDon(String^ idhoadon)
//{
//    Store^ s = gcnew Store();
//    dataChiTietHoaDon = s->GetDanhSachChiTietHoaDon(idhoadon);
//
//    
//    //gvChiTiet->DataSource = dataChiTietHoaDon;
//}
