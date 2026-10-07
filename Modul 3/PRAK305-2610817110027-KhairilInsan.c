#include <stdio.h>

int main()
{
    int time, day, remaining, hour, minute, second;
    printf("Masukkan waktu: ");
    scanf("%d", &time);
    day = time / 86400;
    remaining = time % 86400;
    hour = remaining / 3600;
    remaining = remaining % 3600;
    minute = remaining / 60;
    second = remaining % 60;

    if (time < 60)
    {
        printf("00:00:%02d", second);
    }
    else if (time < 3600)
    {
        printf("00:%02d:%02d", minute, second);
    }
    else if (time < 86400)
    {
        printf("%02d:%02d:%02d", hour, minute, second);
    }
    else if (time > 86400)
    {
        printf("%d hari %02d:%02d:%02d", day, hour, minute, second);
    }
    else if (time == 86400)
    {
        printf("%d hari 00:00:00", day);
    }

    return 0;
}