#include <stdio.h>

int main()
{
    int x = 21, y = 0xa, z = 077;
    printf("%d\n", x);
    printf("%3d\n", x);
    printf("%x\n", x);
    printf("%o%%\n", x);
    printf("%X\n", y);
    printf("%2x\n", y);
    printf("%d\n", y);
    printf("%o\n", z);
    printf("0%o\n", z);
    printf("%d\n", z);
    return 0;
}