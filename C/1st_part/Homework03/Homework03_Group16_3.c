#include <stdio.h>

int main(void) {
    float x;
    printf("Poio einai to sunoliko kostos? (tha uparxei ekptwsh 5%% an einai panw apo 100)\n");
    scanf("%f", &x);
    printf("To sunoliko kostos tha einai %.2f", (((x >= 100) * (x - (x * 5/100))) + ((x < 100) * x)));
    return 0;
}