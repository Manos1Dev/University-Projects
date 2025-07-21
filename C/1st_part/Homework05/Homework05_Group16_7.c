#include <stdio.h>

int main(void)
{
    int x, i, pl = 0, k = 0;
    for (i = 1; i < 10; i++)
    {
        printf("Dwse thetiko arithmo\n");
        scanf("%d", &x);
        if (x < 0)
        {
            printf("\n%d\n", pl);
            pl = pl + 1;
            printf("Prepei na dwseis thetiko arithmo, ksanaprospathise\n");
            i--;
        }
    }
    printf("Eishxthisan %d arnhtikoi arithmoi", pl);
    return 0;
}