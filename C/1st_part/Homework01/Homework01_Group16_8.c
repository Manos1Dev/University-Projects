#include <stdio.h>

int main(void) {
    int x = 21, y = 0xa, z = 077;
    printf("%d\n", x);
    printf("% d\n", x);
    printf("%x\n", x);
    printf("%o%%\n", x);
    printf("%X\n", y);
    printf("%2x\n", y);
    printf("%d\n", y);
    printf("%o\n", z);
    printf("%#o\n", z);
    printf("%d\n", z);
    return 0;
}