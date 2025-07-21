#include <stdio.h>

int main(void)
{
    float x, y, z;
    printf("Dwse ton bathmo tou prwtou foithth sto thewrhtiko kommati\n");
    scanf("%f", &x);
    y = x * 0.7;
    printf("Dwse ton bathmo tou prwtou foithth sto erasthriako kommati\n");
    scanf("%f", &x);
    x = (y + (x * 0.3));
    x = (x >= 8 && x <= 10);
    printf("----------------------------------------------------------\n");
    printf("Dwse ton bathmo tou deuterou foithth sto thewrhtiko kommati\n");
    scanf("%f", &y);
    z = y * 0.7;
    printf("Dwse ton bathmo tou deuterou foithth sto erasthriako kommati\n");
    scanf("%f", &y);
    y = (z + ((y * 0.3)));
    y = (y >= 8 && y <= 10);
    x = x + y;
    y = 0;
    printf("----------------------------------------------------------\n");
    printf("Dwse ton bathmo tou tritou foithth sto thewrhtiko kommati\n");
    scanf("%f", &z);
    y = z * 0.7;
    printf("Dwse ton bathmo tou tritou foithth sto erasthriako kommati %.1f\n", y);
    scanf("%f", &z);
    z = (y + ((z * 0.3)));
    z = (z >= 8 && z <= 10);
    printf("----------------------------------------------------------\n");
    printf("Phran %.0f mathites panw apo 8 kai 10", x + z);
    return 0;
}