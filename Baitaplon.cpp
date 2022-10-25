#include<iostream>
#include<string>

using namespace std;

            // CÀI ĐẶT CÁC CLASS
class Date {
        protected: 
    int day;
    int month;
    int year;

        public: 
    Date(){
        day = month = year = 0;
    }

    Date (int day, int month, int year){
      this -> day = day;
      this -> month = month; 
      this -> year = year;
    }
void setDate (int day, int month, int year){
    this -> day = day;
    this -> month = month; 
    this -> year = year;
  }

int getDay (){
    return day;
  }

void setDay (int day){
    this ->day = day; 
  }

int getMonth (){
    return month;
  }

  void setMonth (int month){
      this ->month = month; 
  }

  int getYear (){
      return year;
  }

  void setYear (int year){
      this ->year = year;
  }

void display(){
      string day = to_string (this ->day);
      string month = to_string (this ->month);
      string year = to_string (this ->year);
      if (day.length()==1){
          day = "0"+ day;
      }
      if (month.length ()== 1){
          month ="0"+month;
      }
      cout << day +"/"+month+"/"+year << endl;
    }
};

class ThoiGian{
        protected:
    int gio;
    int phut;
    int giay;

        public:
    ThoiGian();
    ThoiGian(int gio, int phut, int giay);
    ~ThoiGian();
    int setGio(int gio);
    int setPhut(int phut);
    int setGiay(int giay);
    void NhapThoiGian();
    void XuatThoiGian();

};

ThoiGian::ThoiGian(){
    gio = phut = giay = 0;
}

ThoiGian::ThoiGian(int gio, int phut, int giay){
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
}

ThoiGian::~ThoiGian(){
    gio = phut = giay = 0;
}

int ThoiGian::setGio(int gio){
    do{
        cout<<endl<<"Nhap gio";
        cin>>gio;
    if(gio<0 || gio>24){
        cout<<endl<<"\nDinh dang gio sai vui long nhap lai";
    }
    }while(gio<0 && gio>24);
    return gio;
}

int ThoiGian::setPhut(int phut){
    do{
        cout<<endl<<"Nhap phut";
        cin>>phut;
    if(phut<0 || phut>60){
        cout<<endl<<"\nDinh dang phut sai vui long nhap lai";
    }
    }while(phut<0 || phut>60);
    return phut;
}

int ThoiGian::setGiay(int giay){
    do{
        cout<<endl<<"Nhap giay";
        cin>>giay;
    if(giay<0 || giay>60){
        cout<<endl<<"\nDinh dang giay sai vui long nhap lai";
    }
    }while(giay<0 || giay>60);
    return giay;
}

void ThoiGian::NhapThoiGian(){
    cout<<endl;
    cout<<"Nhap gio: "<<endl;
    setGio(gio);
    cout<<"Nhap phut: "<<endl;
    setPhut(phut);
    cout<<"Nhap giay: "<<endl;
    setGiay(giay);
}

void ThoiGian::XuatThoiGian(){
    cout<<"Thoi gian: "<<gio<<":"<<phut<<":"<<giay;
}

class NhaSanXuat{
        protected:
    string tenNhaSX;
    string quocGia;

        public:
    NhaSanXuat();
    NhaSanXuat(string tenNhaSX, string quocGia);
};

NhaSanXuat::NhaSanXuat(){
    tenNhaSX = quocGia = "";
}

NhaSanXuat::NhaSanXuat(string tenNhaSX, string quocGia){
    this->tenNhaSX = tenNhaSX;
    this->quocGia = quocGia;
}

class Phim:public NhaSanXuat{
        protected:
    string maPhim;
    string tenPhim;
    string theLoai;
    Date ngayKhoiChieu;
    float giaVe;
    int thoiLuongPhim;

        public:
    Phim();
    ~Phim();
    string getMaphim ();
    void setMaphim(string maPhim);
    string getTenphim ();
    void setTenphim (string tenPhim);
    string getTheloai ();
    void setTheloai (string theLoai);
    Date getNgaykhoichieu ();
    void setNgaykhoichieu_ngay(int ngay);
    void setNgaykhoichieu_thang(int thang);
    void setNgaykhoichieu_nam(int nam);
    float getGiave ();
    void setGiave(float giaVe);
    int getThoiluongphim();
    void setThoiluongphim(int thoiLuongPhim);
    void XuatthongtinPhim();
};

Phim::Phim(){
    maPhim = tenPhim = theLoai = "";
    giaVe = 0.0;
    thoiLuongPhim =0;
}

Phim::~Phim(){
    maPhim = tenPhim = theLoai = "";
    giaVe = 0.0;
    thoiLuongPhim =0;
}
string Phim::getMaphim (){
    return maPhim;
}
void Phim::setMaphim (string maPhim){
    this ->maPhim = maPhim;
}
string Phim::getTenphim (){
    return tenPhim;
}
void Phim::setTenphim (string tenPhim){
    this ->tenPhim = tenPhim;
}
string Phim::getTheloai (){
    return theLoai;
}
void Phim::setTheloai (string theLoai){
    this ->theLoai = theLoai;
}
Date Phim::getNgaykhoichieu(){
    return ngayKhoiChieu;
}
void Phim::setNgaykhoichieu_nam (int nam){
    this ->ngayKhoiChieu.setYear(nam);
}
void Phim::setNgaykhoichieu_ngay (int ngay){
    this ->ngayKhoiChieu.setDay(ngay);
}
void Phim::setNgaykhoichieu_thang (int thang){
    this ->ngayKhoiChieu.setMonth(thang);
}
float Phim::getGiave (){
    return giaVe;
}
void Phim::setGiave (float giaVe){
    this ->giaVe = giaVe;
}
int Phim::getThoiluongphim(){
    return thoiLuongPhim;
}
void Phim::setThoiluongphim (int thoiLuongPhim){
    this ->thoiLuongPhim = thoiLuongPhim;
}

void Phim::XuatthongtinPhim(){
    cout<<endl;
    cout << "Ma phim: " << maPhim << endl;
    cout << "Ten phim: " << tenPhim << endl;
    cout << "The loai: " << theLoai << endl;
    cout << "Ngay khoi chieu: " << ngayKhoiChieu.getDay()<<"/" << ngayKhoiChieu.getMonth()<<"/" <<  ngayKhoiChieu.getYear() << endl;
    cout << "Gia ve: " << giaVe << endl;
    cout << "Thoi luong phim: " << thoiLuongPhim<<"p"<< endl;
    cout<<endl;
}

class Rap{
        protected:
    string tenRap;
    int soGhe=50;
    int ghe[50] = {0,0,0,0,0,0,0,0,0,0,
                   0,0,0,0,0,0,0,0,0,0,
                   0,0,0,0,0,0,0,0,0,0,
                   0,0,0,0,0,0,0,0,0,0,
                   0,0,0,0,0,0,0,0,0,0};

        public:
    Rap();
    ~Rap();
    void chonGhe(int gheChon);
};

Rap::Rap(){
    tenRap = "";
    soGhe = 50;
}

Rap::~Rap(){
    tenRap = "";
    soGhe = 0;
}

void Rap::chonGhe(int gheChon){
    ghe[gheChon] = 1;
}

class GioChieu:public Date{
        private:
    ThoiGian tgBatDau;
    ThoiGian tgKetThuc;

        public:
    GioChieu();
    ~GioChieu();
};

GioChieu::GioChieu(){
}

GioChieu::~GioChieu(){
}

class Ve:public Phim{
        private:
    GioChieu gioChieu;
    Rap rap;

        public:
    Ve();
    ~Ve();
    void NhapThongTinPhim();
    void XuatThongTinPhim();
    Rap getRap();
};

Ve::Ve(){
}

Ve::~Ve(){
}

void Ve::NhapThongTinPhim(){
    fflush(stdin);
    cout<<"Nhap ten phim: ";
    getline(cin,this->tenPhim);
}

void Ve::XuatThongTinPhim(){
    cout<<tenPhim;
}

Rap Ve::getRap(){
    return rap;
}

class ConNguoi{
        protected:
    string ten;
    string sdt;
    string gioiTinh;

        public:
    ConNguoi();
    ~ConNguoi();
    void NhapThongTinCaNhan();
    void XuatThongTinCaNhan();
};

ConNguoi::ConNguoi(){
    ten = sdt = gioiTinh = "";
}

ConNguoi::~ConNguoi(){
    ten = sdt = gioiTinh = "";
}

void ConNguoi::NhapThongTinCaNhan(){
    fflush(stdin);
    cout<<"Nhap ten: ";
    getline(cin, this->ten);
    fflush(stdin);
    cout<<"Nhap so dien thoai: ";
    getline(cin, this->sdt);
    fflush(stdin);
    cout<<"Nhap gioi tinh: ";
    getline(cin, this->gioiTinh);
}

void ConNguoi::XuatThongTinCaNhan(){
    cout<<"Ten: "<<ten<<endl;
    cout<<"So dien thoai: "<<sdt<<endl;
    cout<<"Gioi tinh: "<<gioiTinh<<endl;
}

class KhachHang:public ConNguoi{
        private:
    Ve *ve;
    int soLuongVe;

        public:
    void NhapThongTinKhachHang();
    void Xuatthongtinkhachhang();
    Ve* getVe();
    int getSoLuongVe();
};

void KhachHang::NhapThongTinKhachHang(){
    ConNguoi::NhapThongTinCaNhan();
    cout<<"So ve mua: ";
    cin>>soLuongVe;
    ve = new Ve[soLuongVe];
}
    
void KhachHang::Xuatthongtinkhachhang(){
    cout<<endl<<"Ten: "<<ten<<endl;
    cout<<"Sdt: "<<sdt<<endl;
    cout<<"Gioi tinh: "<<gioiTinh<<endl;
    cout<<"So ve mua: "<<soLuongVe<<endl;
    cout<<"Phim chon: ";
    this->getVe()->XuatThongTinPhim();
}

Ve* KhachHang::getVe(){
    return ve;
}

int KhachHang::getSoLuongVe(){
    return soLuongVe;
}

class NhanVien:public ConNguoi{
        private:
    string chucVu;

};