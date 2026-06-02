#include "baitap_tong.h"

typedef void (*HamTinh)(TongInfo &);

int main() {
    // Mang con tro ham de goi theo so bai
    HamTinh ds[] = {
        nullptr,  // index 0 bo trong
        tinh1,  tinh2,  tinh3,  tinh4,  tinh5,
        tinh6,  tinh7,  tinh8,  tinh9,  tinh10,
        tinh11, tinh12, tinh13, tinh14, tinh15,
        tinh16, tinh17, tinh18, tinh19
    };

    // Cac bai can them bien x
    bool canX[] = {
        false,
        false, false, false, false, false,  // 1-5
        false, false, false, false, true,   // 6-10
        false, true,  true,  true,  false,  // 11-15
        true,  true,  true,  true           // 16-19
    };

    cout << "========================================\n";
    cout << "   CHUONG TRINH TINH 19 CHUOI TONG\n";
    cout << "========================================\n";
    cout << "Chon bai (1-19, 0 de thoat): ";

    int chon;
    while (cin >> chon && chon != 0) {
        if (chon < 1 || chon > 19) {
            cout << "  Bai khong hop le! Nhap lai: ";
            continue;
        }

        TongInfo s;
        if (canX[chon])
            nhapNX(s);
        else
            nhapN(s);

        ds[chon](s);
        xuat(s, chon);

        cout << "Chon bai (1-19, 0 de thoat): ";
    }

    cout << "Tam biet!\n";
    return 0;
}
