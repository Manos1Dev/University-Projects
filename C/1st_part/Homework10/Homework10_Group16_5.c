#include <stdio.h>

int bathmoi(int x, int i);

int main(void)
{
    int x, i, k;
    for (i = 0; i < 5; i++)
    {
        printf("Dwse 5 bathmous gia 5 mathites, o %dos mathiths exei: ", i + 1);
        scanf("%d", &x);
        i = bathmoi(x, i);
    }
    return 0;
}

int bathmoi(int x, int i)
{
    if (x >= 0 && x < 10)
        printf("Need help\n");
    else if (x >= 10 && x <= 13)
        printf("Dangerous Zone\n");
    else if (x > 13 && x <= 16)
        printf("Good\n");
    else if (x > 16 && x <= 18)
        printf("Very Good\n");
    else if (x > 18 && x <= 20)
        printf("Excellent\n");
    else 
    {
        printf("Den edwses sto diathma [0, 20]\n");
        return i - 1;
    }
    return i;
    printf("\n");
}