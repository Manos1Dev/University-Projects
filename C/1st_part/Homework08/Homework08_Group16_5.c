#include <stdio.h>

int main(void)
{
    double arr[] = {1.3, -4.1, -3.8, 9.4, 2.5}, temp, *p1 = arr, *p2 = arr + 4;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1 = arr + 1;
    p2 = arr + 3;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1 = arr;
    printf("%.1f   ", *p1);
    p1 = arr + 1;
    printf("%.1f   ", *p1);
    p1 = arr + 2;
    printf("%.1f   ", *p1);
    p1 = arr + 3;
    printf("%.1f   ", *p1);
    p1 = arr + 4;
    printf("%.1f   ", *p1);
    return 0;
}