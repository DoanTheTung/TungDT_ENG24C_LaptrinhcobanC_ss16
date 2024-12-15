#include <stdio.h>
// Ham tinh tong 2 so nguyen
void tinhTong(int* a, int* b, int* ketQua) {
    *ketQua = *a + *b;
}
int main() {
    // Khai bao 2 so nguyen
    int number1 = 15;
    int number2 = 25;
    int ketQua = 0;
    // Goi ham tinh tong 2so nguyen
    tinhTong(&number1, &number2, &ketQua);
    // In ket qua
    printf("Tong cua %d va %d la: %d\n", number1, number2, ketQua);
    return 0; 
}

