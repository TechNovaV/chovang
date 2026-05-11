#include <iostream>
using namespace std;

const int KTMT = 50;
int nhapSoNguyen(int& n);
void nhapMaTran(int a[][KTMT], int m, int n);
void xuatMaTran(int a[][KTMT], int m, int n);
void lietKeSoChan(int a[][KTMT], int m, int n);
void lietKe35(int a[][KTMT], int m, int n);
int timMax(int a[][KTMT], int m, int n);
int timMaxDongK(int a[][KTMT], int m, int n, int k);

bool checkCP(int n);
void tongCP(int a[][KTMT], int m, int n);
