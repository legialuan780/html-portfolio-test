#include "Phong.h"
string Phong::getTenPhong() { return TenPhong; }
int Phong::getThuTuPhong() { return ThuTuPhong; }
int Phong::getSoNguoiToiDa() { return SoNguoiToiDa; }
int Phong::getSoNguoiHienTai() { return SoNguoiHienTai; }
float Phong::getSoDienCu() { return SoDienCu; }
float Phong::getSoDienMoi() { return SoDienMoi; }
float Phong::getTienDien() { return TienDien; }
bool Phong::getTrangThai() { return TrangThai; }
vector<SinhVien> Phong::getDsSV() { return DsSV; }
vector<SinhVien>* Phong::getDsSVPtr() { return &DsSV; }

void Phong::setTenPhong(string tenPhong) { TenPhong = tenPhong; }
void Phong::setSoNguoiToiDa(int soNguoi) { SoNguoiToiDa = soNguoi; }
void Phong::setSoNguoiHienTai(int soNguoi) { SoNguoiHienTai = soNguoi; }
void Phong::setSoDienCu(float soDienCu) { SoDienCu = soDienCu; }
void Phong::setSoDienMoi(float soDienMoi) { SoDienMoi = soDienMoi; }
void Phong::setTienDien(float tienDien) { TienDien = tienDien; }
void Phong::setTrangThai(bool trangThai) { TrangThai = trangThai; }

void Phong::KhoiTaoPhong(int ThuTu) {
	SoNguoiToiDa = 4;
	SoNguoiHienTai = 0;
	SoDienCu = 0;
	SoDienMoi = 0;
	TrangThai = 1;
	TienDien = 0;
	switch (ThuTu) {
	case 0:ThuTuPhong = 0; TenPhong = "P01"; break;
	case 1:ThuTuPhong = 1; TenPhong = "P02"; break;
	case 2:ThuTuPhong = 2; TenPhong = "P03"; break;
	case 3:ThuTuPhong = 3; TenPhong = "P04"; break;
		//		case 4:ThuTuPhong=4; TenPhong="P05"; break;
	}
}

void Phong::NhapSinhVien(SinhVien sv) {
	DsSV.push_back(sv);
	SoNguoiHienTai = DsSV.size();
}
void Phong::XuatThongTinPhong() {
	cout << "Ten phong: " << TenPhong << endl;
	cout << "So nguoi toi da: " << SoNguoiToiDa << endl;
	cout << "So nguoi hien tai: " << SoNguoiHienTai << endl;
	cout << "So dien cu: " << SoDienCu << endl;
	cout << "So dien moi: " << SoDienMoi << endl;
}
void Phong::XuatDsSinhVien(string tenDay) {
	if (DsSV.size() == 0) {
		//        cout << "Phong " << TenPhong << " trong day " << tenDay << " hien khong co sinh vien nao.\n";
		return;
	}

	for (int i = 0; i < DsSV.size(); i++) {
		//    	if (i==0) 
		cout << setw(5) << tenDay << " |" << setw(8) << TenPhong << " |";
		DsSV[i].XuatBang();
	}
}

bool Phong::KiemTraMSSV(string mssv) {
	bool kt = true;
	for (int i = 0; i < DsSV.size(); i++) {
		if (DsSV[i].getMSSV() == mssv) kt = false;
		if (kt == false) return kt;
	}
	return kt;
}
bool Phong::KiemTraPhongTrong() {
	return (SoNguoiHienTai < SoNguoiToiDa);
}
void Phong::TimSinhVienTheoTen(string ten, string tenDay, int thuTuPhong) {
	for (int i = 0; i < DsSV.size(); i++) {
		if (DsSV[i].TimSinhVienTheoTen(ten)) {
			XuatDsSinhVien(tenDay);
		}
	}
}
void Phong::TinhTienDien() {
	TienDien = (SoDienMoi - SoDienCu) * 1900;
}
