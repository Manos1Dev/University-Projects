#include <stdio.h>

int main(void)
{
    int x[10], i, k, pl1;
    for (i = 0; i < 10; i++)
    {
        printf("Dwse enan akeraio: ");
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 10; i++)
    {
        pl1 = 0;
        for (k = 0; k < 10; k++)
        {
            if (x[i] == x[k])
            {
                pl1++;
                if (pl1 > 1) 
                    x[k] = -99;
            }
        }
        pl1 = 0;
    }
    for (i = 0; i < 10; i++)
        printf("%d ", x[i]);
    return 0;
}