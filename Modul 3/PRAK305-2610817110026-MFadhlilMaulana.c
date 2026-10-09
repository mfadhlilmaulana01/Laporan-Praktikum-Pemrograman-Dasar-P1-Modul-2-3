#include <stdio.h>

int main() {
    int second, day, hour, minute, second_left;

    printf("Masukkan detik: ");
    scanf("%d", &second);

    day = second / (24 * 3600);
    second_left = second % (24 * 3600);

    hour = second_left / 3600;
    second_left %= 3600;

    minute = second_left / 60;
    second_left %= 60;

    if (day <= 0)
        printf("%02d:%02d:%02d\n", hour, minute, second_left);
    else
        printf("%d hari %02d:%02d:%02d\n", day, hour, minute, second_left);

    return 0;
}