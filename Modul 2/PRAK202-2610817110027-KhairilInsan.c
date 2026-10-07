#include <stdio.h>

int main()
{
    float firstnumber, secondnumber, total;
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &firstnumber);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &secondnumber);

    total = firstnumber + secondnumber;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", firstnumber, secondnumber, total);

    return 0;
}