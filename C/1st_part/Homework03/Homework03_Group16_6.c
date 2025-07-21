#include <stdio.h>

int main(void) {
    int x;
    printf("Dwse enan xrhatiko poso se eurw\n");
    scanf("%d",&x);
    printf("Edwses %d eurw kai h metatroph tha ginei:\n", x);
    printf("50 euros: %d\n", (x / 50));
    x = (x % 50);
    printf("20 euros: %d\n", (x / 20));
    x = (x % 20);
    printf("10 euros: %d\n", (x / 10));
    x = (x % 10);
    printf("5 euros: %d\n", (x / 5));
    x = (x % 5);
    printf("2 euros: %d\n", (x / 2));
    x = (x % 2);
    printf("1 euros: %d", (x / 1));
    return 0;
}