#include <stdio.h>

int main(void)
{
    int x[3][5], i, k, ki, sum, y, pin[0];
    for (i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            x[i][k] = 0;
            break;
        }
        for (k = 0; k < 5; k++)
        {
            printf("Dwse akeraies times sto diasthma [0, 20]: ");
            scanf("%d", &y);
            if (y >= 0 && y <= 20)
                x[i][k] = y; 
            else
            {
                printf("Akurh timh, ksana prospathise\n");
                k--;
            }
        }
    }
    printf("\n");
    for (k = 0; k < 5; k++)
    {
        sum = 0;
        for (i = 0; i < 2; i++)
        {
            if (i == 1 && x[i][k] < x[i - 1][k])
                pin[0] = x[i][k];
            else
                pin[0] = x[i - 1][k];
            sum += x[i][k];
            if (i == 1 && sum < 50)
                x[i + 1][k] = 50 - sum;
        }
        sum = 0;
        printf("H elaxisth timh sthn sthlh %d einai h %d\n", k + 1, pin[0]);
    }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 5; k++)
            printf("%4d  ", x[i][k]);
        printf("\n");
    }
    return 0;
}