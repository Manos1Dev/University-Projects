#include <stdio.h>

int main(void)
{
    int i, pl1 = 0, pl2 = 0;
    char x[100]; 
    while (1)
    {
        printf("Dwse 100 xarakthres:");
        fgets(x, sizeof(x), stdin);
        for (i = 0; i < 100; i++)
        {
            if (x[0] == 'e' && x[1] == 'n' && x[2] == 'd')
                return 0;
            if (x[i] >= 'A' && x[i] <= 'Z')
            {
                x[i] += 32;
                pl1++; 
            }
            else if (x[i] >= 'a' && x[i] <= 'z')
            {
                x[i] -= 32;
                pl2++; 
            }
        }
        printf("Einai:");
        puts(x);
    }
    return 0;
}