#include <stdio.h>
// Ham hoan doi vi tri 2 bien
void hoanDoi(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    // Khai bao bien
    int x = 10;
    int y = 20;
    // In gia tri ban dau cua 2 bien
    printf("Truoc khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    // goi ham hoan doi gia tri
    hoanDoi(&x, &y);
    // In gia tri sau khi hoan doi
    printf("Sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
