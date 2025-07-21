#include <stdio.h>

int main(void)
{
    int x, y, pl = 0, x1, a = 0, i, k1 = 0, k2 = 0;
    // y = x;
    do
    {
        printf("Dwse enan thetiko arithmo: ");
        scanf("%d", &x);
    } while (x < 0);
    y = x;
    while (y != 0)
    {
        pl++;
        y = y / 10;
    }
    y = x;
    while (y > 0)
    {
        x1 = y % 10;
        for (i = 1; i <= pl; i++)
        {
            if (i == 1)
                k1 = k1 + ((a + 1) * x1);
            else
                k1 = (k1 * x1);
        }
        k2 = k2 + k1;
        k1 = 0;
        y = y / 10;
    }
    if (k2 == x)
        printf("O arithmos einai armstrong");
    else
        printf("O arithmos den einai armstrong");
    return 0;
}