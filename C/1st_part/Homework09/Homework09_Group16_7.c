#include <stdio.h>

int main(void)
{
    int x[5][5], i, k, pl1, sum = 0, l = 0, *p1;
    for (i = 0; i < 5; i++)
    {
        pl1 = 0;
        for (k = 0; k < 5; k++)
        {
            p1 = &*(*(x + i) + k);
            printf("Dwse enan akeraio gia thn %d sthlh kai %d grammh: ", k + 1, i + 1);
            scanf("%d", p1);
            pl1 += *p1;
        }
        printf("\n");
        if (i > 0 && sum < pl1)
        {
            sum = pl1;
            l = i;
        }
        else if (i == 0)
            sum = pl1;
        if (i == 4)
            printf(" | Megisto athroisma ->  %d | | grammh ->  %dh |\n", sum, l + 1);
    }
    for (k = 0; k < 5; k++)
    {
        pl1 = 0;
        for (i = 0; i < 5; i++)
        {
            p1 = &*(*(x + i) + k);
            pl1 += *p1;
        }
        if (k > 0 && sum < pl1)
        {
            sum = pl1;
            l = k;
        }
        else if (k == 0)
            sum = pl1;
        if (k == 4)
            printf(" | Megisto athroisma ->  %d | | sthlh ->  %dh |\n", sum, l + 1);
    }
    return 0;
}