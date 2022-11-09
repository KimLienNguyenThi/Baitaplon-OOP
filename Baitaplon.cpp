#include<iostream>
#include<string>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<fstream>

using namespace std;

            // CÀI ĐẶT CÁC CLASS
class Date {
        protected: 
    int day;
    int month;
    int year;

        public: 
    Date();
    ~Date ();
    Date (int day, int month, int year);
    int getDay ();
    void setDay (int day);
    int getMonth ();
    void setMonth (int month);
    int getYear ();
    void setYear (int year);
    void display();
};

Date :: Date (){
        day = month = year = 0;
}

Date:: ~Date (){};
Date :: Date (int day, int month, int year) {
      this -> day = day;
      this -> month = month; 
      this -> year = year;
}

int Date ::getDay(){
    return day;
}

void Date::setDay (int day){
    this ->day = day;
}

int Date::getMonth (){
    return month;
}

void Date::setMonth (int month ){
    this ->month = month;
}

int Date::getYear (){
    return year;
}

void Date ::setYear (int year) {
    this ->year = year;
}

void Date::display(){
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
    int setGioHeThong(int gio);
    int setPhutHeThong(int phut);
    int setGiayHeThong(int giay);
	int getGio(){
		return gio;
	}
	int getPhut(){
		return phut;
	}
	int getGiay(){
		return giay;
	}
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

int ThoiGian::setGioHeThong(int gio){
    this->gio = gio;
}

int ThoiGian::setPhutHeThong(int phut){
    this->phut = phut;
}

int ThoiGian::setGiayHeThong(int giay){
    this->giay = giay;
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
    ~NhaSanXuat();
    NhaSanXuat(string tenNhaSX, string quocGia);
    string getTenNhaSX ();
    void setTenNhaSX(string tenNhaSX);
    string getQuocGia();
    void setQuocGia(string tenNhaSX);
    void XuatThongTinNhaSX();
};

NhaSanXuat::NhaSanXuat(){
    tenNhaSX = quocGia = "";
}

NhaSanXuat::~NhaSanXuat(){
    tenNhaSX = quocGia = "";
}

NhaSanXuat::NhaSanXuat(string tenNhaSX, string quocGia){
    this->tenNhaSX = tenNhaSX;
    this->quocGia = quocGia;
}

string NhaSanXuat::getTenNhaSX(){
    return tenNhaSX;
}

void NhaSanXuat::setTenNhaSX (string tenNhaSX){
    this ->tenNhaSX = tenNhaSX;
}

string NhaSanXuat::getQuocGia(){
    return quocGia;
}

void NhaSanXuat::setQuocGia (string quocGia){
    this ->quocGia = quocGia;
}

void NhaSanXuat::XuatThongTinNhaSX (){
    cout << "Ten nha san xuat: " << tenNhaSX << endl;
    cout << "Quoc gia: " << quocGia << endl;
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
    Phim (string maPhim, string tenPhim, string theLoai, Date ngayKhoiChieu, float giaVe, int thoiLuongPhim, string tenNhaSX, string quocGia):NhaSanXuat (tenNhaSX,quocGia){
        this ->maPhim = maPhim;
        this ->tenPhim = tenPhim;
        this ->theLoai = theLoai;
        this ->ngayKhoiChieu = ngayKhoiChieu;
        this ->giaVe = giaVe;
        this ->thoiLuongPhim = thoiLuongPhim;
    }
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
    cout << "Gia ve: " << giaVe <<"VND"<< endl;
    cout << "Thoi luong phim: " << thoiLuongPhim<<"p"<< endl;
    NhaSanXuat ::XuatThongTinNhaSX ();
    cout<<endl;
}

class Rap{
        protected:
    string tenRap;
    int soGhe=50;
    char ghe[50][6] =   {"READY","READY","READY","READY","READY","READY","READY","READY","READY","READY",
                         "READY","READY","READY","READY","READY","READY","READY","READY","READY","READY",
                         "READY","READY","READY","READY","READY","READY","READY","READY","READY","READY",
                         "READY","READY","READY","READY","READY","READY","READY","READY","READY","READY",
                         "READY","READY","READY","READY","READY","READY","READY","READY","READY","READY"
                        };

        public:
    Rap();
    ~Rap();
    void chonGhe(int gheChon);
    void XuatDanhSachGhe();
    void setGhe(int i);
    string getGhe(int gheChon);
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
    strcpy(ghe[gheChon],"XXXXX");
}

string Rap::getGhe(int gheChon){
    return ghe[gheChon];
}

void Rap::XuatDanhSachGhe(){
    cout<<"\n\t---------------------------------------------------- SO DO RAP PHIM -----------------------------------------------------";
    cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------\n";
    cout<<"| G01: "<<ghe[0]<<"  | G02: "<<ghe[1]<<"  | G03: "<<ghe[2]<<"  | G04: "<<ghe[3]<<"  | G05: "<<ghe[4]<<"  | G06: "<<ghe[5]<<"  | G07: "<<ghe[6]<<"  | G08: "<<ghe[7]<<"  | G09: "<<ghe[8]<<"  | G10: "<<ghe[9]<<"  |\n";
    cout<<"----------------------------------------------------------------------------------------------------\n";
    cout<<"| G10: "<<ghe[10]<<"  | G12: "<<ghe[11]<<"  | G13: "<<ghe[12]<<"  | G14: "<<ghe[13]<<"  | G15: "<<ghe[14]<<"  | G16: "<<ghe[15]<<"  | G17: "<<ghe[16]<<"  | G18: "<<ghe[17]<<"  | G19: "<<ghe[18]<<"  | G20: "<<ghe[19]<<"  |\n";
    cout<<"----------------------------------------------------------------------------------------------------\n";
    cout<<"| G21: "<<ghe[20]<<"  | G22: "<<ghe[21]<<"  | G23: "<<ghe[22]<<"  | G24: "<<ghe[23]<<"  | G25: "<<ghe[24]<<"  | G26: "<<ghe[25]<<"  | G27: "<<ghe[26]<<"  | G28: "<<ghe[27]<<"  | G29: "<<ghe[28]<<"  | G30: "<<ghe[29]<<"  |\n";
    cout<<"----------------------------------------------------------------------------------------------------\n";
    cout<<"| G31: "<<ghe[30]<<"  | G32: "<<ghe[31]<<"  | G33: "<<ghe[32]<<"  | G34: "<<ghe[33]<<"  | G35: "<<ghe[34]<<"  | G36: "<<ghe[35]<<"  | G37: "<<ghe[36]<<"  | G38: "<<ghe[37]<<"  | G39: "<<ghe[38]<<"  | G40: "<<ghe[39]<<"  |\n";
    cout<<"----------------------------------------------------------------------------------------------------\n";
    cout<<"| G41: "<<ghe[40]<<"  | G42: "<<ghe[41]<<"  | G43: "<<ghe[42]<<"  | G44: "<<ghe[43]<<"  | G45: "<<ghe[44]<<"  | G46: "<<ghe[45]<<"  | G47: "<<ghe[46]<<"  | G48: "<<ghe[47]<<"  | G49: "<<ghe[48]<<"  | G50: "<<ghe[49]<<"  |\n";
    cout<<"------------------------------------------------------------------------------------------------------------------------\n";
}

void Rap::setGhe(int i){
    strcpy(ghe[i],"READY");
}

class GioChieu:public Date, public ThoiGian{
        private:
    int rap;

        public:
    GioChieu();
    ~GioChieu();
    void ThoiGianBatDau();
    void ThoiGianKetThuc();
};

GioChieu::GioChieu(){
}

GioChieu::~GioChieu(){
}

void GioChieu::ThoiGianBatDau(){

}

void GioChieu::ThoiGianKetThuc(){
    
}

class Ve:public Phim{
        private:
    GioChieu gioChieu;
    int soRap;

        public:
    Ve();
    ~Ve();
    void NhapThongTinPhim();
    void XuatThongTinPhim();
    void setSoRap(int soRapChon);
    int getSoRap();
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

int Ve::getSoRap(){
    return this->soRap;
}

void Ve::setSoRap(int soRapChon){
    this->soRap = soRapChon;
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
    string getTen(){
        return ten;
    }
    string getSdt(){
        return sdt;
    }
    void setTen(string ten){
        this->ten =ten;
    }
    // void setSdt(string sdt){
    //     this->sdt = sdt;
    // }
};

ConNguoi::ConNguoi(){
    ten = sdt = gioiTinh = "";
}

ConNguoi::~ConNguoi(){
    ten = sdt = gioiTinh = "";
}

void ConNguoi::NhapThongTinCaNhan(){
    string soDau;

    fflush(stdin);
    cout<<"Nhap ten: ";
    getline(cin, this->ten);
    do{
        fflush(stdin);
        cout<<"Nhap so dien thoai: ";
        getline(cin, this->sdt);
        soDau = sdt.front();
        if(this->sdt.length()!=10 || soDau.compare("0")!=0 ){
            cout<<"\tDinh dang sai! Vui long nhap lai"<<endl;
        }
    }while(this->sdt.length() != 10 || soDau.compare("0")!=0 );
    fflush(stdin);
    cout<<"Nhap gioi tinh: ";
    getline(cin, this->gioiTinh);
}

void ConNguoi::XuatThongTinCaNhan(){
    cout<<"Ten: "<<ten<<endl;
    cout<<"So dien thoai: "<<sdt<<endl;
    cout<<"Gioi tinh: "<<gioiTinh<<endl;
}

class KhachHang:public ConNguoi, public Phim{
        private:
    Ve *ve;
    int soLuongVe;
    ThoiGian thoiGianHeThong_time;
    Date thoiGianHeThong_date;

        public:
    int *gheChon;
    void NhapThongTinKhachHang();
    void Xuatthongtinkhachhang();
    void ThoiGianHeThong();
    Ve* getVe();
    int getSoLuongVe();
    int XuatDayHeThong_Date(){
		return thoiGianHeThong_date.getDay();
	}
	int XuatMonthHeThong_Date(){
		return thoiGianHeThong_date.getMonth();
	}
	int XuatYearHeThong_Date(){
		return thoiGianHeThong_date.getYear();
	}
    int XuatGioHeThong(){
        return thoiGianHeThong_time.getGio();
    }
    int XuatPhutHeThong(){
        return thoiGianHeThong_time.getPhut();
    }
    int XuatGiayHeThong(){
        return thoiGianHeThong_time.getGiay();
    }
};

void KhachHang::NhapThongTinKhachHang(){
    ConNguoi::NhapThongTinCaNhan();
    cout<<"So ve mua: ";
    cin>>soLuongVe;
    ve = new Ve[soLuongVe];
}
    
void KhachHang::Xuatthongtinkhachhang(){
    cout<<endl<<"--------------- Thong tin khach hang --------------------";
    cout<<endl<<"Ngay mua ve: "<<thoiGianHeThong_date.getDay()<<"/"<<thoiGianHeThong_date.getMonth()<<"/"
<<thoiGianHeThong_date.getYear()<<"  ";
    thoiGianHeThong_time.XuatThoiGian();

    cout<<endl<<"Ten: "<<ten<<endl;
    cout<<"Sdt: "<<sdt<<endl;
    cout<<"Gioi tinh: "<<gioiTinh<<endl;
    cout<<"So ve mua: "<<soLuongVe<<endl;
    cout<<"Phim chon: ";
    this->getVe()->XuatThongTinPhim();
    cout<<endl<<"Rap: "<<this->getVe()->getSoRap();
    ve->getSoRap();
    for(int i=0; i<soLuongVe; i++){
        cout<<endl<<"Ghe chon: "<<gheChon[i];
    }
    cout<<endl<<"Thoi luong phim: "<<this->ve->getThoiluongphim()<<"p";
    cout<<endl<<"Don gia: "<<this->getSoLuongVe()*this->ve->getGiave()<<" VND";
}

void KhachHang::ThoiGianHeThong(){
    time_t now=time(0);
	tm *tgian = localtime(&now);
	thoiGianHeThong_date.setDay(tgian->tm_mday);
	thoiGianHeThong_date.setMonth(tgian->tm_mon + 1);
	thoiGianHeThong_date.setYear(tgian->tm_year + 1900); 
	thoiGianHeThong_time.setGioHeThong(tgian->tm_hour); 
	thoiGianHeThong_time.setPhutHeThong(tgian->tm_min);
	thoiGianHeThong_time.setGiayHeThong( tgian->tm_sec);
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

// class NhanVien:public ConNguoi{
//         private:
//     string chucVu;
// };

        // DANH SACH LIEN KET DON
// Khach hang
struct Node_kh{
    KhachHang data;
    Node_kh *next;
};

struct List_kh{
    Node_kh *head;
    Node_kh *tail;
    long size;

    List_kh(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    Node_kh* CreateNode_kh(KhachHang v);
    void addLast_kh(KhachHang v);
};

Node_kh* List_kh::CreateNode_kh(KhachHang v){
    Node_kh *q = new Node_kh;
    q->data = v;
    q->next = NULL;
    return q;
}

void List_kh::addLast_kh(KhachHang v){
    Node_kh *q = CreateNode_kh(v);
    if(size == 0){
        head = tail = q;
    }else{
        tail->next = q;
        tail = q;
    }
    size++;
}

// Phim
struct Node_phim{
    Phim data;
    Node_phim *next;
};

struct List_phim{
    Node_phim *head;
    Node_phim *tail;
    long size;

    List_phim(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    Node_phim* CreateNode(Phim v);
    void addLast(Phim v);
    void remove(Node_phim *p);
};

Node_phim* List_phim::CreateNode(Phim v){
    Node_phim *q = new Node_phim;
    q->data = v;
    q->next = NULL;
    return q;
}

void List_phim::addLast(Phim v){
    Node_phim *q = CreateNode(v);
    if(size == 0){
        head = tail = q;
    }else{
        tail->next = q;
        tail = q;
    }
    size++;
}

// Nhân viên
struct Node_nv{
    NhanVien data;
    Node_nv *next;
};

struct List_nv{
    Node_nv *head;
    Node_nv *tail;
    long size;

    List_nv(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    Node_nv* CreateNode(NhanVien v);
    void addLast(NhanVien v);
};

Node_nv* List_nv::CreateNode(NhanVien v){
    Node_nv *q = new Node_nv;
    q->data = v;
    q->next = NULL;
    return q;
}

void List_nv::addLast(NhanVien v){
    Node_nv *q = CreateNode(v);
    if(size == 0){
        head = tail = q;
    }else{
        tail->next = q;
        tail = q;
    }
    size++;
}

void List_phim::remove(Node_phim *p){
    if(p == head){
        if(head != NULL){
        Node_phim *node = head;
        head = node->next;
        delete node;

        if(head == NULL){
            tail = NULL;
        }
        }        
    }
    for(Node_phim *k = head; k!=NULL; k = k->next){
        if(p == tail){
            k->next = p->next;
            tail = k;
            delete p;
        }else if(k->next == p){
            k->next = p->next;
            delete p;
        }
    }
}

        //DANH SACH PHIM CO SAN
void DanhSachPhim(List_phim &Lphim, Phim phim){
    phim.setTenphim("Co gai tu qua khu");
    phim.setMaphim("001");
    phim.setGiave(45000.0);
    phim.setTheloai("Kinh di");
    phim.setThoiluongphim(160);
    phim.setNgaykhoichieu_ngay(20);
    phim.setNgaykhoichieu_thang(10);
    phim.setNgaykhoichieu_nam(2022);
    phim.setQuocGia("Viet Nam");
    phim.setTenNhaSX("Sky to moive");
    Lphim.addLast(phim);

    phim.setTenphim("Bong dung trung so");
    phim.setMaphim("002");
    phim.setGiave(45000.0);
    phim.setTheloai("Tam ly, hai huoc");
    phim.setThoiluongphim(120);
    phim.setNgaykhoichieu_ngay(25);
    phim.setNgaykhoichieu_thang(10);
    phim.setNgaykhoichieu_nam(2022);
    phim.setQuocGia("Han Quoc");
    phim.setTenNhaSX("Young Gang Wihoo");
    Lphim.addLast(phim);

    phim.setTenphim("Nu vuong huyen thoai");
    phim.setMaphim("003");
    phim.setGiave(45000.0);
    phim.setTheloai("Hanh dong");
    phim.setThoiluongphim(140);
    phim.setNgaykhoichieu_ngay(1);
    phim.setNgaykhoichieu_thang(11);
    phim.setNgaykhoichieu_nam(2022);
    phim.setQuocGia("Viet Nam");
    phim.setTenNhaSX("Holleyworld");
    Lphim.addLast(phim);
    
}

                // CHUC NANG
void XuatThongTinPhim (List_phim Lphim){
    for (Node_phim * k = Lphim.head; k != NULL; k = k->next){
        /* cout<<endl;
        cout << "Ma phim: " << k->data.getMaphim() << endl;
        cout << "Ten phim: " << k->data.getTenphim () << endl;
        cout << "The loai: " << k->data.getTheloai() << endl;
        cout << " Quoc gia: " << k->data.getQuocGia () << endl;
        cout << "Ten nha san xuat: " << k->data.getTenNhaSX () << endl;
        cout << "Thoi luong phim: " << k->data.getThoiluongphim() <<"p"<< endl;
        cout << "Ngay khoi chieu: " << k->data.getNgaykhoichieu().getDay() <<"/"<< k->data.getNgaykhoichieu().getMonth() <<"/"<< k->data.getNgaykhoichieu().getYear() << endl;
        cout << "Gia ve: " << k->data.getGiave () <<" VND"<< endl<<endl;
                */
               
       k->data.XuatthongtinPhim();
        }
}

void XuatThongTinKhachHang (List_kh Lkh){
    for (Node_kh *k = Lkh.head; k != NULL; k = k->next){
         k->data.Xuatthongtinkhachhang();
    }
}

void MuaVe(KhachHang kh, List_kh &Lkh, List_phim &Lphim, Phim phim, Rap &rap1, Rap &rap2){
    int soRap;
    string maPhim;
    int dem=0;

    XuatThongTinPhim(Lphim);
    cout<<"Nhap thong tin khach hang "<<endl;
    kh.NhapThongTinKhachHang();

        // Duyet qua danh sach phim -> tim ra phim co ma so khach chon
    do{
        dem=0;
        fflush(stdin);
        cout<<"Quy khach chon phim co ma so: ";
        getline(cin, maPhim);
        for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
            if(maPhim.compare(k->data.getMaphim())==0){
                kh.getVe()->setTenphim(k->data.getTenphim());
                // gan gia ve va thoi luong phim vao thong tin khach hang
                kh.getVe()->setGiave(k->data.getGiave());
                kh.getVe()->setThoiluongphim(k->data.getThoiluongphim());
                cout<<"Quy khach chon phim: "<<kh.getVe()->getTenphim()<<endl;
                break;
            }else if(maPhim.compare(k->data.getMaphim())!=0){
                dem++;
                if(dem == Lphim.size){
                    cout<<"Khong ton tai phim! Xin vui long chon lai"<<endl;
                    getch();
                }
            }
        }
    }while(dem == Lphim.size);


    kh.gheChon = new int[kh.getSoLuongVe()];

    do{
        string ktra = "XXXXX";
        cout<<"Phim chieu o rap so: ";
        cin>>soRap;
        if(soRap == 1){
            kh.getVe()->setSoRap(soRap);
            rap1.XuatDanhSachGhe();
            for(int i = 0; i<kh.getSoLuongVe(); i++){
                do{
                    cout<<"Quy khach chon ghe so: ";
                    cin>>kh.gheChon[i];
                    if(kh.gheChon[i]<1 || kh.gheChon[i]>50 || ktra.compare(rap1.getGhe(kh.gheChon[i]-1))==0){
                        cout<<endl<<"So ghe khong phu hop! Vui long chon lai"<<endl;
                    }
                }while(kh.gheChon[i]<1 || kh.gheChon[i]>50 || ktra.compare(rap1.getGhe(kh.gheChon[i]-1))==0);
                rap1.chonGhe(kh.gheChon[i]-1);
            }
            rap1.XuatDanhSachGhe();
            getch();
        }else if(soRap == 2){
            kh.getVe()->setSoRap(soRap);
            rap2.XuatDanhSachGhe();
            for(int i = 0; i<kh.getSoLuongVe(); i++){
                do{
                    cout<<"Quy khach chon ghe so: ";
                    cin>>kh.gheChon[i];
                    if(kh.gheChon[i]<1 || kh.gheChon[i]>50 || ktra.compare(rap2.getGhe(kh.gheChon[i]-1))==0){
                        cout<<endl<<"So ghe khong phu hop! Vui long chon lai"<<endl;
                    }
                }while(kh.gheChon[i]<1 || kh.gheChon[i]>50 || ktra.compare(rap2.getGhe(kh.gheChon[i]-1))==0);
                rap2.chonGhe(kh.gheChon[i]-1);
            }
            rap2.XuatDanhSachGhe();
            getch();
        }else{
            cout<<"Khong co so rap phu hop! Vui long chon lai"<<endl;
        }
    }while(soRap<1 || soRap>2);

    system("cls");
    kh.ThoiGianHeThong();
    Lkh.addLast_kh(kh);
    kh.Xuatthongtinkhachhang();
}

void ThemPhimMoi(Phim phim, List_phim &Lphim){
    // Khai bao cac gia tri de gan du lieu
    string maPhim;
    string tenPhim;
    string theLoai;
    int ngayKhoiChieu;
    float giaVe;
    int thoiLuongPhim;
    string tenNhaSx;
    string tenQuocGia;
    int dem=0;

    cout<<endl<<"---------- Nhap phim moi ----------";

    do{
        dem=0;
        fflush(stdin);
        cout<<endl<<"Ma phim: ";
        getline(cin,maPhim);
        for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
            if(maPhim.compare(k->data.getMaphim())!=0){
                dem++;
                if(dem == Lphim.size){
                    phim.setMaphim(maPhim);
                }
            }else if(maPhim.compare(k->data.getMaphim())==0){
                cout<<"Ma phim da ton tai. Vui long nhap lai !!!";
                break;
            }
        }
    }while(dem!=Lphim.size);

    do{
        dem=0;
        fflush(stdin);
        cout<<endl<<"Ten phim: ";
        getline(cin,tenPhim);
        for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
            if(tenPhim.compare(k->data.getTenphim())!=0){
                dem++;
                if(dem== Lphim.size){
                    phim.setTenphim(tenPhim);
                }
            }else if(tenPhim.compare(k->data.getTenphim())==0){
                cout<<"Ten phim da ton tai. Vui long nhap lai !!!";
                break;
            }
        }
    }while(dem!=Lphim.size);

    fflush(stdin);
    cout<<"Nhap the loai phim: ";
    getline(cin, theLoai);
    phim.setTheloai(theLoai);
    cout<<"Nhap gia ve: ";
    cin>>giaVe;
    phim.setGiave(giaVe);
    cout<<"Nhap thoi luong phim: ";
    cin>>thoiLuongPhim;
    phim.setThoiluongphim(thoiLuongPhim);
        // Nhap ngay khoi chieu
    cout<<"Nhap ngay khoi chieu "<<endl;
    cout<<"Nhap ngay: ";
    cin>>ngayKhoiChieu;
    phim.setNgaykhoichieu_ngay(ngayKhoiChieu);
    cout<<"Nhap thang: ";
    cin>>ngayKhoiChieu;
    phim.setNgaykhoichieu_thang(ngayKhoiChieu);
    cout<<"Nhap nam: ";
    cin>>ngayKhoiChieu;
    phim.setNgaykhoichieu_nam(ngayKhoiChieu);

    fflush(stdin);
    cout<<"Ten nha san xuat: ";
    getline(cin, tenNhaSx);
    phim.setTenNhaSX(tenNhaSx);
    fflush(stdin);
    cout<<"Ten quoc gia: ";
    getline(cin, tenQuocGia);
    phim.setQuocGia(tenQuocGia);

    Lphim.addLast(phim);

}

void XoaPhim(List_phim &Lphim){
    string phimXoa;
    Node_phim *p;
    int dem=0;

    fflush(stdin);
    cout<<"Nhap ma phim muon xoa: ";
    getline(cin, phimXoa);
    
    for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
        if(phimXoa.compare(k->data.getMaphim())!=0){
            dem++;
            if(dem == Lphim.size){
                cout<<"Khong tim thay phim muon xoa !!";
                getch();
            }
        }else if(phimXoa.compare(k->data.getMaphim())==0){
            Lphim.remove(k);
            cout<<"Xoa thanh cong phim ma so "<<phimXoa;
            cout<<endl<<"-------------------------"<<endl;
            for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
                k->data.XuatthongtinPhim();
            }
            break;
        }
    }
}

void SuaThongTinPhim(List_phim &Lphim){
    string maPhim;
    int luaChon;
    string bienSuaChuoi;
    int bienSuaSo;
    int dem=0;

    XuatThongTinPhim(Lphim);
    do{
    fflush(stdin);
    cout<<endl<<"Nhap ma phim muon sua: ";
    getline(cin, maPhim);
    cout<<"*Thong tin muon sua:";
    cout<<endl<<"1. Ma phim";
    cout<<endl<<"2. Ten phim";
    cout<<endl<<"3. The loai";
    cout<<endl<<"4. Ngay khoi chieu";
    cout<<endl<<"5. Gia ve";
    cout<<endl<<"6. Thoi luong phim";
    cout<<endl<<"7. Ten nha san xuat";
    cout<<endl<<"8. Ten quoc gia";
    cout<<endl<<"Lua chon: ";
    cin>>luaChon;

    for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
        if(maPhim.compare(k->data.getMaphim())==0){
            switch(luaChon){
                case 1:
                    fflush(stdin);
                    cout<<"Nhap ma phim moi: ";
                    getline(cin, bienSuaChuoi);
                    k->data.setMaphim(bienSuaChuoi);
                    break;
                case 2:
                    fflush(stdin);
                    cout<<"Nhap ten phim moi: ";
                    getline(cin, bienSuaChuoi);
                    k->data.setTenphim(bienSuaChuoi);
                    break;
                case 3:
                    fflush(stdin);
                    cout<<"Nhap the loai phim moi: ";
                    getline(cin, bienSuaChuoi);
                    k->data.setTheloai(bienSuaChuoi);
                    break;
                case 4:
                    fflush(stdin);
                    cout<<"Nhap ngay khoi chieu moi";
                    cout<<endl<<"Ngay: ";
                    cin>>bienSuaSo;
                    k->data.setNgaykhoichieu_ngay(bienSuaSo);
                    cout<<endl<<"Thang: ";
                    cin>>bienSuaSo;
                    k->data.setNgaykhoichieu_thang(bienSuaSo);
                    cout<<endl<<"Nam: ";
                    cin>>bienSuaSo;
                    k->data.setNgaykhoichieu_nam(bienSuaSo);
                    break;
                case 5:
                    fflush(stdin);
                    cout<<"Nhap gia ve moi: ";
                    cin>>bienSuaSo;
                    k->data.setGiave(bienSuaSo);
                    break;
                case 6:
                    cout<<"Nhap thoi luong phim moi: ";
                    cin>>bienSuaSo;
                    k->data.setThoiluongphim(bienSuaSo);
                    break;
                case 7:
                    fflush(stdin);
                    cout<<"Nhap ten nha san xuat moi: ";
                    getline(cin, bienSuaChuoi);
                    k->data.setTenNhaSX(bienSuaChuoi);
                    break;
                case 8:
                    fflush(stdin);
                    cout<<"Nhap ten quoc gia moi: ";
                    getline(cin, bienSuaChuoi);
                    k->data.setQuocGia(bienSuaChuoi);
                    break;
            }
            cout<<endl<<"-------- Thong tin da duoc chinh sua --------";
            k->data.XuatthongtinPhim();
            break;
        }else if(maPhim.compare(k->data.getMaphim())!=0){
            dem++;
            if(dem == Lphim.size){
                cout<<"Khong tim thay phim. Vui long nhap lai !!!";
            }
        }
    }
    }while(dem == Lphim.size);
}

void ResetRapPhim(Rap &rap){
    for(int i=1; i<51; i++){
        rap.setGhe(i);
    }
    cout<<"----------- Reset rap thanh cong -----------";
    rap.XuatDanhSachGhe();
    getch();
}

int tongTien = 0, tongVe = 0;
void Ghi_Xuat_Hoa_Don(ofstream& fileout, List_phim l, KhachHang kh, Phim phim){
    fileout  << endl << endl << "------------------- Hoa Don -------------------" << endl;
	fileout << "Ngay: " << kh.XuatDayHeThong_Date() <<"/"<<kh.XuatMonthHeThong_Date()<<"/"<<kh.XuatYearHeThong_Date();
	fileout << "\t\t\tThoi gian: " << kh.XuatGioHeThong() << ":" << kh.XuatPhutHeThong() << ":" << kh.XuatGiayHeThong() << endl;
    fileout << "Ten Phim: " << kh.getVe()->getTenphim();
    	for(Node_phim* k = l.head; k != NULL; k = k->next){
		if(kh.getVe()->getTenphim() == k->data.getTenphim()){
			fileout << endl << "The loai: " << k->data.getTheloai();
		}
	}
    fileout  << endl << "Ho Ten: " << kh.getTen() << endl;
    fileout << "So luong ve mua: " << kh.getSoLuongVe();
    for(Node_phim* k = l.head; k != NULL; k = k->next){
		if(kh.getVe()->getTenphim() == k->data.getTenphim()){
			fileout << "\t\t\tGia: " << k->data.getGiave() << " VND/1" << endl;
            fileout << "Tong tien: " << kh.getSoLuongVe()*k->data.getGiave() <<" VND";
            tongTien += kh.getSoLuongVe()*k->data.getGiave();
            tongVe += kh.getSoLuongVe();
            return;
		}
	}
}

void Ghi_File_Xuat_Hoa_Don(List_kh l, List_phim lphim, Phim phim){ 
	ofstream fileout;
	fileout.open("XuatHoaDon.TXT", ios::trunc);
    for (Node_kh* k = l.head; k != NULL; k = k->next){
		Ghi_Xuat_Hoa_Don(fileout, lphim, k->data, phim);
	}
	fileout.close();
}

void Thong_Ke_Doanh_Thu(){
    cout << endl << "------------ Doanh thu ------------" << endl;
    cout << "Tong so ve ban duoc: " << tongVe << " ve" << endl;
    cout << "Tong tien: " << tongTien << " VND" << endl;
}

void Menu(List_phim &Lphim, Phim phim, List_kh &Lkh, KhachHang kh, Rap &rap1, Rap &rap2){
	int luaChon;
	while (1) {
        system("cls");

		cout << endl << "\t\t\t\t=============== Menu ================" << endl;
		cout << "\t\t\t\t\t1. Mua ve" << endl;  // Huy
		cout << "\t\t\t\t\t2. Xem thong tin phim" << endl;  // Thỏa
		cout << "\t\t\t\t\t3. Xem lich chieu phim" << endl;  // Thỏa
		cout << "\t\t\t\t\t4. Xuat hoa don" << endl;   // Luan
		cout << "\t\t\t\t\t5. Kiem tra thong tin khach" << endl;  // Luân
		cout << "\t\t\t\t\t6. Thong ke doanh thu" << endl;  // Luân
		cout << "\t\t\t\t\t7. Them phim moi" << endl;  // Huy
		cout << "\t\t\t\t\t8. Sua thong tin phim" << endl;  // Huy
		cout << "\t\t\t\t\t9. Xoa phim" << endl;  // Huy
		cout << "\t\t\t\t\t10. Reset rap phim" << endl;  // Huy


		do {
			cout << endl << "\t\t\t\t\tNhap lua chon: ";
			cin >> luaChon;
			if (luaChon < 1 || luaChon>10) {
				cout << "Lua chon khong hop le!" << endl;
				system("pause");
			}
		} while (luaChon < 1 || luaChon>10);

		switch (luaChon) 
        {
		case 1:
            system("cls");
            MuaVe(kh, Lkh, Lphim, phim, rap1, rap2);
            Ghi_File_Xuat_Hoa_Don(Lkh,Lphim, phim);
            cout<<endl;
			system("pause");
			break;

		case 2:
            system("cls");
			cout << "Xem thong tin phim";
            cout<<endl;
            XuatThongTinPhim(Lphim);
			system("pause");
			break;

		case 3:
            system("cls");
			cout << "Xem lich chieu phim";
            cout<<endl;
			system("pause");
			break;

		case 4:
            system("cls");
			Ghi_File_Xuat_Hoa_Don(Lkh, Lphim, phim);
            cout<<endl;
			system("pause");
			break;

		case 5:
            system("cls");
			cout << "Kiem tra thong tin khach";
            XuatThongTinKhachHang(Lkh);
            cout<<endl;
			system("pause");
			break;

		case 6:
            system("cls");
			Thong_Ke_Doanh_Thu();
            cout<<endl;
			system("pause");
			break;

		case 7:
            system("cls");
            int slphimmoi;
			cout << "So luong phim muon them: ";
            cin>>slphimmoi;
            for(int i = 0; i<slphimmoi; i++){
                ThemPhimMoi(phim, Lphim);
            }
            cout<<endl;
			system("pause");
			break;

        case 8:
            system("cls");
            SuaThongTinPhim(Lphim);
			system("pause");
            break;

        case 9:
            system("cls");
            int slphimxoa;

            XuatThongTinPhim(Lphim);            
            cout<<"Nhap so luong phim muon xoa: ";
            cin>>slphimxoa;

            for(int i=0; i<slphimxoa; i++){
                XoaPhim(Lphim);
            }
            cout<<endl;
            system("pause");
            break;
        
        case 10: 
            int soRaprs;
            cout<<"Rset rap phim";

            do{
            cout<<endl<<"Nhap rap muon reset: ";
            cin>>soRaprs;
                if(soRaprs==1){
                    ResetRapPhim(rap1);
                }else if(soRaprs==2){
                    ResetRapPhim(rap2);
                }else{
                    cout<<"So rap khong phu hop! Vui long nhap lai";
                }
            }while(soRaprs<1 || soRaprs>2);

            break;
        }
	}
}

int main(){
    system("cls");
    List_kh Lkh;
    List_phim Lphim;
    List_nv Lnv;

    Node_kh Nkh;
    Node_phim Nphim;
    Node_nv Nnv;

    KhachHang kh;
    NhanVien nv;
    Phim phim;

    Rap rap1, rap2;

    DanhSachPhim(Lphim, phim);
    Menu(Lphim, phim, Lkh, kh, rap1, rap2);
}
