#include <stdio.h>
#define p 10

int main(void)
{
    double mikroteros1, mikroteros2, x;
    int i;
    printf("Dwse enan pragmatiko arithmo: ");
    scanf("%lf", &x);
    mikroteros1 = x;
    mikroteros2 = x;
    for (i = 1; i < p; i++)
    {
        printf("Dwse enan pragmatiko arithmo: ");
        scanf("%lf", &x);
        if (x < mikroteros2)
        {
            if (x < mikroteros1)
            {
                mikroteros2 = mikroteros1;
                mikroteros1 = x;
            }
            else if (x != mikroteros1)
                mikroteros2 = x;
        }
        if (mikroteros1 == mikroteros2 && x > mikroteros2)
            mikroteros2 = x;
    }
    printf("O prwtos mikroteros einai %f\nO deuteros mikroteros einai %f\n", mikroteros1, mikroteros2);
    return 0;
}