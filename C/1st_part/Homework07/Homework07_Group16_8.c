#include <stdio.h>

int main(void)
{
    double *pt1, *pt2, a, b, temp;
    pt1 = &a;
    pt2 = &b;
    scanf("%lf%lf", pt1, pt2);
    printf("Htan %.4f %.4f\n", *pt1, *pt2);
    temp = *pt2;
    *pt2 = *pt1;
    *pt1 = temp;
    printf("Eginan %.4f %.4f", *pt1, *pt2);
    if (*pt1 > *pt2)
        printf("O megaluteros einai o %.4f\n", *pt1);
    else if (*pt1 < *pt2)
        printf("O megaluteros einai o %.4f\n", *pt2);
    else
        printf("Einai isoi\n");
    return 0;
}