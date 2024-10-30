#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <dos.h>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "Date.h"
#include "SinhVien.h"
#include "CoDauCach.h"
using namespace std;
class SinhVien
{
private:
    string HoTen, MSSV, DiaChi, Lop, Khoa, GioiTinh, SDT;
    Date NgaySinh;
public:
    SinhVien();
    SinhVien(string hoTen, string mssv, string diaChi, string lop, string khoa, string gioiTinh, string sdt, Date ngaySinh);

    void setHoTen(string hoTen);
    void setMSSV(string mssv);
    void setDiaChi(string diaChi);
    void setLop(string lop);
    void setKhoa(string khoa);
    void setGioiTinh(string gioiTinh);
    void setSDT(string sdt);
    void setNgaySinh(Date ngaySinh);

    string getHoTen();
    string getMSSV();
    string getDiaChi();
    string getLop();
    string getKhoa();
    string getGioiTinh();
    string getSDT();
    Date getNgaySinh();
    string getTen();

    void Nhap();
    void XuatDonGian();
    void XuatBang();

    bool KiemTraKhoa();
    bool TimSinhVienTheoTen(string ten);
    friend bool CoDauCach(string chuoi);
};

