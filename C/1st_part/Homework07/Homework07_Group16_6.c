#include <stdio.h>

int main(void)
{
    double *ptr1, *ptr2, x, y, sum = 0;
    ptr1 = &x;
    ptr2 = &y;
    scanf("%lf%lf", ptr1, ptr2);
    sum = *ptr1 + *ptr2;
    if (sum > 0)
        printf("H apoluth timh tou athroismatos einai sum = %.2f", sum);
    else
        printf("H apoluth timh tou athroismatos einai sum = %.2f", -sum);
    return 0;
}