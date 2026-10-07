#include <stdio.h>

int main()
{
    int whole_number;
    printf("Masukkan bilangan: ");
    scanf("%d", &whole_number);

    if (whole_number == 0)
    {
        printf("Nol\n");
    }
    else if (whole_number < 10)
    {
        printf("Satuan\n");
    }
    else if (whole_number < 20)
    {
        printf("Belasan\n");
    }
    else if (whole_number < 100)
    {
        printf("Puluhan\n");
    }
    else
    {
        printf("Anda Menginput Melebihi Limit Bilangan \n");
    }

    return 0;
}