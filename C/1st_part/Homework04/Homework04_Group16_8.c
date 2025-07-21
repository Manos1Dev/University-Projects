#include <stdio.h>

int main(void) 
{
    float x, y, z;
    printf("Dwse times se treia proionta\n");
    scanf("%f%f%f", &x, &y, &z);
    x > 100 ? printf("To prwto proion kostizei panw apo 100 eurw\n") : printf("To prwto proion kostizei katw apo 100 eurw\n");
    y > 100 ? printf("To deutero proion kostizei panw apo 100 eurw\n") : printf("To deutero proion kostizei katw apo 100 eurw\n");
    z > 100 ? printf("To trito proion kostizei panw apo 100 eurw") : printf("To trito proion kostizei katw apo 100 eurw");
    return 0;
}