#include <stdio.h>

void pollaplasio(int a, int b);

int main(void)
{
    int a, b;
    printf("Dwse duo akeraious: ");
    scanf("%d%d", &a, &b);
    pollaplasio(a, b);
    return 0;
}

void pollaplasio(int a, int b)
{
    if ((a > b && (a % b == 0)) || (a < b && (b % a == 0)))
        printf("Einai pollaplasioi\n");
    else
        printf("Den einai pollaplasioi\n");
}