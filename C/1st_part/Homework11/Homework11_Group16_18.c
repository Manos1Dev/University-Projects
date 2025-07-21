#include <stdio.h>
// #define test 10

int main(void)
{
    int i, y1, y2, pl1 = 0, test = 5;
    char x[100] = "\0";
    printf("Dwse ena alfarithmtiko mexri 100 xarakthres: ");
    fgets(x, sizeof(x), stdin);
    for (i = 0; i < 100; i++)
        if (x[i] != '\n' || x[i] != '\0')
            pl1++;
    printf("dwse 1+ xarakthres pou thes na diagrafoun(tha prepei na emperiexontai sto alfarithmitiko pou edwses) kai ton prwto pou diagrafei: ");
    scanf("%d %d", &y1, &y2);
    x[y2 - 1] = '\0';
    for (i = y2; i <= y1; i++)
        x[i] = '\0';
    for (i = 0; i < 100; i++)
        if (x[i] != '\0')
            printf("%c", x[i]);
    printf("\n");
    return 0;
}