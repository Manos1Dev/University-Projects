#include <stdio.h>

int ela(char c, int x);

int main(void)
{
    unsigned char c;
    int x, i;
    printf("Dwse enan xarakthra: ");
    c = getchar();
    printf("Dwse enan akeraio: ");
    scanf("%d", &x);
    if (c != '\n')
    {
        i = ela(c, x);
        if (i == 0)
            printf("Kseperases ta oria tou char.\n");
        else
            printf("O kwdikopoihmenos xarakthras einai: %c\n", i);
    }
    return 0;
}

int ela(char c, int x)
{
    x += c;
    if (x > 255)
        return 0;
    else
        return x;
}