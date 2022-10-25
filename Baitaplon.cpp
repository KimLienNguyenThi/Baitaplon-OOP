#include<iostream>
#include<string>

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

int ThoiGian::getGiay() {
	return giay;
}
int ThoiGian::getPhut() {
	return phut;
}
int ThoiGian::getGio() {
	return gio;
}

void ThoiGian::setGio(int gio) {
	this->gio = gio;
}

void ThoiGian::setPhut(int phut) {
	this->phut = phut;
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

//--------------- Nhà Sản Xuất ---------------
class NhaSanXuat {
protected:
	string tenNhaSX;
	string quocGia;
public:
	NhaSanXuat();
	NhaSanXuat(string tenNhaSX, string quocGia);
};

NhaSanXuat::NhaSanXuat() {
	tenNhaSX = quocGia = "";
}

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
	cin.ignore();
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
};

int KhachHang::getSoLuongVe() {
	return soLuongVe;
}
void KhachHang::setSoLuongVe(int soLuongVe) {
	this->soLuongVe = soLuongVe;
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

// ==============================DANH SACH LIEN KET DON==============================

//--------------- Khách hàng ---------------
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


