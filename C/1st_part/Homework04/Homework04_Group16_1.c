#include <stdio.h>

int main(void)
{
    int x;
    printf("Dwse enan akeraio\n");
    scanf("%d", &x);
    if (x & 1 == 1)
    {
        printf("O arithmos einai perittos");
    } 
    else
    {
        printf("O arithmos einai artios");
    }
    return 0;
}