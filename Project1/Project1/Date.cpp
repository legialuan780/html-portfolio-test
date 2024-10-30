#include "Date.h"
using namespace std;
Date::Date() {
	ngay = 0;
	thang = 0;
	nam = 0;
}
Date::Date(int n, int t, int y) {
	ngay = n;
	thang = t;
	nam = y;

}

void Date::setNgay(int n) { ngay = n; }
void Date::setThang(int t) { thang = t; }
void Date::setNam(int y) { nam = y; }

int Date::getNgay() { return ngay; }
int Date::getThang() { return thang; }
int Date::getNam() { return nam; }

void Date::Nhap() {
	int check = 1;
	do {
		do {
			cout << "Nhap ngay sinh: "; cin >> ngay;
			if (ngay < 1 or ngay>31) cout << "Nhap lai ngay!" << endl;
		} while (ngay < 1 or ngay>31);
		do {
			cout << "Nhap thang: "; cin >> thang;
			if (thang < 1 or thang>12) cout << "Nhap lai thang!" << endl;
		} while (thang < 1 or thang>12);
		do {
			cout << "Nhap nam: "; cin >> nam;
			if (nam < 1900 or nam>2025) cout << "Nhap lai nam!" << endl;
		} while (nam < 1900 or nam>2025);
		if (nam % 4 == 0 and thang == 2 and ngay > 29) check = 0;
		else if (nam % 4 != 0 and thang == 2 and ngay > 28) check = 0;
		else if ((thang == 4 or thang == 6 or thang == 9 or thang == 11) and ngay > 30) check = 0;
		else check = 1;
		if (check == 0) cout << "Ngay da nhap khong hop le" << "\nVui long nhap lai!" << endl;
	} while (check == 0);
}
void Date::Xuat() {
	if (ngay < 10) cout << "0" << ngay;
	else cout << ngay;
	cout << " / ";
	if (thang < 10) cout << "0" << thang;
	else cout << thang;
	cout << " / ";
	cout << nam;
}
