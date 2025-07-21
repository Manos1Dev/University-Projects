#include <stdio.h>

void megaluteros_artithmos(double a, double b, double c, double d);

int main(void)
{
    double a, b, c, d;
    printf("Dwse 4 pragmatikes times: \n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    megaluteros_artithmos(a, b, c, d);
    return 0;
}

void megaluteros_artithmos(double a, double b, double c, double d)
{
    if (a > b && a > c && a > d)
        printf("O %f einai megaluteros\n", a);
    else if (b > a && b > c && b > d)
        printf("O %f einai megaluteros\n", b);
    else if (c > a && c > b && c > d)
        printf("%f einai megaluteros\n", c);
    else 
        printf("O %f einai megaluteros\n", d);        
}