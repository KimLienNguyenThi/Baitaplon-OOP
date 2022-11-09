#include "Store.h"
OleDbConnection^ Store::ConnectionAccess()
{
	String^ DBPath = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\Nam2ky1\\Baitaplon-OOP\\GiaoDienPhim\\PhimChieuRap\\QLPhim.accdb;Persist Security Info=False;";
	OleDbConnection^ conn = gcnew OleDbConnection(DBPath);
	conn->Open();
	return conn;
}
void Store::CloseAccess(OleDbConnection^ conn)
{
	if (conn != nullptr) {
		conn->Close();
	}
}
DataTable^ Store::Store::GetAllPhims(String^ timkiemTen)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	// tạo câu lệnh lấy dlieu tu database
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * FROM Phim ";

	if (timkiemTen != "") {
		query += " where Ten like '%" + timkiemTen->Trim() + "%'";
	}
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}

DataTable^ Store::Get1Phim(String^ maPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	// tạo câu lệnh lấy dlieu tu database
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * FROM Phim ";

	if (maPhim != "") {
		query += " where MaPhim = '" + maPhim->Trim() + "'";
	}
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}

DataTable^ Store::Store::GetPhimCoLichChieu()
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT DISTINCT Phim.MaPhim, Phim.Ten "
		+ "FROM Phim, LichPhim "
		+ "WHERE Phim.MaPhim = LichPhim.MaPhim AND LichPhim.NgayChieu >= #" + DateTime::Now.ToShortDateString() + "#";
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}

DataTable^ Store::LoadDanhSachGheDaDangKy(String^ idLich, String^ maRap)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * "
		+ "FROM DangKyVe "
		+ "WHERE IDLichPhim = '" + idLich + "'";
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}


DataTable^ Store::LoadDanhSachLichChieu(String^ maPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * FROM LichPhim WHERE MaPhim ='" + maPhim + "'";

	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}

DataTable^ Store::LoadDanhSachLichChieuTuongLai(String^ maPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT distinct Format (NgayChieu, 'yyyy/mm/dd')  FROM LichPhim WHERE NgayChieu  >= #" + DateTime::Now.ToShortDateString() + "# and MaPhim ='" + maPhim + "'";

	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}
DataTable^ Store::LoadDanhSachLichKhungGio(String^ maPhim, DateTime^ ngay)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * FROM LichPhim WHERE NgayChieu >  #" + ngay->ToShortDateString() + "# AND NgayChieu <  #" + ngay->AddDays(1).ToShortDateString() + "# AND MaPhim = '" + maPhim + "';";
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}
//DataTable^ Store::LoadTenPhimLichChieu(String^ maPhim)
//{
//	OleDbConnection^ conn = ConnectionAccess();
//	DataTable^ results = gcnew DataTable();
//	OleDbCommand^ cmd = conn->CreateCommand();
//	cmd->CommandType = CommandType::Text;
//	String^ query ="SELECT * FROM Phim, LichPhim
//		WHERE Phim.MaPhim = LichPhim.MaPhim and LichPhim.MaPhim = MaPhim = '" + maPhim + "'";
//	cmd->CommandText = query;
//	cmd->ExecuteNonQuery();
//	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
//
//	adapter->Fill(results);
//
//	CloseAccess(conn);
//	return results;
//}

//DataTable^ Store::LoadRap(String^ maPhim)
//{
//	OleDbConnection^ conn = ConnectionAccess();
//	DataTable^ results = gcnew DataTable();
//	OleDbCommand^ cmd = conn->CreateCommand();
//	cmd->CommandType = CommandType::Text;
//	String^ query = "SELECT * FROM RapPhim";
//
//
//	cmd->CommandText = query;
//	cmd->ExecuteNonQuery();
//	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
//
//	adapter->Fill(results);
//
//	CloseAccess(conn);
//	return results;
//}
DataTable^ Store::LoadListRapPhim(String^ maRap)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * FROM RapPhim ";
	if (maRap != "") {
		query += " where MaRap = '" + maRap + "';";
	}
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}

bool Store::CheckPhimTonTai(String^ maPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT * FROM Phim WHERE MaPhim ='" + maPhim + "'";
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);
	CloseAccess(conn);
	if (results->Rows->Count > 0)
	{
		return true;
	}
	return false;
}
bool Store::CheckLichPhimTontai(String^ id) {
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT * FROM LichPhim WHERE ID =" + id + "";
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);

	adapter->Fill(results);
	CloseAccess(conn);
	if (results->Rows->Count > 0)
	{
		return true;
	}
	return false;
}
bool Store::KiemTraLichChieuTonTai(DateTime batdau, DateTime ketthuc, String^ maRap) //, DateTime NgayChieu)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * FROM LichPhim WHERE((GioBatDau Between #" + batdau + "# AND #" + ketthuc + "#)"
		+ " OR (GioKetThuc Between #" + batdau + "# AND #" + ketthuc + "#) "
		+ " OR (GioBatDau > #" + batdau + "# AND GioKetThuc < #" + ketthuc + "#) "
		+ " OR (GioBatDau < #" + batdau + "# AND GioKetThuc > #" + ketthuc + "#)) "
		+ " AND RapPhim = '" + maRap->Trim() + "';";

		cmd->CommandText = query;
		cmd->ExecuteNonQuery();
		OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
		adapter->Fill(results);
	if (results->Rows->Count > 0)
	{
		CloseAccess(conn);
		return true;
	}
	CloseAccess(conn);
	return false;
}

bool Store::Xoa1Phim(String^ maPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "DELETE * FROM Phim WHERE MaPhim ='" + maPhim->Trim() + "';";


	////
	// ImageList1.Images.RemoveByKey("myPhoto")
	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}

bool Store::Them1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ dienvien, String^ quocgia, String^ theloai, String^ hinhanh)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "INSERT INTO Phim (Ten,ThoiLuong,NamSanXuat,QuocGia,TheLoai,HinhAnh,MaPhim, DienVien)"
		+ "VALUES ('" + ten + "', '" + thoiluong + "', '" + nam + "', '" + quocgia + "', '" + theloai + "', '" + hinhanh + "', '" + maPhim + "', '" + dienvien + "')";

	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}

bool Store::Sua1Phim(String^ maPhim, String^ ten, String^ nam, String^ thoiluong, String^ dienvien, String^ quocgia, String^ theloai, String^ hinhanh)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "UPDATE Phim SET " +
		"Ten = '" + ten + "'," +
		"ThoiLuong = '" + thoiluong + "'," +
		"NamSanXuat = '" + nam + "'," +
		"QuocGia = '" + quocgia + "'," +
		"TheLoai = '" + theloai + "'," +
		"DienVien = '" + dienvien + "'," +
		"HinhAnh = '" + hinhanh + "'"
		"WHERE MaPhim = '" + maPhim->Trim() + "'; ";
	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}

bool Store::ThucHienDangKy(String^ idLich, array<String^>^ arrGhe, String^ tenKH, String^ sdt, int tongTien, String^ rapPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;

	cmd->CommandText = "INSERT INTO " +
		" HoaDon(TenKhachHang, NgayMuaVe, SDT ,SoVe, TongTien,IDLichPhim)"
		+ "VALUES ('" + tenKH + "', '" + DateTime::Now + "',  '" + sdt + "', " + arrGhe->Length + ", " + tongTien + ", " + idLich + ");";
		
	int resutl = cmd->ExecuteNonQuery();
	if (resutl <= 0 ) {
		return false;
	}
	cmd->CommandText = " SELECT DISTINCT @@IDENTITY FROM HoaDon;";
	resutl = cmd->ExecuteNonQuery();
	DataTable^ results = gcnew DataTable();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
	adapter->Fill(results);
	DataRow^ dr = results->Rows[0];
	int idHoaDon = int::Parse( dr[0]->ToString());

	int giaVe = tongTien / arrGhe->Length;
	for each (String^ item in arrGhe)
	{
		cmd->CommandText = "INSERT INTO " +
			" DangKyVe(IDLichPhim, MaGhe ,IDHoaDon)"
			+ "VALUES ('" + idLich + "', '" + item + "', " + idHoaDon + ")";
		resutl = cmd->ExecuteNonQuery();

		cmd->CommandText = "INSERT INTO ChiTietHoaDon (IDHoaDon,MaGhe,GiaVe, RapPhim)"
			+ "VALUES (" + idHoaDon + ", '" + item + "', " + giaVe +" , '"+ rapPhim +"')";
		resutl = cmd->ExecuteNonQuery();
	}

	CloseAccess(conn);
	return 1;
}

bool Store::Them1LichPhim(String^ maPhim, String^ rapPhim, String^ giaVe, DateTime^ ngay, DateTime^ gioBatdau, DateTime^ gioKetThuc)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "INSERT INTO LichPhim (MaPhim,NgayChieu,RapPhim,GioBatDau,GioKetThuc,GiaVe)"
		+ "VALUES ('" + maPhim + "', '" + ngay + "', '" + rapPhim + "', '" + gioBatdau + "', '" + gioKetThuc + "', " + giaVe + ")";

	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}
DataTable^ Store::GetRapPhim(String^ rapPhim)
{
	return LoadListRapPhim(rapPhim);
	// // O: insert return statement here
}
DataTable^ Store::Get1LichChieu(String^ idLichChieu)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * FROM Phim, LichPhim "
		"WHERE Phim.MaPhim = LichPhim.MaPhim and LichPhim.ID = " + idLichChieu + "";
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}
DataTable^ Store::GetDanhSachHoaDon(String^ timKiem, DateTime^ tuNgay, DateTime^ denNgay)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT  HoaDon.ID, HoaDon.TenKhachHang,HoaDon.SDT,HoaDon.TongTien, HoaDon.SoVe, Phim.Ten, Phim.MaPhim, Phim.NamSanXuat"
		+ " , Phim.QuocGia, Phim.ThoiLuong "
		 +"FROM HoaDon, LichPhim, Phim "

		+"WHERE HoaDon.IDLichPhim = LichPhim.ID AND Phim.MaPhim = LichPhim.MaPhim";

	if (timKiem != "")
	{
		query += " AND (TenKhachHang like '%" + timKiem->Trim() + "%' OR Phim.Ten  like '%" + timKiem->Trim() + "%') ";
	}

	if (tuNgay != nullptr)
	{
		query += " AND NgayMuaVe >= #" + tuNgay->ToShortDateString() + "# ";
	}

	if (denNgay != nullptr)
	{
		query += " AND NgayMuaVe <= #" + denNgay->ToShortDateString() + "# ";
	}
	query += " ORDER BY NgayMuaVe DESC";
	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}
DataTable^ Store::GetDanhSachChiTietHoaDon(String^ idHoaDon)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	String^ query = "SELECT * "
		+ "FROM ChiTietHoaDon "
		+ "WHERE IDHoaDon = "+ idHoaDon +" ";

	cmd->CommandText = query;
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
	adapter->Fill(results);

	CloseAccess(conn);
	return results;
}
bool Store::Login(String^ taiKhoan, String^ matkhau)
{
	OleDbConnection^ conn = ConnectionAccess();
	DataTable^ results = gcnew DataTable();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT * FROM TaiKhoan WHERE TaiKhoan ='" + taiKhoan->Trim() + "' AND MatKhau = '" + matkhau->Trim() + "'";
	cmd->ExecuteNonQuery();
	OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(cmd);
	adapter->Fill(results);
	CloseAccess(conn);
	if (results->Rows->Count > 0)
	{
		return true;
	}
	return false;
}
bool Store::Sua1LichPhim(String^ idLichPhim, String^ maPhim, String^ rapPhim, String^ giaVe, DateTime^ ngay, DateTime^ gioBatdau, DateTime^ gioKetThuc)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "UPDATE LichPhim SET " +
		"NgayChieu = '" + ngay + "'," +
		"RapPhim = '" + rapPhim + "'," +
		"GioBatDau = '" + gioBatdau + "'," +
		"GioKetThuc = '" + gioKetThuc + "'," +
		"GiaVe = '" + giaVe + "'," +
		"MaPhim = '" + maPhim + "'" +
		"WHERE ID = " + idLichPhim + "; ";
	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}
bool Store::Xoa1LichPhim(String^ id)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "DELETE * FROM LichPhim  WHERE ID =" + id->Trim() + ";";

	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}
bool Store::XoaLichChieucuaPhim(String^ MaPhim)
{
	OleDbConnection^ conn = ConnectionAccess();
	OleDbCommand^ cmd = conn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "DELETE * FROM LichPhim  WHERE MaPhim ='" + MaPhim->Trim() + "';";

	bool resutl = cmd->ExecuteNonQuery();
	CloseAccess(conn);
	return resutl;
}

