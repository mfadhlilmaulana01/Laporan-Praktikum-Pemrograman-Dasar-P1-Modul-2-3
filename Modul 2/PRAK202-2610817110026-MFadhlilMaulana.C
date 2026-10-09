#include <stdio.h>

int main() {
    float a, b;

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);

    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    printf("Hasil penjumlahan dari \"%g\" dan \"%g\" adalah: \"%.2f\"\n", a, b, a + b);

    return 0;
}