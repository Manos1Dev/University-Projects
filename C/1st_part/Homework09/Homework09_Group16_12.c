#include <stdio.h>

int main(void)
{
    int i;
    unsigned char x;
    printf("Dwse xarakthres (dwse '/' gia na stamathseis): \n");
    x = getchar();
    while (x != '\n')
    {
        if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
        {
            for (i = 1; i <= 5; i++)
            { 
                if ((x > 'U' || x <= 'Z') || (x > 'u' || x <= 'z'))
                {
                    switch (x)
                    {
                        case 'Z':
                            x = 'A';
                            break;
                        case 'z':
                            x = 'a';
                            break;
                        default:
                            x += 1;
                            break;
                    }
                }
                else
                    x += 5;
            }
        }
        putchar(x);
        x = getchar();
        if (x == '\n')
            printf("\n");
    }
    return 0;
}