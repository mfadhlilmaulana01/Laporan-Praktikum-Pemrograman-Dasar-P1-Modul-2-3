#include <stdio.h>

int main() {
    float a, b, i, j, x, y, result;

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);
    printf("Masukkan angka ketiga: ");
    scanf("%f", &i);
    printf("Masukkan angka keempat: ");
    scanf("%f", &j);
    printf("Masukkan angka kelima: ");
    scanf("%f", &x);
    printf("Masukkan angka keenam: ");
    scanf("%f", &y);
    result = (a - b) * (i / j) - (x + y);

    printf("%.3f\n", result);

    return 0;
}