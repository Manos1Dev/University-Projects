#include <stdio.h>

int main(void)
{
    int i, k, x[5][5], y;
    for (i = 0; i < 5; i++)
    {
        printf("Dwse enan arithmo gia thn %d grammh\n", i + 1);
        for (k = 0; k < 5; k++)
        {
            printf("Dwse enan arithmo gia thn %d sthlh: ", k + 1);
            scanf("%d", &x[i][k]);
        }
        
    }
    printf("Dwse enan akeraio sto diasthma [1, 5]: ");
    scanf("%d", &y);
    for (i = 0; i < 4; i++)
    {
        for (k = 0; k < 4; k++)
        {
            if (y == 1 && k != 0)
                x[i][k - 1] = x[i][k];
                // if ()
            else if (y == 2 && k != 1)
                x[i][k] = x[i][k- 1];
            else if (y == 3 && k != 2)
                x[i][k - 1] = x[i][k];
            else if (y == 4 && k != 3)
                x[i][k - 1] = x[i][k];
            else if (y == 5 && k != 4)
                x[i][k - 1] = x[i][k];
            printf("%d\t ", x[i][k]);
        }
        printf("\n");
    }
    return 0;
}