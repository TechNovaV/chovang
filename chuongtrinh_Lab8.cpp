#include "thuvien_Lab8.h"

int main()
{
	int m, n;
	int a[KTMT][KTMT];

	cout << "Nhap so dong: ";
	nhapSoNguyen(m);
	cout << "Nhap so cot: ";
	nhapSoNguyen(n);
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	cout << "Cac so chan: ";
	lietKeSoChan(a, m, n);
	cout << "So lon nhat la: " << timMax(a, m, n);

	int k;
	cout << "\nNhap K: ";
	cin >> k;
	timMaxDongK(a, m, n, k);
	cout << "\nSo chinh phuong: ";
	tongCP(a, m, n);


	return 0;
}