#include <stdio.h>

int main()
{
    int grade;
    printf("Masukkan nilai: ");
    scanf("%d", &grade);

    if (grade >= 80)
    {
        printf("A\n");
    }
    else if (grade >= 70)
    {
        printf("B\n");
    }
    else if (grade >= 60)
    {
        printf("C\n");
    }
    else if (grade >= 50)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }

    return 0;
}