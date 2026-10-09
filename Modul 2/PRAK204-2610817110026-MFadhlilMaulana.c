#include <stdio.h>

int main() {
    float radius, height, phi, Volume, area, circumference;

    printf("Masukkan jari-jari: ");
    scanf("%f", &radius);
    printf("Masukkan tinggi bejana: ");
    scanf("%f", &height);

    phi = 22.0 / 7.0;

    Volume = phi * radius * radius * height;
    area = 2 * phi * radius * (radius + height);
    circumference = 2 * phi * radius;

    printf("Volume: %.2f\n", Volume);
    printf("Luas Permukaan: %.2f\n", area);
    printf("Keliling Alas: %.2f\n", circumference);

    return 0;
}