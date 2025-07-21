#include <stdio.h>

int main(void)
{
    int i, k, a[5][5];
    printf("Pinakas 5x5\n");
    for (i = 0; i < 5; i++)
    {
        for (k = 0; k < 5; k++)
        {
            if ((i + k) == 4)
                a[i][k] = 0;
            else if (i + k < 4)
                a[i][k] = 3;
            else 
                a[i][k] = -3;
            printf("\t%d", a[i][k]);
        }
        printf("\n");
    }
    return 0;
}