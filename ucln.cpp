#include <iostream>
using namespace std;

// Struct luu cap so can tim UCLN
struct CapSo {
    int a, b;
    int ucln;
};

// ---- Nhap / Xuat ----
void nhap(CapSo &c) {
    cout << "Nhap a: "; cin >> c.a;
    cout << "Nhap b: "; cin >> c.b;
}

void xuat(const CapSo &c) {
    cout << "UCLN(" << c.a << ", " << c.b << ") = " << c.ucln << endl;
}

// ---- Tinh UCLN bang giai thuat Euclid ----
void tinhUCLN(CapSo &c) {
    int a = c.a < 0 ? -c.a : c.a;   // xu ly so am
    int b = c.b < 0 ? -c.b : c.b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    c.ucln = a;
}

int main() {
    CapSo c;
    nhap(c);
    tinhUCLN(c);
    xuat(c);
    return 0;
}
