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