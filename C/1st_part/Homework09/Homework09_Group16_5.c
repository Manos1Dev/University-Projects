#include <stdio.h>

int main(void)
{
    int i, k, num[6][4];
    for (i = 0; i < 6; i++)
        for (k = 0; k < 4; k++)
        {
            printf("Dwse enan akeraio -> grammh = [%d], sthlh = [%d]: ", i + 1, k + 1);
            scanf("%d", &*(*(num + i) + k));
        }
    for (i = 0; i < 6; i++)
    {
        for (k = 0; k < 4; k++)
            printf(" %d\t", *(*(num + i) + k));
        printf("\n");
    }
    return 0;
}