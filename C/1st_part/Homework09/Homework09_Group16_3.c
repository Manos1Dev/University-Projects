#include <stdio.h>

int main(void)
{
    int **p1, **p2, *ptr1, *ptr2, temp, num1, num2;
    ptr1 = &num1;
    p1 = &ptr1;
    ptr2 = &num2;
    p2 = &ptr2;
    printf("Dwse duo akeraies metablhtes: ");
    scanf("%d%d", *p1, *p2);
    printf("Htan   ---> %d %d\n", **p1, **p2);
    temp = **p1;
    **p1 = **p2;
    **p2 = temp;
    printf("Eginan ---> %d %d\n", **p1, **p2);
    return 0;
}