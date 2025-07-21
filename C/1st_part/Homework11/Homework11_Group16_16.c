#include <stdio.h>

void function(char x[100], int *ptr1, int *ptr2, int *ptr3);

int main(void)
{
    int i, pl1 = 0, y1 = 0, y2 = 0, y3 = 0;
    char x[100];
    printf("Dwse ena alfarithmtiko mexri 100 xarakthres (elegxw mono an to prwto einai a kai to teleutaio einai q): ");
    fgets(x, sizeof(x), stdin);
    if (x[0] == 'a')
        pl1++;
    for (i = 0; i < 100; i++)
        if (x[i] == '\n' || x[i] == '\0')
            if (x[i - 1] == 'q')
                pl1++;
    if (pl1 == 2)
    {
        function(x, &y1, &y2, &y3);
        printf("\nKefalaia = %d\nPeza = %d\nArithmoi = %d\n", y1, y2, y3);
    }
    else 
        printf("Den uparxei sth arxh to a kai sto telos to q\n");
    return 0;
}

void function(char x[100], int *ptr1, int *ptr2, int *ptr3)
{
    int i;
    for (i = 1; i < 100; i++)
    {
        if(x[i] == '\n' || x[i] == 'q')
            break;
        if (x[i] >= 'A' && x[i] <= 'Z')
            (*ptr1)++;
        else if (x[i] >= 'a' && x[i] <= 'z')
            (*ptr2)++;
        else if (x[i] >= '0' && x[i] <= '9')
            (*ptr3)++;
        // printf("\neinai %d, %d, %d me %c\n", *ptr1, *ptr2, *ptr3, x[i]);
    }
}