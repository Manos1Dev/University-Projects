#include <stdio.h>

int main(void)
{
    int x1[100], x2[100], i;
    for (i = 0; i < 100; i++)
    {
        printf("Dwse enan arithmo: ");
        scanf("%d", &x1[i]);
        x2[i + 1] = x1[i];
    }
    printf("\n");
    for (i = 0; i < 100; i++)
    {
        if (i == 0)
            x1[i] = x2[100];
        else
            x1[i] = x2[i];
        printf("to %do stoixeio htan %d kai egine %d\n", i + 1, x2[i + 1], x1[i]);
    }
    return 0;
}