#include <stdio.h>
// Ham in ra cac phan tu trong mang
void inMang(int* mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}
int main() {
    // Khai bao va gan gia tri cho mang
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    // Goi ham in phan tu trong mang
    printf("Cac phan tu trong mang: ");
    inMang(mang, kichThuoc);
    return 0;
}

