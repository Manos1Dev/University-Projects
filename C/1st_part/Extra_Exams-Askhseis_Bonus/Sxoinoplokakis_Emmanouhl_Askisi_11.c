#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define p 10

int main(void)
{
    int i, k, x[p], sum = 0, pl1 = 0, pl2 = 0;
    srand(time(NULL));
    for (i = 0; i < p; i++)
    {
        x[i] = rand() % 7;
        sum += x[i];
        if (i > 0)
            for (k = i - 1; k >= 0; k--)
            {
                if (x[i] == x[k])
                {
                    pl1++;
                }
                else
                    break;
            }
        printf("| %dh rhpsh = %d | ", i + 1, x[i]);
        if (x[i] & 1 == 1)
            pl2++;
    }
    printf("\n");
    if (sum <= 2)
        printf("To apotelesma einai mikrotero h iso tou 2\n");
    printf("O sunolikos arithmos sunexomenwn thesewn me to idio apotelesma einai %d \n", pl1);
    printf("To apotelesma einai %d\n", pl2);
    return 0;
}