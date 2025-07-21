#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x[5][4], i, k, sum, a;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {    
        sum = 0;
        for (k = 0; k < 4; k++)
        {
            a = rand() % 101 + 1;
            if (sum >= 100)
                break;
            else
            {
                if (k == 0)
                    x[i][k] = a;
                else
                    if (a + sum >= 100)
                        break;
                    else
                    {
                        sum += a;
                        x[i][k] = sum;
                    }
            }
        }
        while (1)
        {
            if (sum < 100)
            {
                a = rand() % (100 - sum) + 1;
                sum += a;
            }
            else if (sum >= 100)
                break;
        }
        printf("To athroisma ths %dh grammh egine sum = %d \n", i + 1, sum);
    }
    return 0;
}