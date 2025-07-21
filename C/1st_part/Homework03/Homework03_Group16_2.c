#include <stdio.h>

int main(void) {
    double x, y;
    printf("Dwse duo pragmatikous arithmous\n");
    scanf("%lf%lf", &x, &y); 
    printf("O %.2f einai o mikroteros\n", (((x < y) * x) + ((x > y) * y))); 
    return 0;
}