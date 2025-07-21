#include <stdio.h>

int main(void) {
    int x, y;
    printf("Dwse enan akeraio pou tha einai to kleidi ths kruptografhshs\n");
    scanf("%d", &x);
    printf("Dwse enan akeraio pou tha einai o arithmos pou tha kruptografhthei\n");
    scanf("%d", &y);
    printf("To apotelesma einai %d", ((x ^ y) ^ y));
    return 0;
}