#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, pl1 = 0, sum = 0, k = 0, geia = 16, ki;
    char x[8] = "\0";
    printf("Dwse mexri 8 dekaeksadikous xarakthres: ");
    fgets(x, sizeof(x), stdin);
    for (i = 0; i <= 8; i++)
    {
        if (x[i] == '\n')
            x[i] = '\0';
        printf("%d ", x[i]);
    }
    printf("\n");
    k = strlen(x) - 1;
    for (i = 0; i <= strlen(x) - 1; i++)
    {      
        if (x[i] != '0' && x[i] != '\n')
        {  
            if(x[i] >= '0' && x[i] <= '9')
                pl1 = (x[i] - 48);
            else if(x[i] >= 'a' && x[i] <= 'f')
                pl1 = (x[i] - 97 + 10);
            else if(x[i] >= 'A' && x[i] <= 'F')
                pl1 = (x[i] - 65 + 10);
            if (i == strlen(x) - 1)
                sum += (pl1 * 1);
            else
                for (ki = k; ki > 0; ki--)
                {
                    if (ki == k)
                        sum += (pl1 * geia);
                    else
                        sum = (geia * geia);
                }
        }
        k--;
        pl1 = 0;
    }
    printf("Einai %d\n", sum);
    printf("\n");
    return 0;
}