#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <dos.h>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
class Date
{
private:
    int ngay;
    int thang;
    int nam;
public:
    Date();
    Date(int ngay, int thang, int nam);

    void setNgay(int ngay);
    void setThang(int thang);
    void setNam(int nam);

    int getNgay();
    int getThang();
    int getNam();

    void Nhap();
    void Xuat();
};

