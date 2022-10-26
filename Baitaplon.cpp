#include<iostream>
#include<string>
#include<time.h>

using namespace std;

//==============================CÀI ĐẶT CÁC CLASS==============================

//--------------- Date ---------------
class Date {
protected:
	int day;
	int month;
	int year;
public:
	Date() {
		day = month = year = 0;
	}

<<<<<<< HEAD
	Date(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void setDate(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}

	int getDay() {
		return day;
	}

	void setDay(int day) {
		this->day = day;
	}

	int getMonth() {
		return month;
	}

	void setMonth(int month) {
		this->month = month;
	}

	int getYear() {
		return year;
	}

	void setYear(int year) {
		this->year = year;
	}

	void display() {
		string day = to_string(this->day);
		string month = to_string(this->month);
		string year = to_string(this->year);
		if (day.length() == 1) {
			day = "0" + day;
		}
		if (month.length() == 1) {
			month = "0" + month;
		}
		cout << day + "/" + month + "/" + year << endl;
	}

	void Nhap_date() {
		cin >> day >> month >> year;
	}
	void Xuat_date() {
		cout << day << "/" << month << "/" << year << endl;
	}
};

//--------------- Thời Gian ---------------
class ThoiGian {
protected:
	int gio;
	int phut;
	int giay;
public:
	ThoiGian();
	ThoiGian(int gio, int phut, int giay);
	~ThoiGian();

	int getGiay();
	int getPhut();
	int getGio();
=======
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
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09

	void setGio(int gio);
	void setPhut(int phut);
	void setGiay(int giay);
	void NhapThoiGian();
	void XuatThoiGian();
};

ThoiGian::ThoiGian() {
	gio = phut = giay = 0;
}

ThoiGian::ThoiGian(int gio, int phut, int giay) {
	this->gio = gio;
	this->phut = phut;
	this->giay = giay;
}

ThoiGian::~ThoiGian() {
	gio = phut = giay = 0;
}

<<<<<<< HEAD
int ThoiGian::getGiay() {
	return giay;
}
int ThoiGian::getPhut() {
	return phut;
}
int ThoiGian::getGio() {
	return gio;
=======
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
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
}

void ThoiGian::setGio(int gio) {
	this->gio = gio;
}
<<<<<<< HEAD

void ThoiGian::setPhut(int phut) {
	this->phut = phut;
=======
int ThoiGian::setGiay(int giay){
    do{
        cout<<endl<<"Nhap giay";
        cin>>giay;
    if(giay<0 || giay>60){
        cout<<endl<<"\nDinh dang giay sai vui long nhap lai";
    }
    }while(giay<0 || giay>60);
    return giay;
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
}

void ThoiGian::setGiay(int giay) {
	this->giay = giay;
}

void ThoiGian::NhapThoiGian() {
	cin >> gio >> phut >> giay;
}

void ThoiGian::XuatThoiGian() {
	cout << "Thoi gian: " << gio << ":" << phut << ":" << giay;
}

<<<<<<< HEAD
//--------------- Nhà Sản Xuất ---------------
class NhaSanXuat {
protected:
	string tenNhaSX;
	string quocGia;
public:
	NhaSanXuat();
	NhaSanXuat(string tenNhaSX, string quocGia);
=======
        public:
    NhaSanXuat();
    ~NhaSanXuat();
    NhaSanXuat(string tenNhaSX, string quocGia);
    string getTenNhaSX ();
    void setTenNhaSX(string tenNhaSX);
    string getQuocGia();
    void setQuocGia(string tenNhaSX);
    void XuatThongTinNhaSX();
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
};

NhaSanXuat::NhaSanXuat() {
	tenNhaSX = quocGia = "";
}

<<<<<<< HEAD
NhaSanXuat::NhaSanXuat(string tenNhaSX, string quocGia) {
	this->tenNhaSX = tenNhaSX;
	this->quocGia = quocGia;
}

//--------------- Phim ---------------
class Phim :public NhaSanXuat, public Date, public ThoiGian {
protected:
	string maPhim;
	string tenPhim;
	string theLoai;
	Date ngayKhoiChieu;
	int giaVe;
	int thoiLuongPhim;
public:
	Phim();
	~Phim();
	string getMaphim();
	void setMaphim(string maPhim);

	string getTenphim();
	void setTenphim(string tenPhim);

	string getTheloai();
	void setTheloai(string theLoai);

	Date getNgaykhoichieu();
	void setNgaykhoichieu(Date ngayKhoiChieu);

	int getGiave();
	void setGiave(int giaVe);

	int getThoiluongphim();
	void setThoiluongphim(int thoiLuongPhim);
	void NhapthongtinPhim(Phim&);
=======
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
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
};

Phim::Phim() {
	maPhim = tenPhim = theLoai = "";
	thoiLuongPhim = 0;
	giaVe = 0;
}

Phim::~Phim() {
	maPhim = tenPhim = theLoai = "";
	thoiLuongPhim = 0;
	giaVe = 0;
}
string Phim::getMaphim() {
	return maPhim;
}
void Phim::setMaphim(string maPhim) {
	this->maPhim = maPhim;
}
string Phim::getTenphim() {
	return tenPhim;
}
void Phim::setTenphim(string tenPhim) {
	this->tenPhim = tenPhim;
}
string Phim::getTheloai() {
	return theLoai;
}
void Phim::setTheloai(string theLoai) {
	this->theLoai = theLoai;
}
Date Phim::getNgaykhoichieu() {
	return ngayKhoiChieu;
}
void Phim::setNgaykhoichieu(Date ngayKhoiChieu) {
	this->ngayKhoiChieu = ngayKhoiChieu;
}
int Phim::getGiave() {
	return giaVe;
}
void Phim::setGiave(int giaVe) {
	this->giaVe = giaVe;
}
int Phim::getThoiluongphim() {
	return thoiLuongPhim;
}
void Phim::setThoiluongphim(int thoiLuongPhim) {
	this->thoiLuongPhim = thoiLuongPhim;
}

<<<<<<< HEAD
void Phim::NhapthongtinPhim(Phim& ph) {
	cout << "Nhap ma phim: ";
	cin.ignore();
	getline(cin, this->maPhim);
	cout << "Nhap ten phim: ";
	getline(cin, this->tenPhim);
	cout << "The loai: ";
	getline(cin, this->theLoai);
	cout << "Nhap ngay khoi chieu: ";
	ph.ngayKhoiChieu.Nhap_date();
	cout << "Nhap gia ve: ";
	cin >> this->giaVe;
	cout << "Nhap thoi luong phim(phut): ";
	cin>>this->thoiLuongPhim;
=======
void Phim::XuatthongtinPhim(){
    NhaSanXuat ::XuatThongTinNhaSX ();
    cout<<endl;
    cout << "Ma phim: " << maPhim << endl;
    cout << "Ten phim: " << tenPhim << endl;
    cout << "The loai: " << theLoai << endl;
    cout << "Ngay khoi chieu: " << ngayKhoiChieu.getDay()<<"/" << ngayKhoiChieu.getMonth()<<"/" <<  ngayKhoiChieu.getYear() << endl;
    cout << "Gia ve: " << giaVe << endl;
    cout << "Thoi luong phim: " << thoiLuongPhim<<"p"<< endl;
    cout<<endl;
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
}

//--------------- Rạp ---------------
class Rap {
private:
	string tenRap;
	int soGhe;
public:
	Rap();
	~Rap();
};

Rap::Rap() {
	tenRap = "";
	soGhe = 0;
}

Rap::~Rap() {
	tenRap = "";
	soGhe = 0;
}

//--------------- Giờ Chiếu ---------------
class GioChieu :public Date {
private:
	ThoiGian tgBatDau;
	ThoiGian tgKetThuc;

public:
	GioChieu();
	~GioChieu();
};

GioChieu::GioChieu() {
}

GioChieu::~GioChieu() {
}

//--------------- Vé ---------------
class Ve :public Phim {
private:
	GioChieu gioChieu;
	Rap rap;
public:
	Ve();
	~Ve();
	void NhapThongTinPhim();
	void XuatThongTinPhim();
};

Ve::Ve() {
}

Ve::~Ve() {
}

void Ve::NhapThongTinPhim() {
	fflush(stdin);
	cout << "Nhap ten phim: ";
	getline(cin, this->tenPhim);
}

void Ve::XuatThongTinPhim() {
	cout << tenPhim;
}

//--------------- Con người ---------------
class ConNguoi {
protected:
	string ten;
	string gioiTinh;
	string sdt;
public:
	ConNguoi();
	~ConNguoi();

	void NhapThongTinCaNhan();
	void XuatThongTinCaNhan();
};

ConNguoi::ConNguoi() {
	ten = sdt = gioiTinh = "";
}

ConNguoi::~ConNguoi() {
	ten = sdt = gioiTinh = "";
}

void ConNguoi::NhapThongTinCaNhan() {
	cout << "Nhap ten: ";
	cin.ignore() ;
	getline(cin, this->ten);
	cout << "Nhap gioi tinh: ";
	getline(cin, this->gioiTinh);
	cout << "Nhap so dien thoai: ";
	getline(cin, this->sdt);
}

void ConNguoi::XuatThongTinCaNhan() {
	cout << "Ten: " << ten << endl;
	cout << "Gioi tinh: " << gioiTinh << endl;
	cout << "So dien thoai: " << sdt << endl;
}

<<<<<<< HEAD
//--------------- Khách Hàng ---------------
class KhachHang :public ConNguoi, public Date {
private:
	Ve* ve;
	ConNguoi conNguoi;
	Date ngaySinh;
	int soLuongVe;
public:
	int getSoLuongVe();
	void setSoLuongVe(int soLuongVe);

	void NhapThongTinKhachHang(KhachHang& kh);
	void Xuatthongtinkhachhang(KhachHang kh);
	Ve* getVe();
	//void MuaVe(ve);
=======
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
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
};

int KhachHang::getSoLuongVe() {
	return soLuongVe;
}
<<<<<<< HEAD
void KhachHang::setSoLuongVe(int soLuongVe) {
	this->soLuongVe = soLuongVe;
=======
    
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
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
}

void KhachHang::NhapThongTinKhachHang(KhachHang& kh) {
	kh.conNguoi.NhapThongTinCaNhan();
	cout << "Nhap ngay sinh: ";
	kh.ngaySinh.Nhap_date();
	cout << "Nhap so luong ve: ";
	cin >> soLuongVe;
	ve = new Ve[soLuongVe];
}

void KhachHang::Xuatthongtinkhachhang(KhachHang kh) {
	kh.conNguoi.XuatThongTinCaNhan();
	cout << "Ngay sinh: ";
	kh.ngaySinh.Xuat_date();
	//cout << "Phim chon: ";
	//this->getVe()->XuatThongTinPhim();
}

Ve* KhachHang::getVe() {
	return ve;
}

//--------------- Nhân viên ---------------
class NhanVien :public ConNguoi, public Date {
private:
	string chucVu;
};

<<<<<<< HEAD
// ==============================DANH SACH LIEN KET DON==============================

//--------------- Khách hàng ---------------
=======
// class NhanVien:public ConNguoi{
//         private:
//     string chucVu;
// };

        // DANH SACH LIEN KET DON
// Khach hang
>>>>>>> e1969eee06380e0e19fee6e6d90a1b29c4c78a09
struct Node_kh{
	KhachHang data;
	struct Node_kh* pNext;
};

struct List_kh{
	Node_kh* head;
	Node_kh* tail;
};

void KhoiTaoDanhSach_kh(List_kh& l)
{
	l.head = NULL;
	l.tail = NULL;
}

Node_kh* KhoiTaoNode_kh(KhachHang x) {
	Node_kh* p = new Node_kh;
	if (p == NULL)
	{
		cout << "\nCap phat that bai !";
		return NULL;
	}
	p->data = x;
	p->pNext = NULL;
	return p;
}

void ThemKhachHang(List_kh& l, Node_kh* p){
	if (l.head == NULL) {
		l.head = l.tail = p;
	}
	else {
		l.tail->pNext = p;
		l.tail = p;
	}
}

void XoaDau_kh(List_kh& l) {
	Node_kh* p = new Node_kh;
	p = l.head;
	l.head = l.head->pNext;
	p->pNext = NULL;
	delete p;
}

void XoaCuoi_kh(List_kh& l) {
	for (Node_kh* k = l.head; k != NULL; k = k->pNext) {
		if (k->pNext == l.tail) {
			delete l.tail;
			k->pNext = NULL;
			l.tail = k;
		}
	}
}

void XuatDanhSachKhachHang(List_kh l, KhachHang kh) {
	for (Node_kh* k = l.head; k != NULL; k = k->pNext) {
		kh.Xuatthongtinkhachhang(k->data);
		cout << "So luong ve: " << k->data.getSoLuongVe() << endl;
	}
}

//--------------- Phim ---------------
struct Node_phim
{
	Phim data;
	struct Node_phim* pNext;
};

struct List_phim
{
	Node_phim* head;
	Node_phim* tail;
};

void KhoiTaoDanhSach_phim(List_phim& l)
{
	l.head = NULL;
	l.tail = NULL;
}

Node_phim* KhoiTaoNode_phim(Phim x)
{
	Node_phim* p = new Node_phim;
	if (p == NULL)
	{
		cout << "\nCap phat that bai !";
		return NULL;
	}
	p->data = x;
	p->pNext = NULL;
	return p;
}

void ThemPhim(List_phim& l, Node_phim* p)
{
	if (l.head == NULL) {
		l.head = l.tail = p;
	}
	else {
		l.tail->pNext = p;
		l.tail = p;
	}
}

void XoaDau_phim(List_phim& l) {
	Node_phim* p = new Node_phim;
	p = l.head;
	l.head = l.head->pNext;
	p->pNext = NULL;
	delete p;
}

void XoaCuoi_phim(List_phim& l) {
	for (Node_phim* k = l.head; k != NULL; k = k->pNext) {
		if (k->pNext == l.tail) {
			delete l.tail;
			k->pNext = NULL;
			l.tail = k;
		}
	}
}

void XuatDanhSachPhim(List_phim l) {
	for (Node_phim* k = l.head; k != NULL; k = k->pNext) {
		cout << "Ma phim: " << k->data.getMaphim() << endl;
		cout << "Ten phim: " << k->data.getTenphim() << endl;
		cout << "The loai: " << k->data.getTheloai() << endl;
		cout << "Ngay khoi chieu: " << k->data.getNgaykhoichieu().getDay() << "/" << k->data.getNgaykhoichieu().getMonth() << "/" << k->data.getNgaykhoichieu().getYear() << endl;
		cout << "Gia ve: " << k->data.getGiave() << "VND" << endl;
		cout << "Thoi luong phim: " << k->data.getThoiluongphim() << "Phut" << endl;
	}
}

//--------------- Nhân viên ---------------
//struct Node_nv {
//	NhanVien data;
//	Node_nv* next;
//};
//
//struct List_nv {
//	Node_nv* head;
//	Node_nv* tail;
//	long size;
//
//	List_nv() {
//		head = NULL;
//		tail = NULL;
//		size = 0;
//	}
//
//Node_nv* CreateNode(NhanVien v);
//void addLast(NhanVien v);
//};
//
//Node_nv* List_nv::CreateNode(NhanVien v) {
//Node_nv* q = new Node_nv;
//q->data = v;
//q->next = NULL;
//return q;
//}
//
//void List_nv::addLast(NhanVien v) {
//Node_nv* q = CreateNode(v);
//if (size == 0) {
//head = tail = q;
//}
//else {
//tail->next = q;
//tail = q;
//}
//size++;
//}

//====DANH SACH PHIM CO SAN====
void DanhSachPhim(List_phim Lphim, Phim phim, Node_phim* Nphim) {
    phim.setTenphim("Co gai den tu hom qua");
    phim.setMaphim("123");
    phim.setGiave(45.000);
    // phim.ngayKhoiChieu.setDay(20);
    // phim.ngayKhoiChieu.setMonth(10);
    // phim.ngayKhoiChieu.setYear(2022);
    phim.setTheloai("Kinh di");
    phim.setThoiluongphim(160);
    cout << "Thong tin phim: ";
    XuatDanhSachPhim(Lphim);
    ThemPhim(Lphim, Nphim);
}

//==============================CHỨC NĂNG==============================

//--------------- Menu ---------------
void Menu(List_kh Lkh, List_phim Lphim, /*List_nv Lnv ,*/ Node_kh* Nkh, Node_phim* Nphim, /*Node_nv Nnv,*/ KhachHang kh, NhanVien nv, Phim phim) {

	int luaChon;
	while (1) {
		system("cls");
		cout << endl << "\t\t\t\t=============== Menu ================" << endl;
		cout << "\t\t\t\t\t1. Mua ve" << endl;
		cout << "\t\t\t\t\t2. Xem thong tin phim" << endl;
		cout << "\t\t\t\t\t3. Xem lich chieu phim" << endl;
		cout << "\t\t\t\t\t4. Xuat hoa don" << endl;
		cout << "\t\t\t\t\t5. Them phim" << endl;
		cout << "\t\t\t\t\t6. Xuat danh sach phim" << endl;
		cout << "\t\t\t\t\t7. Them khach hang" << endl;
		cout << "\t\t\t\t\t8. Xuat danh sach khach hang" << endl;

		do {
			cout << endl << "\t\t\t\t\tNhap lua chon: ";
			cin >> luaChon;
			if (luaChon < 1 || luaChon>8) {
				cout << "Lua chon khong hop le!" << endl;
				system("pause");
			}
		} while (luaChon < 0 || luaChon>8);

		switch (luaChon) {
		case 1:
			cout << "Mua ve" << endl;

			system("pause");
			break;
		case 2:
			cout << "Xem thong tin phim";

			system("pause");
			break;
		case 3:
			cout << "Xem lich chieu phim";

			system("pause");
			break;
		case 4:
			cout << "Xuat hoa don";

			system("pause");
			break;
		case 5:
			cout << "Nhap thong tin khach hang: " << endl;
			phim.NhapthongtinPhim(phim);
			Nphim = KhoiTaoNode_phim(phim);
			ThemPhim(Lphim, Nphim);

			system("pause");
			break;
		case 6:
			//Xuat_Danh_Sach_Phim(Lphim, phim);
			XuatDanhSachPhim(Lphim);

			system("pause");
			break;
		case 7:
			cout << "Nhap thong tin khach hang: " << endl;
			kh.NhapThongTinKhachHang(kh);
			Nkh = KhoiTaoNode_kh(kh);
			ThemKhachHang(Lkh, Nkh);

			system("pause");
			break;
		case 8:
			XuatDanhSachKhachHang(Lkh, kh);

			system("pause");
			break;
		}
	}
}

//--------------- Mua vé ---------------
//void MuaVe(KhachHang kh, NhanVien nv, List_kh Lkh) {
//    cout << "Nhap thong tin khach hang " << endl;
//    kh.NhapThongTinKhachHang(kh);
//    Lkh.addLast_kh(kh);
//    kh.getVe()->NhapThongTinPhim();
//    kh.Xuatthongtinkhachhang(kh);
//}

//--------------- Mật khẩu ---------------
void MatKhau() {
	string matKhau;
	string pass = "xinchao";
	do {
		fflush(stdin);
		cout << "\nNhap mat khau dang nhap: ";
		getline(cin, matKhau);
		if (matKhau.compare(pass) != 0) {
			cout << "\nMat khau sai! Vui long nhap lai";
		}
	} while (matKhau.compare(pass) != 0);
}

//--------------- Main ---------------
int main() {
	system("cls");

	List_kh Lkh{};
	List_phim Lphim{};
	//List_nv Lnv;

	Node_kh* Nkh{};
	Node_phim* Nphim{};
	// Node_nv Nnv;

	KhachHang kh;
	NhanVien nv;
	Phim phim;

	//MatKhau();
	//DanhSachPhim(Lphim, phim, Nphim);
	//MuaVe(kh, nv, Lkh);

	Menu(Lkh, Lphim, /*Lnv,*/ Nkh, Nphim,/* Nnv,*/ kh, nv, phim);
}

                // CHUC NANG

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
    Lphim.addLast(phim);
}

void Menu(List_phim &Lphim, Phim phim, List_kh &Lkh, KhachHang kh) {

	int luaChon;
	while (1) {
		system("cls");
		cout << endl << "\t\t\t\t=============== Menu ================" << endl;
		cout << "\t\t\t\t\t1. Mua ve" << endl;  // Huy
		cout << "\t\t\t\t\t2. Xem thong tin phim" << endl;  // Thỏa
		cout << "\t\t\t\t\t3. Xem lich chieu phim" << endl;  // Thỏa
		cout << "\t\t\t\t\t4. Xuat hoa don" << endl;  
		cout << "\t\t\t\t\t5. Kiem tra thong tin khach" << endl;  // Luân
		cout << "\t\t\t\t\t6. Thong ke doanh thu" << endl;  // Luân
		cout << "\t\t\t\t\t7. Them phim moi" << endl;

		do {
			cout << endl << "\t\t\t\t\tNhap lua chon: ";
			cin >> luaChon;
			if (luaChon < 1 || luaChon>8) {
				cout << "Lua chon khong hop le!" << endl;
				system("pause");
			}
		} while (luaChon < 0 || luaChon>8);

		switch (luaChon) 
        {
		case 1:
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
			cout << "So luong phim muon them";
            cin>>slphimmoi;
            for(int i = 0; i<slphimmoi; i++){
                ThemPhimMoi(phim, Lphim);
            }
            cout<<endl;
			system("pause");
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

    Menu(Lphim, phim, Lkh, kh);


}
