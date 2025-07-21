#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a[2][3], b[3][2], c[2][2], i, k, s1 = 0, s2 = 0;
    srand(time(NULL));
    for (i = 0; i < 2; i++)
        for (k = 0; k < 2; k++)
            c[i][k] = 0;
    printf("-----------------------------------\n");
    for (i = 0; i < 2; i++)
    {
        for (k = 0; k < 3; k++)
        {
            a[i][k] = rand() %  18 - 9;
            printf("%d\t", a[i][k]);
        }
        printf("\n");
    }
    printf("-----------------------------------\n");
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 2; k++)
        {
            b[i][k] = rand() %  18 - 9;
            printf("%d\t", b[i][k]);
        }
        printf("\n");
    }
    printf("-----------------------------------\n");
    for (i = 0; i < 1; i++)
    {
        for (k = 0; k < 3; k++)
        {
            c[s1][s2] += (a[i][k] * b[k][i]);
            c[s1][s2 + 1] += (a[i][k] * b[k][i + 1]);
            c[s1 + 1][s2] += (a[i + 1][k] * b[k][i]);
            c[s1 + 1][s2 + 1] += (a[i + 1][k] * b[k][i + 1]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (k = 0; k < 2; k++)
            printf("%d\t", c[i][k]);
        printf("\n"); 
    }

    return 0;
}