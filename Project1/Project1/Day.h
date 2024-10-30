#pragma once
#include "Phong.h"
#include "Day.h"
#include <iostream>
#include <vector>
#include <string>
#include <dos.h>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
class Day
{
private:
	int ThuTuDay;
	static int ThuTuDayMoi;
	string TenDay;
	string LoaiDay;
	vector<Phong> DsPhong;
	int SoLuongPhong;
public:

	string getTenDay();
	string getLoaiDay();
	int getSoLuongPhong();
	vector<Phong> getDsPhong();
	vector<Phong>* getDsPhongPtr();

	void setTenDay(string tenDay);
	void setSoLuongPhong(int);

	void KhoiTaoDay(int ThuTu);
	void NhapSinhVien(SinhVien sv, int thuTuPhong);
	void XuatDsSinhVien();

	void XuatThongTinDay();
	void XuatTenPhong(int thuTuDay, int thuTuPhong);

	bool KiemTraMSSV(string mssv);
	bool KiemTraPhongTrong(int thuTuDay, int thuTuPhong, string gioiTinh);

	void TimSinhVienTheoTen(string ten, int thuTuDay);
	float TraCuuTienDien(int thuTuDay, int thuTuPhong);
	bool TraCuuTrangThaiTienDien(int thuTuDay, int thuTuPhong);
	void ThanhToanTienDien(int thuTuPhong);
};

