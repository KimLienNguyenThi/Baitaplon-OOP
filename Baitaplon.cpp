#include<iostream>
#include<string>
#include<time.h>

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
    cout << "Gia ve: " << giaVe << endl;
    cout << "Thoi luong phim: " << thoiLuongPhim<<"p"<< endl;
    NhaSanXuat ::XuatThongTinNhaSX ();
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
    ThoiGian thoiGianHeThong_time;
    Date thoiGianHeThong_date;

        public:
    int *gheChon;
    void NhapThongTinKhachHang();
    void Xuatthongtinkhachhang();
    void ThoiGianHeThong();
    Ve* getVe();
    int getSoLuongVe();
    int getGheChon();
    void setGheChon();
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
    for(int i=0; i<soLuongVe; i++){
        cout<<endl<<"Ghe chon: "<<gheChon[i];
    }
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
    phim.setMaphim("01");
    phim.setGiave(45000.0);
    phim.setTheloai("Kinh di");
    phim.setThoiluongphim(160);
    phim.setNgaykhoichieu_ngay(20);
    phim.setNgaykhoichieu_thang(10);
    phim.setNgaykhoichieu_nam(2022);
    phim.setQuocGia("Viet Nam");
    phim.setTenNhaSX("Sky to moive");
    cout<<"Thong tin phim: ";
    phim.XuatthongtinPhim();
    Lphim.addLast(phim);

    phim.setTenphim("Bong dung trung so");
    phim.setMaphim("02");
    phim.setGiave(45000.0);
    phim.setTheloai("Tam ly, hai huoc");
    phim.setThoiluongphim(120);
    phim.setNgaykhoichieu_ngay(25);
    phim.setNgaykhoichieu_thang(10);
    phim.setNgaykhoichieu_nam(2022);
    phim.setQuocGia("Han Quoc");
    phim.setTenNhaSX("Young Gang Wihoo");
    cout<<"Thong tin phim: ";
    phim.XuatthongtinPhim();
    Lphim.addLast(phim);

    phim.setTenphim("Nu vuong huyen thoai");
    phim.setMaphim("03");
    phim.setGiave(45000.0);
    phim.setTheloai("Hanh dong");
    phim.setThoiluongphim(140);
    phim.setNgaykhoichieu_ngay(1);
    phim.setNgaykhoichieu_thang(11);
    phim.setNgaykhoichieu_nam(2022);
    phim.setQuocGia("Viet Nam");
    phim.setTenNhaSX("Holleyworld");
    cout<<"Thong tin phim: ";
    phim.XuatthongtinPhim();
    Lphim.addLast(phim);
    
}

                // CHUC NANG
void XuatThongTinPhim (List_phim Lphim){
    for (Node_phim * k = Lphim.head; k != NULL; k = k->next){
        cout << "Ten nha san xuat: " << k->data.getTenNhaSX () << endl;
        cout << " Quoc gia: " << k->data.getQuocGia () << endl;
        cout << "Ma phim: " << k->data.getMaphim() << endl;
        cout << "Ten phim: " << k->data.getTenphim () << endl;
        cout << "The loai: " << k->data.getTheloai() << endl;
        cout << "Thoi luong phim: " << k->data.getThoiluongphim() << endl;
        cout << "Ngay khoi chieu: " << k->data.getNgaykhoichieu().getDay() << k->data.getNgaykhoichieu().getMonth() << k->data.getNgaykhoichieu().getYear() << endl;
        cout << "Gia ve: " << k->data.getGiave () << endl;
         }
}
void MuaVe(KhachHang kh, List_kh &Lkh, List_phim &Lphim, Phim phim){

    DanhSachPhim(Lphim, phim);
    cout<<"Nhap thong tin khach hang "<<endl;
    kh.NhapThongTinKhachHang();
    kh.getVe()->NhapThongTinPhim();

    kh.gheChon = new int[kh.getSoLuongVe()];
    for(int i = 0; i<kh.getSoLuongVe(); i++){
    cout<<"Quy khach chon ghe so: ";
    cin>>kh.gheChon[i];
    }
    for(int i=0; i<kh.getSoLuongVe(); i++){
    kh.getVe()->getRap().chonGhe(kh.gheChon[i]);
    }
    kh.ThoiGianHeThong();
    Lkh.addLast_kh(kh);
    kh.Xuatthongtinkhachhang();

}

void ThemPhimMoi(Phim phim, List_phim &Lphim){
        // Khai bao value cua ham
    string maPhim;
    string tenPhim;
    string theLoai;
    int ngayKhoiChieu;
    float giaVe;
    int thoiLuongPhim;
    string tenNhaSx;
    string tenQuocGia;

    cout<<endl<<"------- Nhap phim moi ----------";
    fflush(stdin);
    cout<<endl<<"Ma phim: ";
    getline(cin,maPhim);
    phim.setMaphim(maPhim);
    fflush(stdin);
    cout<<"Ten phim: ";
    getline(cin, tenPhim);
    phim.setTenphim(tenPhim);
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

void XuatThongTinPhim(List_phim Lphim){
    cout<<endl<<"------------- Thong tin phim -------------"<<endl;
    for(Node_phim k = Lphim.head; k!=NULL; k=k.next){
        k.data.XuatthongtinPhim();
    }
}

void XoaPhim(List_phim &Lphim){
    string phimXoa;
    Node_phim *p;
    int dem=0;

    fflush(stdin);
    cout<<"Nhap ten phim muon xoa: ";
    getline(cin, phimXoa);
    
    for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
        if(phimXoa.compare(k->data.getTenphim())!=0){
            dem++;
            if(dem == Lphim.size){
                cout<<"Khong tim thay phim muon xoa";
            }
        }else if(phimXoa.compare(k->data.getTenphim())==0){
            Lphim.remove(k);
            cout<<"Xoa thanh cong phim "<<phimXoa;
            cout<<endl<<"-------------"<<endl;
            for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
                cout<<Lphim.size;
                k->data.XuatthongtinPhim();
            }
            break;
        }
    }
}

void Menu(List_phim &Lphim, Phim phim, List_kh &Lkh, KhachHang kh){
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
		cout << "\t\t\t\t\t7. Them phim moi" << endl;
		cout << "\t\t\t\t\t8. Xoa phim" << endl;  // Huy

		do {
			cout << endl << "\t\t\t\t\tNhap lua chon: ";
			cin >> luaChon;
			if (luaChon < 1 || luaChon>8) {
				cout << "Lua chon khong hop le!" << endl;
				system("pause");
			}
		} while (luaChon < 1 || luaChon>8);

		switch (luaChon) 
        {
		case 1:
            for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
                k->data.XuatthongtinPhim();
            }
            MuaVe(kh, Lkh, Lphim, phim);
            cout<<endl;
			system("pause");
			break;
		case 2:
			cout << "Xem thong tin phim";
            cout<<endl;
			system("pause");
			break;
		case 3:
			cout << "Xem lich chieu phim";
            cout<<endl;
			system("pause");
			break;
		case 4:
			cout << "Xuat hoa don";
            cout<<endl;
			system("pause");
			break;
		case 5:
			cout << "Kiem tra thong tin khach";
            cout<<endl;
			system("pause");
			break;
		case 6:
			cout << "Thong ke doanh thu";
            cout<<endl;
			system("pause");
			break;
		case 7:
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
            int slphimxoa;

            for(Node_phim *k = Lphim.head; k!=NULL; k = k->next){
                k->data.XuatthongtinPhim();
            }            
            cout<<"Nhap so luong phim muon xoa: ";
            cin>>slphimxoa;

            for(int i=0; i<slphimxoa; i++){
                XoaPhim(Lphim);
            }
            cout<<endl;
            system("pause");

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

    DanhSachPhim(Lphim, phim);
    Menu(Lphim, phim, Lkh, kh);


}
