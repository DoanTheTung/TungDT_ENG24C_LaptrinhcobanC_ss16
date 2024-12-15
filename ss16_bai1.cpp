#include <stdio.h>
int main() {
    // Khai báo bien
    int bien = 42;
    // Khai bao con tro cua bien
    int*conTro= &bien;
    // Cách 1: In ra gia tri va dia chi bang cach truc tiep
    printf("Gia tri cua bien: %d\n", bien);
    printf("Dia chi cua bien: %p\n", (void*)&bien);
    // Cách 2: In ra gia tri va dia chi thong qua bien cua con tro
    printf("Gia tri cua bien qua con tro: %d\n", *conTro);
    printf("Dia chi cua bien qua con tro: %p\n", (void*)conTro);
    return 0;
}
