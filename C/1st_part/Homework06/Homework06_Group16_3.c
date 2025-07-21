#include <stdio.h>

int main(void)
{
    int i, k, pl = 0;
    double x[500];
    for (i = 0; i < 500; i++)
    {
        printf("Dwse mia pragmatikh timh %d: ", i);
        scanf("%lf", &x[i]);
    }
    for (k = 0; k < 500; k++)
    {
        if (x[k] == x[499 - k])
            pl++;
    }
    if (pl == 500)
        printf("O pinakas einai summetrikos");
    else
        printf("O pinakas den einai summetrikos");
    return 0;
}

// enas airthmos mporei na thewrhthei summetrikos mono ean einai artios arithmos