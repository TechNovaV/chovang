#include "baitap_tong.h"

// =====================================================================
//  NHAP / XUAT
// =====================================================================
void nhapN(TongInfo &s) {
    cout << "  Nhap n: ";
    cin  >> s.n;
    s.x = 0;
}

void nhapNX(TongInfo &s) {
    cout << "  Nhap n: ";
    cin  >> s.n;
    cout << "  Nhap x: ";
    cin  >> s.x;
}

void xuat(const TongInfo &s, int bai) {
    cout << "  Ket qua bai " << bai << ": S = " << s.ketqua << endl;
}

// =====================================================================
//  HELPER: giai thua i! (dung noi bo)
// =====================================================================
static double giaiThua(int i) {
    double gt = 1;
    for (int k = 2; k <= i; k++) gt *= k;
    return gt;
}

// =====================================================================
//  19 BAI TINH TONG
// =====================================================================

// Bai 1: S = 1 + 2 + 3 + ... + n
void tinh1(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 1; i <= s.n; i++)
        s.ketqua += i;
}

// Bai 2: S = 1^2 + 2^2 + ... + n^2
void tinh2(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 1; i <= s.n; i++)
        s.ketqua += (double)i * i;
}

// Bai 3: S = 1 + 1/2 + 1/3 + ... + 1/n
void tinh3(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 1; i <= s.n; i++)
        s.ketqua += 1.0 / i;
}

// Bai 4: S = 1/2 + 1/4 + 1/6 + ... + 1/(2n)
void tinh4(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 1; i <= s.n; i++)
        s.ketqua += 1.0 / (2 * i);
}

// Bai 5: S = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
void tinh5(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 0; i <= s.n; i++)
        s.ketqua += 1.0 / (2 * i + 1);
}

// Bai 6: S = 1/(1x2) + 1/(2x3) + ... + 1/(nx(n+1))
void tinh6(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 1; i <= s.n; i++)
        s.ketqua += 1.0 / ((double)i * (i + 1));
}

// Bai 7: S = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
void tinh7(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 1; i <= s.n; i++)
        s.ketqua += (double)i / (i + 1);
}

// Bai 8: S = 1/4 + 2/6 + 3/8 + ... + n/(2n+2)
void tinh8(TongInfo &s) {
    s.ketqua = 0;
    for (int i = 1; i <= s.n; i++)
        s.ketqua += (double)i / (2 * i + 2);
}

// Bai 9: T = 1 x 2 x 3 x ... x n  (n!)
void tinh9(TongInfo &s) {
    s.ketqua = 1;
    for (int i = 2; i <= s.n; i++)
        s.ketqua *= i;
}

// Bai 10: T = x^n
void tinh10(TongInfo &s) {
    s.ketqua = pow(s.x, s.n);
}

// Bai 11: S = 1 + 1x2 + 1x2x3 + ... + n!
void tinh11(TongInfo &s) {
    s.ketqua = 0;
    double gt = 1;
    for (int i = 1; i <= s.n; i++) {
        gt *= i;
        s.ketqua += gt;
    }
}

// Bai 12: S = x + x^2 + x^3 + ... + x^n
void tinh12(TongInfo &s) {
    s.ketqua = 0;
    double term = s.x;
    for (int i = 1; i <= s.n; i++) {
        s.ketqua += term;
        term *= s.x;
    }
}

// Bai 13: S = x^2 + x^4 + ... + x^(2n)
void tinh13(TongInfo &s) {
    s.ketqua = 0;
    double term = s.x * s.x;
    for (int i = 1; i <= s.n; i++) {
        s.ketqua += term;
        term *= s.x * s.x;
    }
}

// Bai 14: S = x + x^3 + x^5 + ... + x^(2n+1)
void tinh14(TongInfo &s) {
    s.ketqua = 0;
    double term = s.x;
    for (int i = 0; i <= s.n; i++) {
        s.ketqua += term;
        term *= s.x * s.x;
    }
}

// Bai 15: S = 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+...+n)
void tinh15(TongInfo &s) {
    s.ketqua = 0;
    double tongK = 0;
    for (int i = 1; i <= s.n; i++) {
        tongK += i;
        s.ketqua += 1.0 / tongK;
    }
}

// Bai 16: S = x + x^2/(1+2) + x^3/(1+2+3) + ... + x^n/(1+2+...+n)
void tinh16(TongInfo &s) {
    s.ketqua = 0;
    double tongK = 0;
    double termX = 1;
    for (int i = 1; i <= s.n; i++) {
        tongK += i;
        termX *= s.x;
        s.ketqua += termX / tongK;
    }
}

// Bai 17: S = x/1! + x^2/2! + x^3/3! + ... + x^n/n!
void tinh17(TongInfo &s) {
    s.ketqua = 0;
    double termX = 1;
    double gt    = 1;
    for (int i = 1; i <= s.n; i++) {
        termX *= s.x;
        gt    *= i;
        s.ketqua += termX / gt;
    }
}

// Bai 18: S = 1 + x^2/2! + x^4/4! + ... + x^(2n)/(2n)!
void tinh18(TongInfo &s) {
    s.ketqua = 1;
    double termX = 1;
    double gt    = 1;
    for (int i = 1; i <= s.n; i++) {
        termX *= s.x * s.x;
        gt    *= (2 * i - 1) * (2 * i);
        s.ketqua += termX / gt;
    }
}

// Bai 19: S = 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!
void tinh19(TongInfo &s) {
    s.ketqua = 1 + s.x;
    double termX = s.x * s.x * s.x;   // bat dau tu x^3
    double gt    = 6;                  // 3!
    for (int i = 1; i <= s.n; i++) {
        s.ketqua += termX / gt;
        termX *= s.x * s.x;
        gt    *= (2 * i + 2) * (2 * i + 3);
    }
}
