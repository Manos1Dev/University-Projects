#include <stdio.h>

float function(float a, float b, float c);

int main(void)
{
    float a, b, c;
    printf("Dwse 3 times gia na tsekarw poia timh einai mikroterh: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("H mikroterh timh einai %f \n", function(a, b, c));
    return 0;
}

float function(float a, float b, float c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}