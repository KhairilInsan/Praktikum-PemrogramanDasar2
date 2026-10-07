#include <stdio.h>
#include <math.h>

int main()
{
    int A, B;
    double C, base, tall, circumference, area;

    printf("Masukkan nilai A: ");
    scanf("%d", &A);
    printf("Masukkan nilai B: ");
    scanf("%d", &B);

    C = (B * B) - (A * A);
    base = sqrt(C);
    tall = A;
    circumference = A + B + base;
    area = base * tall / 2;

    printf("Alas: %.0f cm\n", base);
    printf("Tinggi: %.0f cm\n", tall);
    printf("Keliling: %.0f cm\n", circumference);
    printf("Luas: %.0f cm^2\n", area);

    return 0;
}