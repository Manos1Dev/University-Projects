#include <stdio.h>

char test(char x);

int main(void)
{
    char x;
    printf("Dwse enan xarakthra: ");
    x = getchar();
    x = test(x);
    if (x == 'a' || x == 'b' || x == 'c')
        printf("O xarakthras pou edwses paremenei o idios, dhladh %c\n", x);
    else
        printf("O xarakthras pou edwses den einai a, b, c opote tha ginei %c\n", x);
    return 0; 
}

char test(char x)
{
    switch (x)
    {
        case 'a':
            return 'a';
        case 'b':
            return 'b';
        case 'c':
            return 'c';
        default:
            return 'z';
    }
}