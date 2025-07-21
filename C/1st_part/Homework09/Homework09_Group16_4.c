#include <stdio.h>

int main(void)
{
    double *p1, *p2, **pt1, **pt2, num1, num2;
    p1 = &num1;
    p2 = &num2;
    pt1 = &p1;
    pt2 = &p2;
    printf("Dwse duo pragmatikes times: ");
    scanf("%lf%lf", *pt1, *pt2);
    printf("To athroisma tous einai %f\n", ((**pt1) + (**pt2)));
    return 0;
}