#include <stdio.h>

double mikroteros_arithmos(double *p1, double *p2, double *p3);

int main(void)
{
    double a, b, c, *ptr;
    printf("Dwse 3 dekadikous arithmous: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("O mikroteros arithmos einai o | %f |\n", *ptr = mikroteros_arithmos(&a, &b, &c));
    return 0;
}

double mikroteros_arithmos(double *p1, double *p2, double *p3)
{
    if ((*p1 < *p2) && (*p1 < *p3))
        return *p1;
    else if ((*p2 < *p1) && (*p2 < *p3))
        return *p2;
    else 
        return *p3;
}