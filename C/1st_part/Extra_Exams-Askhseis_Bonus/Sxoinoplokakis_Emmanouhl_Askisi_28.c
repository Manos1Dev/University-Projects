#include <stdio.h>

int main(void)
{
    int i, k;
    char x, a[10];
    printf("Dwse 100 agglikous xarakthres\n");
    for (i = 0; i < 10; i++)
    {
        x = getchar();
        if (x != '\n')
        {
            if (i == 0)
                a[i] = x;
            else if (i > 0 && i <= 9)
            {
                if ((x >= 'A' || x <= 'Z') || (x >= 'a' || x <= 'z'))
                {
                    printf("%c  ", a[i]);
                    a[i] = x;
                }
                else 
                    i--;
            }
        }
        if (x != '\n')
            x = getchar();
        else
            break;
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    printf("\n");
    return 0;
}

// not ready