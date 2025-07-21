#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define o 50
#define n1 10

int main(void)
{
    int x[n1][n1], i, k, l1, m = 0, p;
    srand(time(NULL));
    for (i = 0; i < n1; i++)
    {
        for (k = 0; k < n1; k++)
        {
            if (i + k == 9)
                x[i][k] = rand() % o + 1;
        }
    }
    for (i = 0; i < n1; i++)
    {
        for (k = 0; k < n1; k++)
        {
            if (i + k == 9)
            {
                if (m == 0 && x[i][k] < x[i - 1][k + 1])
                {
                    l1 = x[i][k];
                    m++;
                }
                else if (l1 > x[i - 1][k + 1])
                    l1 = x[i - 1][k + 1];
            }
        }
    }
    printf("Mikroteros arithmos sthn deuterousa diagwnio = %d\n", l1);
    for (i = 0; i < n1; i++)
    {
        for (k = 0; k < n1; k++)
        {
            if (i + k > 9)
                x[i][k] = rand() % l1;
            else if (i + k < 9)
                x[i][k] = rand() % o + (l1 + 1);
            printf("%d\t", x[i][k]);
        }
        printf("\n");
    }         
    return 0;
}