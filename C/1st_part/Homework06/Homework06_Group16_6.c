#include <stdio.h>

int main(void)
{
    int x1, x[100], i, y = 0, k;
    for (i = 0; i < 100; i++)
    {
        printf("Dwse enan akeraio airthmo: ");
        scanf("%d", &x1);
        if (i == 0)
            y = x1;
        if (y > x1)
        {        
            x[i] = x1;
            y = x1;
        }
    }
    return 0;
}