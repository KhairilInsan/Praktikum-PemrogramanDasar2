#include <stdio.h>

int main()
{
    float a, b, i, j, x, y, total;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &b);
    printf("Masukkan Nilai Ketiga: ");
    scanf("%f", &i);
    printf("Masukkan Nilai Keempat: ");
    scanf("%f", &j);
    printf("Masukkan Nilai Kelima: ");
    scanf("%f", &x);
    printf("Masukkan Nilai Keenam: ");
    scanf("%f", &y);

    total = (a - b) * i / j - (x + y);

    printf("%.3f\n", total);

    return 0;
}