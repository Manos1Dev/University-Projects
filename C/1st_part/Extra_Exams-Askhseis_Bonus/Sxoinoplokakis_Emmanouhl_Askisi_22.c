#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 5
#define n 3

int main(void)
{
    srand(time(NULL));
    int r[n][n], i, k, freq[m + 1], j, ki, sum;
    for (i = 0; i < m + 1; i++)
        freq[i] = 0;
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n; k++)
        {
            r[i][k] = rand() % m;
            printf("%d ", r[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    for (j = 0; j < n * n; j++)
        for (i = 0; i < n - 1; i++)
        {
            ki = r[i][k];
            for (sum = 0; sum < m + 1; sum++)
            {
                if (ki == freq[sum])
                {
                    freq[sum] += 1;
                    break;
                }
                else
                    freq[sum] = ki;
            }
        }
    for (i = 0; i < m + 1; i++)
        printf("%d\n", freq[i]);
    return 0;
}