#include <stdio.h>

double *sunarthsh(double a, double b);

int main(void)
{
    static double k;
    double a, b, *p;
    while (1)
    {
        printf("Dwse duo pragmatikous arithmous (dwse duo arnhtikes times gia na stamathseis): ");
        scanf("%lf%lf", &a, &b);
        if (a < 0 && b < 0)
            return 0;
        else
        {
            p = sunarthsh(a, b);
            if (p != NULL)
            {
                k = *p;
                printf("H megaluterh timh einai %f\n", k);
            }
            else
                printf("Einai isoi\n");
        }
    } 
    return 0;
}

double *sunarthsh(double a, double b)
{
    double *p = NULL;
    if (a > b)
        return p = &a;
    else if (b > a)
        return p = &b;
    else
        return p = NULL;
}