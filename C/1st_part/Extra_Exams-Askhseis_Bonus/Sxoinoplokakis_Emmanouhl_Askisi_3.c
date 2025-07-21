#include <stdio.h>

int main(void)
{
    int x, pl_arnhtikoi = 0, pl_thetikoi = 0, sum_thetikoi = 0, sum_arnhtikoi = 0, sum_peritoi = 0, sum_artioi = 0;
    printf("Dwse enan akeraio: ");
    scanf("%d", &x);
    while (x != 0)
    {
        if (x < 0)
        {
            pl_arnhtikoi += 1;
            sum_arnhtikoi += x;
        }
        else if (x > 0)
        {
            pl_thetikoi += 1;
            sum_thetikoi += x;
        }
        if (x & 1 == 1)
            sum_peritoi += x;
        else
            sum_artioi += x;
        if (x == 0)
            return 0;
        else
        {
            printf("Dwse enan akeraio: ");
            scanf("%d", &x);
        }
    }
    printf("---------------------\nPlhthos arnhtikwn \t= %d\nPlhthos thetikwn \t= %d\nAthroisma thetikwn \t= %d\nAthroisma arnhtikwn \t= %d\nAthroisma perittwn \t= %d\nAthroisma artiwn \t= %d\n---------------------\n", pl_arnhtikoi, pl_thetikoi, sum_thetikoi, sum_arnhtikoi, sum_peritoi, sum_artioi);
}