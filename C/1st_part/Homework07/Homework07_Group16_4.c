#include <stdio.h>

int main(void)
{
    int i, k, x[3][4], y = 0;
    for (i = 0; i < 3; i++)
    {
        printf("Dwse enan arithmo gia thn %d grammh\n", i + 1);
        for (k = 0; k < 3; k++)
        {
            printf("Dwse enan arithmo gia thn %d sthlh: ", k + 1);
            scanf("%d", &x[i][k]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            if (i + k == 1)
            {
                y = x[1][0];
                x[1][0] = x[i][k];
                x[i][k] = y;
            }
            else if (k == 2 && i == 0)
            {
                y = x[2][0];
                x[2][0] = x[i][k];
                x[i][k] = y;
            }
            else if (k == 2 && i == 1)
            {
                y = x[2][1];
                x[2][1] = x[i][k];
                x[i][k] = y;
            }
            printf("%d   ", x[i][k]);
        }
        printf("\n");
    }
    return 0;
}