#include <stdio.h>

int main(void)
{
    float x;
    printf("Dwse ton bathmo enos mathith\n");
    scanf("%f", &x);
    if (x >= 0 && x < 10)
    {
        printf("Need Help");
    }
    else if (x <= 13)
    {
        printf("Dangerous Zone");
    }
    else if (x <= 16)
    {
        printf("Good");
    }
    else if (x <= 18)
    {
        printf("Very Good");
    }
    else if (x <= 20)
    {
        printf("Excellent");
    }
    return 0;
}