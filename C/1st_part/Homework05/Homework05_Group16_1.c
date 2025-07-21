#include <stdio.h>

int main(void)
{
    int x, i, sum = 0;
    printf("Dwse akeraio arithmo\n");
    scanf("%d", &x);
    while (x != 1821)
    {
        if (x == 1821)
        {
            break;
        }
        sum = sum + x;
        i++;
        scanf("%d", &x);
    }
    printf("To athroisma einai %d kai to plhthos arithmws einai %d", sum, i);
    return 0;
}