#include <stdio.h>

int main(void)
{
    int x1[10], i, k, pl1 = 0, y;
    for (i = 0; i < 10; i++)
    {
        printf("Dwse enan arithmo, %dos einai: ", i + 1);
        scanf("%d", &x1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        y = pl1;
        for (k = i; k > 0; k--)
        {
            if (x1[i] == x1[k])
            {
                pl1++;
                // y = pl1;
            }
        }
        if (pl1 > y)
            pl1 = y;
    }
    printf("\n%d\n", pl1);
    return 0;
}