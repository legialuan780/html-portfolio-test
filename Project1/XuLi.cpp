#include <iostream>
using namespace std;
#include "XuLi.h"
void Begin(KTX& ktx) {
	ktx.KhoiTaoDsDay();
	string c;
	do {
		cout << endl << endl << endl;
		cout << "\t\t\t\t===========================================================" << endl;
		cout << "\t\t\t\t[    Ban co muon nhap du lieu sinh vien tu file khong ?   ]" << endl;
		cout << "\t\t\t\t===========================================================" << endl;
		cout << "\t\t\t\t[    Co (nhan phim 'y')     |    Khong (nhan phim 'n')    ]" << endl;
		cout << "\t\t\t\t===========================================================" << endl;
		cout << "\n\t\t\t\t\t\t~> Lua chon cua ban: ";	getline(cin, c);
		if (!(c == "y" or c == "n")) cout << endl << "\t\t\t\t\t<!> Lua chon khong hop le, vui long nhap lai <!>" << endl << endl;
	} while (!(c == "y" or c == "n"));
	if (c == "y") ktx.NhapThongTinTuFile();
	XoaManHinh();
}
void menu(KTX& ktx) {
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t\t===========================================" << endl;
		cout << "\t\t\t\t|    Tham gia chuong trinh voi tu cach    |" << endl;
		cout << "\t\t\t\t| --------------------------------------- |" << endl;
		cout << "\t\t\t\t|   1. Ban quan ly                        |" << endl;
		cout << "\t\t\t\t|   2. Sinh vien                          |" << endl;
		cout << "\t\t\t\t|   0. Thoat chuong trinh                 |" << endl;
		cout << "\t\t\t\t===========================================" << endl;
		cout << "\n\t\t\t\t\t\t~> Lua chon cua ban(0,1,2): "; cin >> choice; cin.ignore();
		switch (choice) {
		case 0:
			cout << "\t\t\t\t\t\t<> Thoat chuong trinh <>";
			break;
		case 1:
			XoaManHinh();
			SVChoice(ktx);
			break;
		case 2:
			XoaManHinh();
			menuBQL(ktx);
			break;
		default:
			cout << "\t\t\t\t\t\t<!> Lua chon khong hop le <!>" << endl;
		}
	} while (choice != 0);
}
void menuBQL(KTX& ktx) {
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t\tO ------ Chon doi tuong thuc hien ------ O" << endl;
		cout << "\t\t\t\t| 1. Sinh vien                           |" << endl;
		cout << "\t\t\t\t| 2. Day / Phong                         |" << endl;
		cout << "\t\t\t\t| 0. Quay lai                            |" << endl;
		cout << "\t\t\t\tO ---------------------------------------O" << endl;
		cout << "\n\t\t\t\t\t~> Nhap lua chon: ";
		cin >> choice;
		cin.ignore();

		switch (choice) {
		case 0: 
			XoaManHinh();
			break;
		case 1:
			XoaManHinh();
			menuSV(ktx);
			break;
		case 2:
			XoaManHinh();
			menuDayPhong(ktx);
			break;
		default:
			cout << endl << "\t\t\t\t\t<!> Lua chon khong hop le <!>" << endl << endl;
		}
	} while (choice != 0);
}
void SVChoice(KTX& ktx) {
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t\tO ------ QUAN LY SINH VIEN ------ O" << endl;
		cout << "\t\t\t\t| 1. Dang ky Ki tuc xa            |" << endl;
		cout << "\t\t\t\t| 2. Xem danh sach sinh vien      |" << endl;
		cout << "\t\t\t\t| 3. Thanh toan tien dien         |" << endl;
		cout << "\t\t\t\t| 0. Quay lai                     |" << endl;
		cout << "\t\t\t\tO --------------------------------O" << endl;
		cout << "\n\t\t\t\t\t~> Nhap lua chon: ";
		cin >> choice; cin.ignore();

		switch (choice) {
		case 0: XoaManHinh(); break;
		case 1:
			XoaManHinh();
			ktx.DangKySV();
			break;
		case 2:
			XoaManHinh();
			ktx.XemDanhSachSV2();
			break;
		case 3:
			XoaManHinh();
			ktx.ThanhToanTienDien();
			break;
		default:
			cout << endl << "\t\t\t\t\t<!> Lua chon khong hop le <!>" << endl << endl;
		}
	} while (choice != 0);
}

void menuSV(KTX& ktx) {
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t\tO ------ QUAN LI DAY PHONG ------ O" << endl;
		cout << "\t\t\t\t| 1. Them sinh vien               |" << endl;
		cout << "\t\t\t\t| 2. Xuat danh sach sinh vien     |" << endl;
		cout << "\t\t\t\t| 3. Tra cuu sinh vien            |" << endl;
		cout << "\t\t\t\t| 4. Xoa sinh vien                |" << endl;
		cout << "\t\t\t\t| 5. Duyet sinh vien              |" << endl;
		cout << "\t\t\t\t| 0. Quay lai                     |" << endl;
		cout << "\t\t\t\tO --------------------------------O" << endl;
		cout << "\n\t\t\t\t\t~> Nhap lua chon: ";
		cin >> choice;
		cin.ignore();

		switch (choice) {
		case 0:
			XoaManHinh();
			//cout << "Quay lai menu chinh." << endl;
			break;
		case 1:
			XoaManHinh();
			cout << endl << "\t\t\t\t> Bat dau nhap sinh vien ben duoi <" << endl;
			ktx.NhapSinhVien();
			break;
		case 2:
			XoaManHinh();
			menuSV2(ktx);
			break;
		case 3:
			XoaManHinh();
			menuSV3(ktx);
			break;
		case 4:
		{
			XoaManHinh();
			string hoTen, mssv, tenPhong, tenDay;
			cout << "> Nhap thong tin sinh vien can xoa <" << endl;
			do {
				cout << "Nhap Ho Ten: "; getline(cin, hoTen);
				if (!(CoDauCach(hoTen))) cout << "<!> Ho ten da nhap khong hop le <!>" << endl << "Vui long nhap lai!" << endl << endl;
			} while (!(CoDauCach(hoTen)));
			do {
				cout << "Nhap MSSV: "; getline(cin, mssv);
				if (CoDauCach(mssv) or mssv.size() != 10) cout << "<!> MSSV da nhap khong hop le <!>" << endl << "Vui long nhap lai!" << endl << endl;
			} while (CoDauCach(mssv) or mssv.size() != 10);
			do {
				cout << "Nhap ten day: "; getline(cin, tenDay);
				if (CoDauCach(tenDay) or ktx.TenDayInt(tenDay) < 0 or ktx.TenPhongInt(tenPhong) > 4) cout << "<!> Ten day da nhap khong hop le <!>" << endl << "Vui long nhap lai!" << endl << endl;
			} while (CoDauCach(tenDay) or ktx.TenDayInt(tenDay) < 0 or ktx.TenPhongInt(tenDay) > 4);
			do {
				cout << "Nhap ten phong: "; getline(cin, tenPhong);
				if (CoDauCach(tenPhong) or ktx.TenPhongInt(tenPhong) < 0 or ktx.TenPhongInt(tenPhong) > 4) cout << "<!> Ten phong da nhap khong hop le <!>" << endl << "Vui long nhap lai!" << endl << endl;
			} while (CoDauCach(tenPhong) or ktx.TenPhongInt(tenPhong) < 0 or ktx.TenPhongInt(tenPhong) > 4);
			ktx.XoaSinhVien(hoTen, mssv, tenDay, tenPhong);
			break;
		}
		case 5:
			XoaManHinh();
			ktx.DuyetSV();
			break;
		default:
			cout << endl << "\t\t\t\t<!> Lua chon khong hop le <!>" << endl << endl;
		}
	} while (choice != 0);
}
void menuSV2(KTX& ktx) {
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t\tO ----------- Xuat sinh vien ----------- O" << endl;
		cout << "\t\t\t\t| 1. Xuat sinh vien theo bang chu cai    |" << endl;
		cout << "\t\t\t\t| 2. Xuat sinh vien theo bang day phong  |" << endl;
		cout << "\t\t\t\t| 3. Xuat sinh vien mac dinh             |" << endl;
		cout << "\t\t\t\t| 0. Quay lai                            |" << endl;
		cout << "\t\t\t\tO ---------------------------------------O" << endl;
		cout << "\n\t\t\t\t\t~> Nhap lua chon: ";
		cin >> choice; cin.ignore();

		switch (choice) {
		case 0: XoaManHinh(); break;
		case 1:
			XoaManHinh();
			ktx.XuatDsSinhVienTheoBangChuCai();
			break;
		case 2:
			XoaManHinh();
			ktx.XuatDsSinhVienTheoDayPhong();
			break;
		case 3:
			XoaManHinh();
			ktx.XuatDsSinhVien();
			break;
		default:
			cout << endl << "\t\t\t\t<!> Lua chon khong hop le <!>" << endl << endl;
		}
	} while (choice != 0);
}

void menuSV3(KTX& ktx) {
	int choice;
	do {
		cout << "\t\t\t\tO -------- TRA CUU SINH VIEN -------- O" << endl;
		cout << "\t\t\t\t| 1. Tra cuu sinh vien theo ten       |" << endl;
		cout << "\t\t\t\t| 2. Tra cuu sinh vien theo MSSV      |" << endl;
		cout << "\t\t\t\t| 0. Quay lai                         |" << endl;
		cout << "\t\t\t\tO ------------------------------------O" << endl;
		cout << "\n\t\t\t\t\t~> Nhap lua chon: ";
		cin >> choice; cin.ignore();

		switch (choice) {
		case 0: XoaManHinh(); break;
		case 1:
		{
			string ten;
			do {
				cout << "\n\t->Nhap ten sinh vien can tra cuu: ";
				getline(cin, ten);
				if (CoDauCach(ten))
					cout << "Ten khong duoc chua khoang cach!" << endl << "Vui long nhap lai!" << endl << endl;
			} while (CoDauCach(ten));
			ktx.TimSinhVienTheoTen(ten);
			choice = 0;
			break;
		}
		case 2:
		{
			string mssv;
			do {
				cout << "\n\t->Nhap MSSV can tra cuu: ";
				getline(cin, mssv);
				if (mssv.size() != 10 or CoDauCach(mssv)) cout << "MSSV vua nhap khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
			} while (mssv.size() != 10 or CoDauCach(mssv));
			ktx.TimSinhVienTheoMSSV(mssv);
			choice = 0;
			break;
		}
		default:
			cout << endl << "\t\t\t\t<!> Lua chon khong hop le <!>" << endl << endl;
		}
	} while (choice != 0);
}
void menuDayPhong(KTX& ktx) {
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t\tO ----- BANG CHUC NANG DAY/PHONG ----- O" << endl;
		cout << "\t\t\t\t| 1. Hien thong tin day                |" << endl;
		cout << "\t\t\t\t| 2. Hien danh sach phong con trong    |" << endl;
		cout << "\t\t\t\t| 3. Xem thong tin phong               |" << endl;
		cout << "\t\t\t\t| 4. Nhap so dien                      |" << endl;
		cout << "\t\t\t\t| 5. Xem trang thai dong tien dien     |" << endl;
		cout << "\t\t\t\t| 0. Quay lai                          |" << endl;
		cout << "\t\t\t\tO -------------------------------------O" << endl;
		cout << "\n\t\t\t\t\t~> Nhap lua chon: ";
		cin >> choice; cin.ignore();

		switch (choice) {
		case 0:
			XoaManHinh();
			break;
		case 1:
			XoaManHinh();
			ktx.HienThiThongTinDay();
			break;
		case 2:
			XoaManHinh();
			ktx.HienPhongTrong();
			break;
		case 3:
			XoaManHinh();
			ktx.XemThongTinCacPhong();
			break;
		case 4:
			XoaManHinh();
			menuDayPhong4(ktx);
			break;
		case 5:
			XoaManHinh();
			ktx.XemTinhTrangDongTienDien();
			break;
		default:
			cout << endl << "\t\t\t\t<!> Lua chon khong hop le <!>" << endl << endl;
		}
	} while (choice != 0);
}
void menuDayPhong4(KTX& ktx) {
	int choice;
	do {
		cout << endl << endl;
		cout << "\t\t\t\tO --------- NHAP TIEN DIEN --------- O" << endl;
		cout << "\t\t\t\t| 1. Nhap thu cong                   |" << endl;
		cout << "\t\t\t\t| 2. Nhap tu file du lieu            |" << endl;
		cout << "\t\t\t\t| 0. Quay lai                        |" << endl;
		cout << "\t\t\t\tO -----------------------------------O" << endl;
		cout << "\n\t\t\t\t\t~> Nhap lua chon: ";
		cin >> choice; cin.ignore();
		switch (choice) {
		case 0:
			XoaManHinh();
			break;
		case 1:
			ktx.NhapSoDien();
			choice = 0;
			break;
		case 2:
			ktx.NhapSoDienFile();
			choice = 0;
			break;
		default:
			cout << endl << "\t\t\t\t<!> Lua chon khong hop le <!>" << endl << endl;
		}
	} while (choice != 0);
}
void XoaManHinh() { system("cls"); }