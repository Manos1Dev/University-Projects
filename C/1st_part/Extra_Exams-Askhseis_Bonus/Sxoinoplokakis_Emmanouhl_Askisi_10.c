#include <stdio.h>

int main(void)
{
    int x[3][3], i, k, grammh = 0, sthlh = 0, mikroteros1 = 0, mikroteros2 = 0;
    for (k = 0; k < 3; k++)
        for (i = 0; i < 3; i++)
        {
            printf("Dwse mia akeraia timh: ");
            scanf("%d", &x[i][k]);
        }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
            printf("%d ", x[i][k]);
        printf("\n");
    }
    mikroteros1 = x[0][0];
    mikroteros2 = x[0][0];
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            if (x[i][k] < mikroteros1)
            {
                mikroteros1 = x[i][k];
                grammh = i;
                sthlh = k;
            }
            if (i == k && x[i][k] < mikroteros2)
                mikroteros2 = x[i][k];
        }
    }
    printf("To elaxisto stoixeio einai sthn grammh %d kai sthn sthlh = %d kai to elaxisto stoixeio ths kurias diagwnios einai %d\n", grammh, sthlh, mikroteros2);
    return 0;
}