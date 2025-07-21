#include <stdio.h>

int main(void) {
    int x1, x2;
    printf("Dwse duo akeraious arithmous\n");
    scanf("%d%d", &x1, &x2);
    x1 = x1 ^ x2;
    x2 = x1 ^ x2;
    x1 = x1 ^ x2;
    printf("Eginan x1=%d  x2=%d", x1, x2);
    return 0;
}