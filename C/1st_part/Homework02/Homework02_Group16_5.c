#include <stdio.h>

int main(void) {
    printf("Dwse mou treis pragmatikous arithmous\n");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    double t1 = x;
    double t2 = y;
    double t3 = z;
    x = t3;
    y = t1;
    z = t2; 
    printf("x = %.1f, y = %.1f, z = %.1f", x, y, z);
    return 0;
}