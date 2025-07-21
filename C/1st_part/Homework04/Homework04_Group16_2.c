#include <stdio.h>

int main(void)
{
    unsigned int x;
    int n;
    printf("Dwse enan arithmo\n");
    scanf("%d", &x);
    printf("Dwse ton arithmo twn oktadwn [1, 2, 3]\n");
    scanf("%d", &n);
    printf("%d", (x >> n * 8) | (x << (32 - n * 8)));
    return 0;
}