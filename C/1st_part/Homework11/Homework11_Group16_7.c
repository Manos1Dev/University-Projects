#include <stdio.h>

int sun(int n);

int main(void)
{
    int i, n, sum = 0;
    do
    {
        printf("Dwse enan akeraio: ");
        scanf("%d", &n);
    } while (n > 20 || n < 0);
    
    printf("Einai %d\n", sun(n));
    return 0;
}

int sun(int n)
{
    if (n > 1)
        return n + sun(n - 1);
    else if (n == 0)
        return n;
    else if (n == 1)
        return n;
}