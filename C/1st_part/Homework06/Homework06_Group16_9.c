#include <stdio.h>

int main(void)
{
    int i, k, x[3][3], pl2 = 0, pl3 = 0;
    printf("Ftiaxe enan 3x3 pinaka\n");
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
            scanf("%d", &x[i][k]);
    }
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            if ((x[i][k] == 0) && (i + k) <= 1)
                pl2++;
            else if (x[i][k] == 0 && (i + k) <= 4)
                pl3++;
        }
    }
    if ((pl2 + pl3) == 6)
        printf("Einai kai anw trigwmikos kai katw trigwnikos\n");
    else if (pl2 == 3)
        printf("Einai anw trigwmikos\n");
    else if (pl3 == 3)
        printf("Einai katw trigwmikos\n");
    else
        printf("Den einai tipota\n");
    return 0;
}