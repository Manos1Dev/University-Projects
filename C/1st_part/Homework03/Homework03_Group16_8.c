#include <stdio.h>

int main(void) {
    int x, y;
    printf("Dwse enan tetrapshfio thetiko akeraio\n");
    scanf("%d", &x);
    printf("Dwse enan monopshfio thetiko akeraio\n");
    scanf("%d", &y);
    printf("O tetrapshfios tha ginei pentapshfios kai tha prostethei o %d endiamesa, dhladh %d", y, ((((x / 1000) * 10000) + (((x / 100) % 10) * 1000) + (y * 100) + ((((x % 1000) % 100) / 10) * 10) + (x % 10))));
    return 0;
}