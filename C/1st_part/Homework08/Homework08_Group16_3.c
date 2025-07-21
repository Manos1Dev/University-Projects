#include <stdio.h>

int main(void)
{
    int *p1, *p2, *p3, i, num, min = -5, max = 10;
    p1 = &num;
    p2 = &min;
    p3 = &max;
    for (i = 0; i < 5; i++)
    {
        printf("Dwse enan akeraio: ");
        scanf("%d", p1);
        if (*p1 <= -5)
        {
            if (i == 0)
                *p2 = *p1; 
            else if (i > 0 && *p2 > *p1)
                *p2 = *p1;
        }
        else if (*p3 >= 10)
        {
            if (i == 0)
                *p3 = *p1; 
            else if (*p3 < *p1)
                *p3 = *p1;
        }
        else
            printf("\nDen einai mikroteros tou -5 oute megaluteros tou 10\n");
    }
    printf("O elaxistos eisagwmenos einai o %d\nO megistos eisagwmenos einai o %d\n", *p2, *p3);
    return 0;
}