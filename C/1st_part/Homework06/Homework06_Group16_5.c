#include <stdio.h>

int main(void)
{
    int k, x[100], i, pl = 0, pl2 = 0, sum = 0;
    for (i = 0; i < 100; i++)
    {
        printf("Dwse enan akeraio airthmo, o %dos einai = ", i + 1);
        scanf("%d", &x[i]);
        sum = sum + x[i];
    }
    sum = sum / 100;
    for (k = 0; k < 98; k++)
    {
        if (x[99] < x[k])
            pl++;
        if (sum < x[k])
            pl2++;
    }
    printf("\n%d stoixeia einai megalutera apo ton teleutaio\n", pl);
    printf("%d stoixeia exoun megaluterh timh apo ton meso oro olwn twn arithmwn", pl2);
    return 0;
}