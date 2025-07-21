#include <stdio.h>

int main(void) {
    printf("Posa xrhmata thes na baleis ston logariasmo sou;\n");
    float x;
    float y;
    scanf("%f", &x);
    printf("Poso einai to epitokio;\n");
    scanf("%f", &y);
    float epitokio = (x + (x * (y / 100)));
    printf("%.2f eurw tha exeis meta apo enan xrono\n", epitokio);
    return 0;
}