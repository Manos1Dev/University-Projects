#include <stdio.h>

int main(void)
{
    int x[20], i = 0, sum = 0, y;
    while (1)
    {
        printf("Dwse enan akeraio: ");
        scanf("%d", &y);
        if (y == -1)
            break;
        else if (i < 20)
        {
            x[i] = y;
            sum += x[i];
            i++;
        }
        else
        {
            printf("O pinakas gemise\n");
            break;
        }
    }
    if (i > 0)
        printf("O MO einai %d \n", sum / i);
    return 0;
}