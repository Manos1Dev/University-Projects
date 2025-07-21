#include <stdio.h>

int main(void)
{
    int i, pl1 = 0;
    char x[100];
    printf("Dwse mexri 100 xarakthres (grapse end gia na teleiwsei to programma):");
    fgets(x, sizeof(x), stdin);
    for (i = 0; i < 100; i++)
        if (x[i] == '\n')
            pl1 = i;
    for (i = pl1; i >= 0; i--)
        printf("%c", x[i]);
    printf("\n");
    return 0;
}