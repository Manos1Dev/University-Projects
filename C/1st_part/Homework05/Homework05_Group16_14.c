#include <stdio.h>

int main(void)
{
    int i, pl = 0, pl2 = 0;
    float x;
    printf("Dwse 100 pragmatikous arithmous\n");
    scanf("%f", &x);
    int y = x;
    int z = x;
    for (i = 1; i <= 100; i++)
    {
        if (i > 1 && x > y)
        {
            y = x;
            pl++;
        }
        if (i > 1 && x > z)
        {
            z = x;
            pl2++;
        }
        // printf("   EEE   %d %d\n", y, z);
        if (pl == 0)
            y = x;
        if (pl2 == 0)
            z = x;
        z = x;
        if (i < 5)
            scanf("%f", &x);
    }
    printf("Oi duo megaluteres times einai %d %d", y, z);
    return 0;
}