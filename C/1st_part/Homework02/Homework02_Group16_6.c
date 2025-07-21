#include <stdio.h>

int main(void) {
    printf("Dwse mou enan dhpsifio thetiko akeraio arithmo\n");
    int x;
    scanf("%d", &x);
    x = (((x % 10) * 10) + (x / 10)) ;
    printf("x = %d", x);
    return 0;
}