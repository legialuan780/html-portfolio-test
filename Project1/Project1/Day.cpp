#include "Day.h"
int Day::ThuTuDayMoi = 0;
string Day::getTenDay() { return TenDay; }
string Day::getLoaiDay() { return LoaiDay; }
int Day::getSoLuongPhong() { return SoLuongPhong; }
vector<Phong>Day::getDsPhong() { return DsPhong; }
vector<Phong>* Day::getDsPhongPtr() { return &DsPhong; }

void Day::setTenDay(string tenDay) { TenDay = tenDay; }
void Day::setSoLuongPhong(int soLuongPhong) {
	SoLuongPhong = soLuongPhong;
}

void Day::KhoiTaoDay(int ThuTu) {
	SoLuongPhong = 4;
	DsPhong.resize(SoLuongPhong);
	switch (ThuTu) {
	case 0:ThuTuDay = 0; TenDay = "D1"; LoaiDay = "Nam"; break;
	case 1:ThuTuDay = 1; TenDay = "D2"; LoaiDay = "Nam"; break;
		//		case 2:ThuTuDay=2; TenDay="D3"; LoaiDay="Nam"; break;
	case 2:ThuTuDay = 2; TenDay = "N1"; LoaiDay = "Nu"; break;
	case 3:ThuTuDay = 3; TenDay = "N2"; LoaiDay = "Nu"; break;
	}
	for (int i = 0; i < SoLuongPhong; i++) {
		DsPhong[i].KhoiTaoPhong(i);
	}
}

void Day::NhapSinhVien(SinhVien sv, int thuTuPhong) {
	DsPhong[thuTuPhong].NhapSinhVien(sv);
}

void Day::XuatDsSinhVien() {
	for (int i = 0; i < SoLuongPhong; i++) {
		DsPhong[i].XuatDsSinhVien(TenDay);  // Xuất thông tin sinh viên kèm theo tên dãy
	}
}

void Day::XuatTenPhong(int thuTuDay, int thuTuPhong) {
	cout << TenDay << "-" << DsPhong[thuTuPhong].getTenPhong();
}
bool Day::KiemTraMSSV(string mssv) {
	bool kt = true;
	for (int i = 0; i < DsPhong.size(); i++) {
		kt = DsPhong[i].KiemTraMSSV(mssv);
		if (kt == false) return kt;
	}
	return kt;
}
bool Day::KiemTraPhongTrong(int thuTuDay, int thuTuPhong, string gioiTinh) {
	if (LoaiDay == gioiTinh)
		return DsPhong[thuTuPhong].KiemTraPhongTrong();
	return false;
}
float Day::TraCuuTienDien(int thuTuDay, int thuTuPhong) {
	return DsPhong[thuTuPhong].getTienDien();
}
bool Day::TraCuuTrangThaiTienDien(int thuTuDay, int thuTuPhong) {
	return DsPhong[thuTuPhong].getTrangThai();
}

void Day::ThanhToanTienDien(int thuTuPhong) {
	DsPhong[thuTuPhong].setTrangThai(true);
}
