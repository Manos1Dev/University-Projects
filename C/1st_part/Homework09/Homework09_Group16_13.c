#include <stdio.h>

int main(void)
{
    int pl1 = 0, pl2 = 0, pl3 = 0, pl4 = 0;
    unsigned char x;
    printf("Dwse xarakthres: ");
    x = getchar();
    while (x != '\n')
    {
        if (x == '*')
        {
            pl1++;
            x = getchar();
            while (pl1 < 2)
            {
                if (x <= '9' && x >= '0')
                    pl2++;
                else if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
                    pl3++;
                else
                    pl4++;
                x = getchar();
                if (x == '*')
                    break;
            }
        }
        else
            x = getchar();
    }
    printf("Between first two stars (letters: %d, digits: %d, other: %d)\n", pl3, pl2, pl4);
    return 0;
}