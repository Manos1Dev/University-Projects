#include <stdio.h>

int telikos_bathmos(int a, int b);

int main(void)
{
    int i, a, b, bathmoi = 0;
    printf("Dwse bathmous ergasthriou kai thewrias se 3 foithtes. (o bathmos tha prepei na einai apo 0 ews 10)\n");
    for (i = 0; i < 3; i++)
    {
        printf("O %dos phre: ", i + 1);
        scanf("%d%d", &a, &b);
        if (a < 0 || a > 10 || b < 0 || b > 10)
        {
            printf("O enas apo tous duo h kai oi duo bathmoi pou edwses den einai apo 0 ews 10\n");
            i--;
        }
        else
            bathmoi += telikos_bathmos(a, b);
    }
    printf("Phran %d mathites apo 8 mexri 10\n", bathmoi);
    return 0;
}

int telikos_bathmos(int a, int b)
{
    int k;
    k = ((a * 0.7) + (b * 0.3));
    if (k >= 8 && k <= 10)
        return 1;
    else
        return 0;
}