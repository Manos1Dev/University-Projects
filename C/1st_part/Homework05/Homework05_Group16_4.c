#include <stdio.h>

int main(void)
{
    int x, sum = 0, pl = 0;
    printf("Dwse akeraio\n");
    scanf("%d", &x);
    while (sum <= 100)
    {
        sum = sum + x;
        pl++;
        if (sum > 100)
        {
            break;
        }
        scanf("%d", &x);
    }
    printf("Xreiasthkan/e %d arithmoi/o gia na kseperasei to 100", pl);
    return 0;
}