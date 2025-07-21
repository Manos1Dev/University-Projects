#include <stdio.h>

int pollaplasiasmos(int x);
int function(int sum);

int main(void)
{
    int x;
    printf("Dwse mia akeraia timh: ");
    scanf("%d", &x);
    printf("%d^6 = %d\n", x, pollaplasiasmos(x));
    return 0;
}

int pollaplasiasmos(int x)
{
    return function(x);
}

int function(int x)
{
    int i, sum = 1;
    for (i = 1; i <= 6; i++)
        sum *= x;
    return sum;
}