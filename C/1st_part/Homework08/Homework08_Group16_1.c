#include <stdio.h>

int main(void)
{
    int i, k, x[3][5], pl1 = 0;
    printf("Ftiaxe enan 3x5 pinaka: ");
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 5; k++)
            scanf("%d", &x[i][k]);
    }
    for (k = 0; k < 5; k++)
    {
        for (i = 1; i < 3; i++)
        {
            
            if (x[i][k] == x[i - 1][k] || x[i][k] == x[i - 2][k])
                pl1++;
        }
        // if (pl1 > 0)
        // {
        //     x[i][k] = 0;
        //     x[i][k - 1] = 0;
        //     x[i][k - 2] = 0;
        // }
    }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 5; k++)
        {
            printf("%d   ", x[i][k]);
        }
        printf("\n");
    }
    return 0;
}