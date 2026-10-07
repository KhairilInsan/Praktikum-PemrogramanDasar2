#include <stdio.h>
#include <math.h>

int main()
{
    float radius, tall, pi, volume, area, circumference;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);
    printf("Masukkan tinggi tabung: ");
    scanf("%f", &tall);
    pi = 22.0 / 7.0;
    volume = pi * radius * radius * tall;
    area = 2 * pi * radius * (radius + tall);
    circumference = 2 * pi * radius;

    printf("Volume: %.2f\n", volume);
    printf("Luas: %.2f\n", area);
    printf("Keliling: %.2f\n", circumference);
    return 0;
}