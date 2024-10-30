#include "XuLi.h"
void Begin(KTX& ktx) {
	ktx.KhoiTaoDsDay();
	string c;
	do {
		cout << "\n\n----------------------------------------------------------" << endl;
		cout << "| Ban co muon nhap du lieu sinh vien tu file khong [y/n] |" << endl;;
		cout << "----------------------------------------------------------" << endl;
		cout << "-> Nhap lua chon: ";
		getline(cin, c);
		if (!(c == "y" or c == "n")) cout << "Lua chon khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
	} while (!(c == "y" or c == "n"));
	if (c == "y") ktx.NhapThongTinTuFile();
	XoaManHinh();
}
void menu(KTX& ktx) {
	int choice;
	do {
		cout << "Tham gia chuong trinh voi tu cach" << endl;
		cout << "\t1. Sinh Vien" << endl;
		cout << "\t2. Ban quan ly" << endl;
		cout << "\t0. Thoat chuong trinh" << endl;
		cout << "-> Nhap lua chon: "; cin >> choice; cin.ignore();

		switch (choice) {
		case 0:
			cout << "Thoat chuong trinh"; break;
		case 1:
			XoaManHinh();
			SVChoice(ktx);
			break;
		case 2:
			XoaManHinh();
			menuBQL(ktx);
			break;
		default:
			cout << "Lua chon khong hop le!" << endl;
		}
	} while (choice != 0);
}
void menuBQL(KTX& ktx) {
	int choice;
	do {
		cout << "\n--- CHON DOI TUONG THUC HIEN ---" << endl;
		cout << "\t1. Sinh vien" << endl;
		cout << "\t2. Day/phong" << endl;
		cout << "\t0. Quay lai" << endl;
		cout << "->Nhap lua chon: ";
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
			cout << "Lua chon khong hop le!" << endl << endl;
		}
	} while (choice != 0);
}
void SVChoice(KTX& ktx) {
	int choice;
	do {
		cout << "\n--- Quan Ly Sinh Vien ---" << endl;
		cout << "1. Dang ky KTX" << endl;
		cout << "2. Xem danh sach sinh vien" << endl;
		cout << "3. Thanh toan tien dien" << endl;
		cout << "0. Quay lai" << endl;
		cout << "-> Nhap lua chon:";
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
			cout << "Lua chon khong hop le!" << endl << endl;
		}
	} while (choice != 0);
}

void menuSV(KTX& ktx) {
	int choice;
	do {
		cout << "\n--- Quan Ly Day Phong ---\n";
		cout << "\t1. Them sinh vien" << endl;
		cout << "\t2. Xuat danh sach sinh vien" << endl;
		cout << "\t3. Tim sinh vien" << endl;
		cout << "\t4. Xoa sinh vien" << endl;
		cout << "\t5. Duyet Sinh Vien" << endl;
		cout << "\t0. Quay lai" << endl;
		cout << "->Nhap lua chon: ";
		cin >> choice;
		cin.ignore();

		switch (choice) {
		case 0:
			XoaManHinh();
			//                cout << "Quay lai menu chinh." << endl;
			break;
		case 1:
			XoaManHinh();
			cout << "--- Nhap sinh vien ---" << endl;
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
			cout << "Nhap thong tin sinh vien can xoa" << endl;
			do {
				cout << "Nhap Ho Ten: "; getline(cin, hoTen);
				if (!(CoDauCach(hoTen))) cout << "Ho ten da nhap khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
			} while (!(CoDauCach(hoTen)));
			do {
				cout << "Nhap MSSV: "; getline(cin, mssv);
				if (CoDauCach(mssv) or mssv.size() != 10) cout << "MSSV da nhap khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
			} while (CoDauCach(mssv) or mssv.size() != 10);
			do {
				cout << "Nhap ten day: "; getline(cin, tenDay);
				if (CoDauCach(tenDay) or ktx.TenDayInt(tenDay) < 0 or ktx.TenPhongInt(tenPhong) > 4) cout << "Ten day da nhap khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
			} while (CoDauCach(tenDay) or ktx.TenDayInt(tenDay) < 0 or ktx.TenPhongInt(tenDay) > 4);
			do {
				cout << "Nhap ten phong: "; getline(cin, tenPhong);
				if (CoDauCach(tenPhong) or ktx.TenPhongInt(tenPhong) < 0 or ktx.TenPhongInt(tenPhong) > 4) cout << "Ten phong da nhap khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
			} while (CoDauCach(tenPhong) or ktx.TenPhongInt(tenPhong) < 0 or ktx.TenPhongInt(tenPhong) > 4);
			ktx.XoaSinhVien(hoTen, mssv, tenDay, tenPhong);
			break;
		}
		case 5:
			XoaManHinh();
			ktx.DuyetSV();
			break;
		default:
			cout << "Lua chon khong hop le!" << endl << endl;
		}
	} while (choice != 0);
}
void menuSV2(KTX& ktx) {
	int choice;
	do {
		cout << "--- Xuat sinh vien ---" << endl;
		cout << "\t1. Xuat sinh vien theo bang chu cai" << endl;
		cout << "\t2. Xuat sinh vien theo bang day phong" << endl;
		cout << "\t3. Mac dinh" << endl;
		cout << "\t0. Quay lai" << endl;
		cout << "->Nhap lua chon: ";
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
			cout << "Lua chon khong hop le!" << endl << endl;
		}
	} while (choice != 0);
}

void menuSV3(KTX& ktx) {
	int choice;
	do {
		cout << "--- Tim sinh vien ---" << endl;
		cout << "\t1. Tim sinh vien theo Ten" << endl;
		cout << "\t2. Tim sinh vien theo MSSV" << endl;
		cout << "\t0. Quay lai" << endl;
		cout << "->Nhap lua chon: ";
		cin >> choice; cin.ignore();

		switch (choice) {
		case 0: XoaManHinh(); break;
		case 1:
		{
			string ten;
			do {
				cout << "\n\t->Nhap ten sinh vien can tim: ";
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
				cout << "\n\t->Nhap MSSV can tim: ";
				getline(cin, mssv);
				if (mssv.size() != 10 or CoDauCach(mssv)) cout << "MSSV vua nhap khong hop le!" << endl << "Vui long nhap lai!" << endl << endl;
			} while (mssv.size() != 10 or CoDauCach(mssv));
			ktx.TimSinhVienTheoMSSV(mssv);
			choice = 0;
			break;
		}
		default:
			cout << "Lua chon khong hop le!" << endl << endl;
		}
	} while (choice != 0);
}
void menuDayPhong(KTX& ktx) {
	int choice;
	do {
		cout << "\n\n--- MENU DAY/PHONG ---" << endl;
		cout << "\t1. Hien thong tin day" << endl;
		cout << "\t2. Hien danh sach phong con trong" << endl;
		cout << "\t3. Xem thong tin phong" << endl;
		cout << "\t4. Nhap so dien" << endl;
		cout << "\t5. Xem tinh trang dong tien dien" << endl;
		cout << "\t0. Quay lai" << endl;
		cout << "->Nhap lua chon: "; cin >> choice; cin.ignore();

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
			cout << "Lua chon khong hop le!" << endl << endl;
		}
	} while (choice != 0);
}
void menuDayPhong4(KTX& ktx) {
	int choice;
	do {
		cout << "\n--- Nhap tien dien---" << endl;
		cout << "\t1. Nhap thu cong" << endl;
		cout << "\t2. Nhap tu file" << endl;
		cout << "\t0. Quay lai" << endl;
		cout << "-> Nhap lua chon: ";

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
			cout << "Lua chon khong hop le! Vui long nhap lai!" << endl << endl;
		}
	} while (choice != 0);
}
void XoaManHinh() { system("cls"); }