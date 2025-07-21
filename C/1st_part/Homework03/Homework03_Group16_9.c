#include <stdio.h>

int main(void) {
    double x, b1, b2, b3;
    printf("Dwse enan elaxisto bathmo pou xreiazetai gia na petuxoun oi mathites stis eksetaseis\n");
    scanf("%lf", &x);
    printf("Dwse ton bathmo twn treiwn mathitwn\n");
    scanf("%lf%lf%lf", &b1, &b2, &b3);
    printf("Petuxan/e oi/o %d", ((b1 >= x) + (b2 >= x) + (b3 >= x)));
    return 0;
}