#include <stdio.h>

int main(void)
{
    int i, k, x[3][4], ki, y;
    for (i = 0; i < 3; i++)
    {
        printf("Dwse enan arithmo gia thn %d grammh\n", i + 1);
        for (k = 0; k < 4; k++)
        {
            printf("Dwse enan arithmo gia thn %d sthlh: ", k + 1);
            scanf("%d", &x[i][k]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 4; k++)
        {
            for (ki = 0; ki < k + 1; ki++)
            {
                if ((k > 0) && x[i][k] > x[i][k - 1] && x[i][k] > x[i][k - 2] && x[i][k] > x[i][k - 3])
                {
                    x[i][k - 1] = x[i][k];
                    x[i][k - 2] = x[i][k];
                    x[i][k - 3] = x[i][k];
                }
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 4; k++)
        {
            printf("%d  ", x[i][k]);
        }
        printf("\n");
    }
    return 0;
}