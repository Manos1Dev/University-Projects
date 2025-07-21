#include <stdio.h>

int f(int x);
int g(int x);

int main(void)
{
    int x;
    printf("Dwse enan akeraio: ");
    scanf("%d", &x);
    printf("f(g(x)) = %d\n", f(g(x)));
    return 0;
}

int f(int x)
{
    if (x > 0)
        return x + 2;
    else
        return (-3 * x) + 7;
}

int g(int x)
{
    if (x > 0)
        return (x * x) + 2;
    else
        return (7 * x) - 5;
}