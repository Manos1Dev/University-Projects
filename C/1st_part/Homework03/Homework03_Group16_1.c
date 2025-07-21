#include <stdio.h>

int main(void) {
    int x;
    printf("Dwse enan akeraio arithmo pou einai se deuterolepta\n");
    scanf("%d", &x);
    printf("%dh", (x / 60) / 60);
    x = ((x - ((x / 60) / 60 * 60 * 60)));
    printf("% dmin", ((x / 60) - ((x / 60) / 60)));
    printf("% dsec", (x - ((x / 60) * 60)));
    return 0;
}