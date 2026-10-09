#include <stdio.h>

int main() {
    int a, b;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    if (a < b) {
        printf("%d %d\n", a, b);
    } else {
        printf("%d %d\n", b, a);
    }

    return 0;
}