#include <stdio.h>

int main(void)
{
    double x, y;
    printf("Dwse duo pragmatikous arithmous\n");
    scanf("%lf%lf", &x, &y);
    double sum = (x + y);
    if (sum < 0)
    {
        printf("H apoluth timh tou athroismatos einai %.1f", -sum);
    }
    else 
    {
        printf("O mikroteros apo tous duo einai %.1f", (((x > y) * y) + (x < y) * x));
    }
    return 0;
}