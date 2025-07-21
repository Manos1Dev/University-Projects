#include <stdio.h>

int main(void)
{
    float x;
    printf("Dwse mia pragmatikh timh\n");
    scanf("%f", &x);
    if (x < -5)
    {
        printf("8");
    }
    else if (x < 3)
    {
        printf("To apotelesma ths sunarthsh 1/x einai %.1f", (1 / x));
    } 
    else if (x < 12)
    {
        printf("To apotelesma ths sunarthsh (x*x)-4 einai %.1f", ((x * x) - 4));
    } 
    else if (x >= 12)
    {
        printf("To apotelesma ths sunarthsh 6/((x-14)*2) einai %.1f", (6 / ((x - 14) * (x - 14))));
    }
    return 0;
}