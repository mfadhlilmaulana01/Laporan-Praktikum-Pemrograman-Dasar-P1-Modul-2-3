#include <stdio.h>
#include <math.h>

int main() {
    int height, hypotenuse, base, area, circumference;

    printf("Tinggi: ");
    scanf("%d", &height);

    printf("Sisi miring: ");
    scanf("%d", &hypotenuse);

    base = (int) sqrt(hypotenuse * hypotenuse - height * height);
    area = (int) (0.5 * base * height);
    circumference = hypotenuse + height + base;

    printf("\n");
    printf("Alas: %dcm\n", base);
    printf("tinggi: %dcm\n", height);
    printf("Keliling: %dcm\n", circumference);
    printf("Luas: %dcm^2\n", area);

    return 0;
}