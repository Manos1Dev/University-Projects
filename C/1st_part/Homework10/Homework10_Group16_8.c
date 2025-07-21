#include <stdio.h>

void upologismos(int a, int b);

int main(void)
{
    int a, b;
    do
    {
        printf("Dwse do mh arnhtikous arithmous (o prwtos na einai mikroteros apo ton deutero): ");
        scanf("%d%d", &a, &b);
    } while (a > b || (a < 0 || b < 0));
    upologismos(a, b);
    return 0;
}

void upologismos(int a, int b)
{
    int i, k, sum = 1;
    for (i = a; i <= b; i++)
    {
        for (k = 1; k <= i; k++)
            sum *= k;
        printf("%d! = %d\n", i, sum);
        sum = 1;
    }
}