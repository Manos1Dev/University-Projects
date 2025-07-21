#include <stdio.h>

int main(void) {
    int x = 4;
    printf("Oi dumaneis tou duo tha einai:\n 2 ^ 0 = %d\n 2 ^ 1 = %d\n 2 ^ 2 = %d\n 2 ^ 3 = %d\n 2 ^ 4 = %d\n 2 ^ 5 = %d\n 2 ^ 6 = %d\n 2 ^ 7 = %d\n 2 ^ 8 = %d\n 2 ^ 9 = %d", (x >> 2), (x >> 1), x, (x << 1), (x << 2), (x << 3), (x << 4), (x << 5), (x << 6), (x << 7));
    return 0;
}