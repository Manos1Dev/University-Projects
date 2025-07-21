#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x[3][5], i, k, sum, y = -1;
    srand(time(NULL));
    for (k = 0; k < 5; k++)
    {
        sum = 0;
        for (i = 0; i < 3; i++)
        {
            if (i != 2)
            {
                x[i][k] = rand() % 21;
                sum += x[i][k];
            }
            else
                x[i][k] = 50 - sum;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 5; k++)
            printf("%d\t", x[i][k]);
        printf("\n");
    }
    printf("\n");
    for (k = 0; k < 5; k++)
    {
        for (i = 0; i < 2; i++)
        {
            if (y == -1 && x[i][k] < x[i + 1][k])
                y = x[i][k];
            else if (y >= 0 && y < x[i + 1][k])
                y = y;
            else
                y = x[i + 1][k];
        }
        printf("Mikrotero stoixeio %dhs sthlh = %d\n", k + 1, y);
        y = -1;
    }
    return 0;
}