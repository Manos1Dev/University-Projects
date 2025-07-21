#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x[5][5], i, k;
    srand(time(NULL));
    printf("\n-------------------------------------------------\n");
    for (i = 0; i < 5; i++)
    {        
        printf("|   ");
        for (k = 0; k < 5; k++)
        {
            x[i][k] = rand() % 10;
            printf("\t%d", x[i][k]);
        }
        printf("       |");
        printf("\n");
    }
    printf("-------------------------------------------------\n");
    printf("\n-------------------------------------------------\n");
    for (i = 0; i < 5; i++)
    {        
        printf("|   ");
        for (k = 0; k < 5; k++)
        {
            if (i + k == 4)
                x[i][k] = 0;
            else
                x[i][k] = i + k;
            printf("\t%d", x[i][k]);
        }
        printf("       |");
        printf("\n");
    }
    printf("-------------------------------------------------\n");
    return 0;
}