#include <stdio.h>

int main() {
    char name[100];
    char college_ID[50];
    char parallel_class[50];
    char place_and_date_of_birth[50];
    char address[100];
    char hobby[100];
    char phone_number[50];

    printf("Nama                   : ");
    scanf(" %[^\n]", name);
    printf("NIM                    : ");
    scanf(" %[^\n]", college_ID);
    printf("Kelas Paralel          : ");
    scanf(" %[^\n]", parallel_class);
    printf("Tempat/Tanggal Lahir   : ");
    scanf(" %[^\n]", place_and_date_of_birth);
    printf("Alamat                 : ");
    scanf(" %[^\n]", address);
    printf("Hobby                  : ");
    scanf(" %[^\n]", hobby);
    printf("No. HP                 : ");
    scanf(" %[^\n]", phone_number);
    printf("\n");

    printf("Nama                   : %s\n", name);
    printf("NIM                    : %s\n", college_ID);
    printf("Kelas Paralel          : %s\n", parallel_class);
    printf("Tempat/Tanggal Lahir   : %s\n", place_and_date_of_birth);
    printf("Alamat                 : %s\n", address);
    printf("Hobby                  : %s\n", hobby);
    printf("No. HP                 : %s\n", phone_number);

    return 0;
}