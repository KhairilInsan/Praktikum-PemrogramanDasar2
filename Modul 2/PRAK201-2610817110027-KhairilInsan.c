#include <stdio.h>

int main()
{
    char Name[50], NIM[50], Class[50], TTL[50], Address[50], Hobby[50], Number[50];
    printf("Name: ");
    scanf("%49s", Name);
    printf("NIM: ");
    scanf("%49s", NIM);
    printf("Kelas Paralel: ");
    scanf("%49s", Class);
    printf("Tempat/Tanggal Lahir: ");
    scanf("%49s", TTL);
    printf("Alamat: ");
    scanf("%49s", Address);
    printf("Hobby: ");
    scanf("%49s", Hobby);
    printf("No. HP: ");
    scanf("%49s", Number);

    printf("Nama \t\t\t: %s\n", Name);
    printf("NIM \t\t\t: %s\n", NIM);
    printf("Kelas Paralel \t\t: %s\n", Class);
    printf("Tempat/Tanggal Lahir \t: %s\n", TTL);
    printf("Alamat \t\t\t: %s\n", Address);
    printf("Hobby \t\t\t: %s\n", Hobby);
    printf("No. HP \t\t\t: %s\n", Number);
    return 0;
}