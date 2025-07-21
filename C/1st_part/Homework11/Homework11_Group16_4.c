#include <stdio.h>

void sum(int x1[2][4], int x2[2][4], int *ptr[2][4]);

int main(void)
{
    int i, k , x1[2][4], x2[2][4], x3[2][4], *ptr[2][4];
    for (i = 0; i < 2; i++)
        for (k = 0; k < 4; k++)
        {
            printf("Dwse enan akeraio gia 1o pinaka | %d grammh - %d sthlh | : ", i + 1, k + 1);
            scanf("%d", &x1[i][k]);
        }
    printf("\n");
    for (i = 0; i < 2; i++)
        for (k = 0; k < 4; k++)
        {
            printf("Dwse enan akeraio gia 2o pinaka | %d grammh - %d sthlh | : ", i + 1, k + 1);
            scanf("%d", &x2[i][k]);
        }
    for (i = 0; i < 2; i++)
        for (k = 0; k < 4; k++)
            ptr[i][k] = &x3[i][k];
    sum(x1, x2, ptr);
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (k = 0; k < 4; k++)
            printf("%d\t", *ptr[i][k]);
        printf("\n");
    }
    return 0;
}

void sum(int x1[2][4], int x2[2][4], int *ptr[2][4])
{
    int i, k;
    for (i = 0; i < 2; i++)
        for (k = 0; k < 4; k++)
            *ptr[i][k] = x1[i][k] + x2[i][k];
}