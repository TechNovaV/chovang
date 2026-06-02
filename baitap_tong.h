#pragma once
#include <iostream>
#include <cmath>
using namespace std;

// Struct lưu thong tin tinh tong
struct TongInfo {
    int    n;       // so hang
    double x;       // bien x (dung cho bai co 2 tham so)
    double ketqua;  // ket qua tinh duoc
};

// ---- Nhap / Xuat ----
void nhapN  (TongInfo &s);
void nhapNX (TongInfo &s);
void xuat   (const TongInfo &s, int bai);

// ---- 19 ham tinh tong ----
// Bai 1 : S = 1 + 2 + 3 + ... + n
void tinh1 (TongInfo &s);
// Bai 2 : S = 1^2 + 2^2 + ... + n^2
void tinh2 (TongInfo &s);
// Bai 3 : S = 1 + 1/2 + 1/3 + ... + 1/n
void tinh3 (TongInfo &s);
// Bai 4 : S = 1/2 + 1/4 + ... + 1/(2n)
void tinh4 (TongInfo &s);
// Bai 5 : S = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
void tinh5 (TongInfo &s);
// Bai 6 : S = 1/(1x2) + 1/(2x3) + ... + 1/(nx(n+1))
void tinh6 (TongInfo &s);
// Bai 7 : S = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
void tinh7 (TongInfo &s);
// Bai 8 : S = 1/4 + 2/6 + 3/8 + ... + n/(2n+2)
void tinh8 (TongInfo &s);
// Bai 9 : T = 1 x 2 x 3 x ... x n  (giai thua)
void tinh9 (TongInfo &s);
// Bai 10: T = x^n
void tinh10(TongInfo &s);
// Bai 11: S = 1 + 1x2 + 1x2x3 + ... + n!
void tinh11(TongInfo &s);
// Bai 12: S = x + x^2 + x^3 + ... + x^n
void tinh12(TongInfo &s);
// Bai 13: S = x^2 + x^4 + ... + x^(2n)
void tinh13(TongInfo &s);
// Bai 14: S = x + x^3 + x^5 + ... + x^(2n+1)
void tinh14(TongInfo &s);
// Bai 15: S = 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+...+n)
void tinh15(TongInfo &s);
// Bai 16: S = x + x^2/(1+2) + x^3/(1+2+3) + ... + x^n/(1+2+...+n)
void tinh16(TongInfo &s);
// Bai 17: S = x/1! + x^2/2! + x^3/3! + ... + x^n/n!
void tinh17(TongInfo &s);
// Bai 18: S = 1 + x^2/2! + x^4/4! + ... + x^(2n)/(2n)!
void tinh18(TongInfo &s);
// Bai 19: S = 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!
void tinh19(TongInfo &s);
