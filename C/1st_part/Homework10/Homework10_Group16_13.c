#include <stdio.h>

double function(double a, double b, double *embadon);

int main(void)
{
    double a, b, embadon, perimetros;
    printf("Dwse ta mhkh twn duo pleurwn tou orthogwniou parallhlogrammou: ");
    scanf("%lf%lf", &a, &b);
    perimetros = function(a, b, &embadon);
    printf("Embadon = %f | perimetros = %f\n", embadon, perimetros);
    return 0;
}

double function(double a, double b, double *embadon)
{
    *embadon = a * b;
    return (a + b) * 2;
}