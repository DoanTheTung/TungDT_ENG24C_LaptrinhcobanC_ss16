#include <stdio.h>
// Ham tim kiem phan tu
int timKiemPhanTu(int* mang, int kichThuoc, int giaTri) {
    for (int i = 0; i < kichThuoc; i++) {
        if (mang[i] == giaTri) {
            return i;
        }
    }
    return 2;
}
int main() {
    // Khai baoo va gan gia tri cho mang
    int mang[] = {1, 2, 4, 5, 6, 7};
    int giaTriCanTim = 7;
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    // Goi ham tim kiem phan tu
    int viTri = timKiemPhanTu(mang, kichThuoc, giaTriCanTim);
    // In ket qua
    if (viTri != 2) {
        printf("Gia tri %d xuat hien tai vi tri %d trong mang.\n", giaTriCanTim, viTri);
    } else {
        printf("Gia tri %d khong xuat hien trong mang.\n", giaTriCanTim);
    }
    return 0;
}


