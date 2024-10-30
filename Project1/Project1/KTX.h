#pragma once
#include "Day.h"
#include "CoDauCach.h"
#include <iostream>
#include <vector>
#include <string>
#include <dos.h>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
class KTX
{
private:
    vector <Day> DsDay;
    int SoLuongDay;
public:

    int getSoLuongDay();
    void setSoLuongDay(int soLuongDay);

    void KhoiTaoDsDay();
    void ThemSinhVien(SinhVien sv, int thuTuDay, int thuTuPhong);
    void NhapThongTinTuFile();
    void NhapSinhVien();
    void XuatDsSinhVien();
    void XuatDsSinhVienTheoBangChuCai();
    void XuatDsSinhVienTheoDayPhong();
    void XemDanhSachSV2();

    void NhapDanhSachDay();
    void XuatDsDay();

    void XuatDsPhongTrong(string gioiTinh, int& dem);

    bool KiemTraMSSV(string mssv);
    bool KiemTraPhongTrong(int thuTuDay, int thuTuPhong, string gioiTinh);

    int TenDayInt(string tenDay);
    int TenPhongInt(string tenPhong);
    string ThuTuDayStr(int thuTuDay);
    string ThuTuPhongStr(int thuTuPhong);

    void TimSinhVienTheoTen(string ten);
    void TimSinhVienTheoMSSV(string mssv);
    void XoaSinhVien(string hoTen, string mssv, string tenDay, string tenPhong);

    void HienThiThongTinDay();
    void HienPhongTrong();
    void XemThongTinCacPhong();
    void NhapSoDien();
    void NhapSoDienFile();
    void XemTinhTrangDongTienDien();

    void ThanhToanTienDien();
    bool KiemTraTenPhong(string tenDay, string tenPhong);
    float TraCuuTienDien(int thuTuDay, int thuTuPhong);
    bool TraCuuTrangThaiTienDien(int thTuDay, int thuTuPhong);

    friend bool CoDauCach(string chuoi);

    void DangKySV();
    void XemDanhSachSV();

    void DuyetSV();
};

