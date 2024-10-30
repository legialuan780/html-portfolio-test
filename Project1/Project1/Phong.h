#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <dos.h>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
#include "SinhVien.h"
class Phong
{
private:
    string TenPhong;
    int ThuTuPhong;
    int SoNguoiToiDa;
    int SoNguoiHienTai;
    float SoDienCu, SoDienMoi;
    float TienDien;
    bool TrangThai;
    vector<SinhVien> DsSV;
public:

    string getTenPhong();
    int getThuTuPhong();
    int getSoNguoiToiDa();
    int getSoNguoiHienTai();
    float getSoDienCu();
    float getSoDienMoi();
    float getTienDien();
    bool getTrangThai();
    vector<SinhVien> getDsSV();
    vector<SinhVien>* getDsSVPtr();

    void setTenPhong(string tenPhong);
    void setThuTuPhong(int thuTuPhong);
    void setSoNguoiToiDa(int soNguoi);
    void setSoNguoiHienTai(int soNguoi);
    void setSoDienCu(float soDienCu);
    void setSoDienMoi(float SoDienMoi);
    void setTienDien(float tienDien);
    void setTrangThai(bool trangThai);

    void KhoiTaoPhong(int ThuTu);
    void NhapSinhVien(SinhVien sv);
    void XuatDsSinhVien(string tenDay);

    void XuatThongTinPhong();  // Xuất thông tin phòng

    bool KiemTraMSSV(string mssv);
    bool KiemTraPhongTrong();

    void TimSinhVienTheoTen(string ten, string tenDay, int thuTuPhong);
    void TinhTienDien();
};

