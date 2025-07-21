#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int taksinomisi(int x[10]);

int main(void)
{
    int x[10], i, k;
    srand(time(NULL));
    printf("O Pinakas einai: ");
    for (i = 0; i < 10; i++)
    {
        x[i] = rand() % 15 + 5;
        printf("%d\t", x[i]);
    }
    k = taksinomisi(x);
    switch (k)
    {
        case 0:
            printf("\nDen einai taxinomimenos\n");
        break;
        case 1:
            printf("\nEinai taxinomimenos kata auksousa seira\n");
        break;
        case 2:
            printf("\nEinai taxinomimenos kata fthinousa seira\n");
        break;
    }
    return 0;
}

int taksinomisi(int x[10])
{
    int i, pl1 = 0, pl2 = 0;
    for (i = 0; i < 9; i++)
    {
        if (x[i] < x[i + 1])
            pl1++;
        if (x[i] > x[i + 1])
            pl2++;
    }
    if (pl1 == 9)
        return 1;
    else if (pl2 == 9)
        return 2;
    else
        return 0;
}