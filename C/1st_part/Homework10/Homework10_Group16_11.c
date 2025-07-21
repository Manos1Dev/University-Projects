#include <stdio.h>

void sunarthsh(int a, int b);

int main(void)
{
    int a, b;
    printf("Dwse duo akeraious: (h timh tou prwtou tha prepei na einai mikroterh) ");
    scanf("%d%d", &a, &b);
    sunarthsh(a, b);
    return 0;
}

void sunarthsh(int a, int b)
{
    int i, c, y;
    for (i = 0; i < 10; i++)
    {
        printf("Dwse 100 akeraious sto diasthma [%d, %d], %dos = ", a, b, i + 1);
        scanf("%d", &c);
        if (c >= a && c <= b)
        {
            if (i == 0)
                y = c;
            else
                if (c < y)
                    y = c;
        }
        else
            i--;
    }
    printf("O mikroteros einai o %d\n", y);
}