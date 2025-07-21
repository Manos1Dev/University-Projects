#include <stdio.h>

void test_function(int a, int b);

int main(void)
{
    int a, b;
    while (1)
    {
        printf("Dwse duo akeraious arithmous (pata CTRL+C gia na stamathseis): ");
        scanf("%d%d", &a, &b);
        test_function(a, b);
    }
}

void test_function(int a, int b)
{
    if (a > b)
        printf("O 1os einai megaluteros apo ton deutero\n");
    else if (b > a)
        printf("O 1os einai mikroteros apo ton deutero\n");
    else
        printf("Eina isoi oi duo akeraioi\n");
}