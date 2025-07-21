#include <stdio.h>

int *sun(int x[100]);

int main(void)
{
    int x[100], i, *k;
    for (i = 0; i < 100; i++)
    {
        printf("Dwse 100 pragmatikous arithmous, %do: ", i);
        scanf("%d", &x[i]);
    }
    k = sun(x);
    if (k == NULL)
        printf("Einai NULL\n");
    else
        printf("Einai %d\n", *k);
    return 0;
}

int *sun(int x[100])
{
    int i, k, pl1, pl2 = 0, timh2 = 11, *ptr;
    for (i = 0; i < 100; i++)
    {
        pl1 = 0;
        for (k = 0; k < 100; k++)
            if (i != k && x[i] == x[k])
                pl1++;
        if (pl1 > timh2 || i == 0)
        {
            pl2++;
            timh2 = pl1;
            ptr = &x[i];
        }
    }
    if (pl2 > 1)
        return ptr;
    else
        return ptr = NULL;
}