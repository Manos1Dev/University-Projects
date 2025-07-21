#include <stdio.h>

void far(int a, int b);

int main(void)
{
    int a, b;
    do
    {
        printf("O prwtos na einai mikroteros apo ton deutero: ");
        scanf("%d%d", &a, &b);
    } while(a > b);
    far(a, b);
    return 0;
}

void far(int a, int b)
{
    int ki;
    float celsius;
    for (ki = a; ki <= b; ki++)
    {
        celsius = (ki * 1.8) + 32 ;
        printf("| Celsius = %d -> Fahrenheit = %f | \n", ki, celsius);
    }
}