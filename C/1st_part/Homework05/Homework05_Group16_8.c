#include <stdio.h>

int main(void)
{
    int i, x, y, k = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Dwse enan arithmo\n");
        scanf("%d", &x);
        if (i > 0)
        {
            if (y > x)
            {
                k = k + 1;
            }
        }
        y = x;
    }
    printf("%d", k);
    return 0;
}