#include <stdio.h>

int main(void)
{
    int *p1, *p2, *p3, x, y, z, i;
    p1 = &x;
    p2 = &y;
    p3 = &z;
    scanf("%d%d%d", p1, p2, p3);
    if (*p1 < *p2 && *p1 < *p3 && *p2 < *p3 && *p2 < *p3)
        printf("\nEinai se auksousa seira\n");
    else
        printf("\nDen einai se auksousa seira\n");
    return 0;
}