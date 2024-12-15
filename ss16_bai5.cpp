#include <stdio.h>
// Ham cap nhat phan tu trong mang
void capNhatPhanTu(int* mang, int giaTriMoi, int viTri) {
    mang[viTri] = giaTriMoi;
}
int main() {
    // Khai bao va gan gia tri cho mang
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    // In mang ban dau
    printf("Mang ban dau: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    // Goi ham cap nhat phan tu trong mang
    capNhatPhanTu(mang, 10, 2);
    // In mang sau khi cap nhat
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    return 0;
}


