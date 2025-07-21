#include <stdio.h>

int main(void)
{
    int x[100], i = 0, y;
    while (1)
    {
        printf("Dwse enan akeraio: ");
        scanf("%d", &y);
        if (i > 0 && y < x[i - 1])
        {
            x[i] = y;
            i++;
        }
        else if (i == 0)
        {
            x[i] = y;
            i++;
        }
        if (i == 100)
            break;
    }
    printf("\nO pinakas egine: ");
    for (i = 0; i < 100; i++)
        printf(" %d ", x[i]);
    return 0;
}