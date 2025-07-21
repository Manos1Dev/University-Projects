#include <stdio.h>

int main(void)
{
    int x;
    printf("Dwse ta kubika metra katanalwshs\n");
    scanf("%d", &x);
    int pagio = 10;
    if (x >= 0 && x <= 30)
    {
        printf("To teliko poso einai %.2f eurw", ((x * 0.6) + pagio));
    }
    else if (x <= 50)
    {
        printf("To teliko poso einai %.2f eurw", (((30 * 0.6) + ((x - 30) * 0.8)) + pagio));
    }
    else if (x <= 60)
    {
        printf("To teliko poso einai %.2f eurw", (((30 * 0.6) + (20 * 0.8) + ((x - 50) * 1)) + pagio));
    }
    else 
    {
        printf("To teliko poso einai %.2f eurw", ((30 * 0.6) + (20 * 0.8) + (10 * 1) + ((x - 60) * 1.2) + pagio));
    }
    return 0;
}