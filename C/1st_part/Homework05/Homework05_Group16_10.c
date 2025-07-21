#include <stdio.h>

int main(void)
{
    int x, i = 0, y = 0;
    printf("Dwse enan akeraio\n");
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        printf("\n");
        for (y = i; y > 0; y--)
        {
            printf("*");
        }
    }
    return 0;
}