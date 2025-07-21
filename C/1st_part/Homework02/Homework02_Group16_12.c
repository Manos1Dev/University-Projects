#include <stdio.h>

int main(void) {
    printf("Dwse enan dipshfio thetiko akeraio arithmo\n");
    int x;
    scanf("%d", &x);
    x = ((((x / 10) * 10 + (x / 10)) * 100) + ((x % 10) * 10 + (x % 10)));
    printf("einai %d", x);
    return 0;
}