#include <stdio.h>

int main(void) {
    double x = -12.123456789;
    printf("%.3f\n", x);
    printf("%.9f\n", x);
    printf("%15.9f\n", x);
    printf("%.6f\n", x);
    printf("%.5f\n", x);
    printf("%.0f\n", x);
    return 0;
}
