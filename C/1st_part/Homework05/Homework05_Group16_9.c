#include <stdio.h>

int main(void)
{
    int x, i, pl = 0;
    printf("Dwse enan akeraio arithmo\n");
    scanf("%d", &x);
    int y = x;
    for (i = 0; i <= 31; i++)
    {
        x = x >> (i + 1);
        printf("\n%d\n", x);
        if (x & 1 == 1)
            pl++;
        x = y;
    }
    printf("%d", pl);
    return 0;
}