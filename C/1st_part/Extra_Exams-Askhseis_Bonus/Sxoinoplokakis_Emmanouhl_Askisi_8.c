#include <stdio.h>

int main(void)
{
    int i, k, sum = 0;
    for (i = 1; i <= 9; i++)
        for (k = (i * 100); k <= ((i * 100) + 5); k++)
            sum += k;
    printf("sum = %d \n", sum);
    return 0;
}