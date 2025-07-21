#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    printf("Dwse enan akeraio (na einai [1, 20]): ");
    scanf("%d", &n);
    if (n >= 1 && n <= 20)
    {
        for (i = 2; i <= n; i += 2)
        {
            sum += i * i;
        }
        printf("sum = %d \n", sum);
    }
    else
        printf("Den edwses arithmo sto diathma [1, 20]\n");
    return 0;
}