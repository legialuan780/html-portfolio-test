#include "SinhVien.h"
SinhVien::SinhVien() {
    HoTen = "";
    MSSV = "";
    DiaChi = "";
    Lop = "";
    Khoa = "";
    GioiTinh = "";
    SDT = "";
    NgaySinh = Date();
}

SinhVien::SinhVien(string hoTen, string mssv, string diaChi, string lop, string khoa, string gioiTinh, string sdt, Date ngaySinh)
    : HoTen(hoTen), MSSV(mssv), DiaChi(diaChi), Lop(lop), Khoa(khoa), GioiTinh(gioiTinh), SDT(sdt), NgaySinh(ngaySinh) {}

void SinhVien::setHoTen(string hoTen) { HoTen = hoTen; }
void SinhVien::setMSSV(string mssv) { MSSV = mssv; }
void SinhVien::setDiaChi(string diaChi) { DiaChi = diaChi; }
void SinhVien::setLop(string lop) { Lop = lop; }
void SinhVien::setKhoa(string khoa) { Khoa = khoa; }
void SinhVien::setGioiTinh(string gioiTinh) { GioiTinh = gioiTinh; }
void SinhVien::setSDT(string sdt) { SDT = sdt; }
void SinhVien::setNgaySinh(Date ngaySinh) { NgaySinh = ngaySinh; }

string SinhVien::getHoTen() { return HoTen; }
string SinhVien::getMSSV() { return MSSV; }
string SinhVien::getDiaChi() { return DiaChi; }
string SinhVien::getLop() { return Lop; }
string SinhVien::getKhoa() { return Khoa; }
string SinhVien::getGioiTinh() { return GioiTinh; }
string SinhVien::getSDT() { return SDT; }
Date SinhVien::getNgaySinh() { return NgaySinh; }
string SinhVien::getTen() {
    stringstream ss(HoTen);
    string ten;
    vector<string> tenList;
    while (ss >> ten) {
        tenList.push_back(ten);
    }
    return tenList.back();
}

void SinhVien::Nhap() {
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);
    do {
        cout << "Nhap MSSV: ";
        getline(cin, MSSV);
        if (MSSV.size() != 10 or CoDauCach(MSSV)) cout << "MSSV khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
    } while (MSSV.size() != 10 or CoDauCach(MSSV));

    cout << "Nhap dia chi: ";
    getline(cin, DiaChi);
    cout << "Nhap lop: ";
    getline(cin, Lop);

    cout << "Nhap khoa [Kxx]: ";
    getline(cin, Khoa);


    do {
        cout << "Nhap gioi tinh: ";
        getline(cin, GioiTinh);
        if (GioiTinh != "Nam" and GioiTinh != "Nu") cout << "Gioi tinh khong hop le!" << endl << "Vui long nhap lai! [Nam/Nu]" << endl << endl;
    } while (GioiTinh != "Nam" and GioiTinh != "Nu");

    do {
        cout << "Nhap so dien thoai: ";
        getline(cin, SDT);
    } while (SDT.size() != 10);
    NgaySinh.Nhap();
    cin.ignore();  // Để bỏ qua ký tự xuống dòng sau khi nhập số
}

void SinhVien::XuatDonGian() {
    cout << setw(18) << HoTen << " |" << setw(13) << MSSV << " |" << setw(9) << Lop << " |" << setw(8) << Khoa << " |" << endl;;
}

void SinhVien::XuatBang() {
    cout << setw(18) << HoTen << " |" << setw(13) << MSSV << " |" << setw(9) << Lop << " |" << setw(8) << Khoa << " |" << setw(13) << DiaChi << " |" << setw(8) << GioiTinh << " |" << setw(13) << SDT << " |   ";
    NgaySinh.Xuat();
    cout << " |" << endl;
}
bool SinhVien::KiemTraKhoa() {
    if (!(Khoa == "K65" or Khoa == "K64" or Khoa == "K63" or Khoa == "K62")) {
        cout << "Khoa da nhap khong hop le hoac vuot qua khoa quy dinh cua KTX";
        return false;
    }
    return true;
}

bool SinhVien::TimSinhVienTheoTen(string ten) {
    return getTen() == ten;
}

