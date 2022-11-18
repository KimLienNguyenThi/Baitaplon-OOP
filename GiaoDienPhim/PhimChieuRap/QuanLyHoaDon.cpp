#include "QuanLyHoaDon.h"
#include "Store.h"
void ManagementCinema::QuanLyHoaDon::LoadDanhSachHoaDon()
{
    Store^ s = gcnew Store();
    dataHoaDon = s->GetDanhSachHoaDon(txtTimKiem->Text,dateTimePickerTuNgay->Value, dateTimePickerDenNgay->Value);
    gvHoaDon->DataSource = dataHoaDon;
}

void ManagementCinema::QuanLyHoaDon::gethoadon(String^ idhoadon)
{
    Store^ s = gcnew Store();
    
    dataHoaDonIn = s->GetHoadon(idhoadon);

    //gvchitiet->datasource = datachitiethoadon;
}
