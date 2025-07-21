#include <stdio.h>

int main(void)
{
    int pl1 = -1, y, r = 1;
    double *p1, x, k;
    p1 = &x;
    printf("Dwse enan dekadiko arithmo merxi 6 dekadika pshfia: ");
    scanf("%lf", p1);
    for (k = *p1; ; k *= 10)
    {
        if ((int) k % 10 == 0)
        {
            k /= 10; 
            y = k;
            break;
        }
        pl1++;
    }
    for (k = 1; k <= pl1; k++)
        r *= 10;
    printf("to r einai %d", r);
    r = y % r;
    if (r < 0)
        printf("\nEgine 0.%d\n", -r);
    else 
        printf("\nEgine 0.%d\n", r);
    return 0;
}