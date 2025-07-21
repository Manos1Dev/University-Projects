#include <stdio.h>

int main(void) {
    int x;
    printf("Dwse enan akeraio\n");
    scanf("%d", &x);
    printf("To athroisma twn pshfiwn (se bit) stis theseis 2, 4, 6, 8 einai %d",  (((x % 4) / 2) >= 1) + (((x % 16) / 8) >= 1) + (((x % 64) / 32) >= 1) + ((x / 128) >= 1));
    return 0;
}