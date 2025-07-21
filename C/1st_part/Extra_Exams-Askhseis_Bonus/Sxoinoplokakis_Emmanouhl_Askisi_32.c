#include <stdio.h>

double power(double m, int n);

int main(void)
{
    int x;
    double y, p;
    printf("Enter base and exponent: ");
    scanf("%lf%d", &y, &x);
    p = power(y, x);
    if (p >= 0)
        printf("%f power %d = %f\n", y, x, p);
    else
        printf("Base is not positive.\n");
    return 0;
}

double power(double m, int n)
{
    if (m >= 0)
    {
        if (n == 1)
            return m;
        else if (n == 0)
            return 1;
        else if (n < 0)
        {
            n *= (-1);
            return 1 / power(m, n);
        }
        else
        {
            n--;
            return m * power(m, n);
        }
    }
    else 
        return m;
}