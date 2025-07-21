#include <stdio.h>

int main(void)
{
    int i, k, ki;
    char x, a[10];
    printf("Dwse 10 agglikous xarakthres o enas katw apo ton allon patwntas ton xarakthra kai meta ENTER\n");
    for (i = 0; i < 10; i++)
    {
        x = getchar();
        if (x == 'q')
        {
            ki = i;
            break;
        }
        else if (x != '\n' && x != 'q')
        {
            if (i == 0)
                a[i] = x;
            else if (i > 0 && i <= 9)
            {
                for (k = i - 1; k >= 0; k--)
                {
                    if (x == a[k])
                    {
                        i--;
                        break;
                    }
                    else 
                        a[i] = x;
                }
            }
        }
        if (x != '\n')
            x = getchar();
        ki = i;
    }
    printf("\nO pinakas einai: ");
    for (i = 0; i < ki + 1; i++)
        printf("%c ", a[i]);
    printf("\n");
    return 0;
}