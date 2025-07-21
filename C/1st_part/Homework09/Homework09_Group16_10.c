#include <stdio.h>

int main(void)
{
    int i, x[10];
    char arithmos;
    printf("Dwse 10 xarakthres\n");
    for (i = 0; i < 10; i++)
    {
        if ((arithmos = getchar()) != '\n' && (arithmos > '9' || arithmos < '0'))
            x[i] = arithmos;
        else
            i--; 
    }
    printf("-----------------------------------------\n");
    for (i = 0; i < 10; i++)
    {
        printf("To %do stoixeio ston pinaka einai: ", i + 1);
        putchar(x[i]);
        printf("\n");
    }
    return 0;
}