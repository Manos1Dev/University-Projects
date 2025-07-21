#include <stdio.h>

int main(void)
{
    char x;
    printf("Dwse enan xarakthra: ");
    
    for (;;)
    {
        if ((x = getchar()) != 'q' && x != '\n' && (x > '9' || x < '0'))
        {
            printf("O xarakthras pou plhktrologhses einai: ");
            putchar(x);
            printf("\n");
            printf("Dwse enan xarakthra: ");
            x = getchar();
        }
        else
        {
            printf("Edwses arithmo h epelekses to 'q'\n");
            return 0;
        }
    }
}