#include <stdio.h>

int main(void) {
    int x, z;
    float y, w, a, b;
    printf("Posa piata agorases;\n");
    scanf("%d", &x);
    printf("Poso ekane to kathe piato;\n");
    scanf("%f", &y);
    printf("Posa pothria agorases;\n");
    scanf("%d", &z);
    printf("Poso ekane to kathe pothri;\n");
    scanf("%f", &w);
    printf("Sunolika poso plhrwses;\n");
    scanf("%f", &a);
    printf("Afou plhrwses %.2f eurw ta resta sou tha einai %.2f eurw", a, (a - ((x * y) + (z * w))));
    return 0;
}