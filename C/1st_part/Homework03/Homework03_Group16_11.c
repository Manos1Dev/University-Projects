#include <stdio.h>

int main(void) {
    int x, y;
    printf("Dwse enan akeraio\n");
    scanf("%d", &x);
    printf("Dwse thn thesh enos bit ston arithmo\n");
    scanf("%d", &y);
    printf("%d", (1 & (x >> (y - 1))));
    return 0;
}