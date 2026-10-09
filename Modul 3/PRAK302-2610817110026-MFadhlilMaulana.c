#include <stdio.h>

int main() {
    int assigntment_grade;

    printf("Masukkan nilai tugas: ");
    scanf("%d", &assigntment_grade);

    if (assigntment_grade >= 80) {
        printf("A\n");
    } else if (assigntment_grade >= 70) {
        printf("B\n");
    } else if (assigntment_grade >= 60) {
        printf("C\n");
    } else if (assigntment_grade >= 50) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}