#include <stdio.h>

int main(void)
{
    int m, n, i, k;
    printf("Dwse duo akeraious\n");
    scanf("%d%d", &m, &n);
    for (m ; m >= 0; m--)
    {
        printf("+");
        for (i = n; i > 0; i--)
        {
            printf("--+");
        }
        if (m == 0)
            break;
        printf("\n");
        for (k = n; k >= 0; k--)
        {
            printf("|  ");
        }
        printf("\n");
        for (n; n < 0; i--)
        {
            printf("--");
        }
    }
    return 0;
}