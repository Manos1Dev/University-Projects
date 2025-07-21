#include <stdio.h>

int main(void)
{
    int a[10], i, pl = 0;
    double x, y;
    printf("\nDwse ena diasthma me duo pragmatikous arithmous (o prwtos prepei na einai mikroteros): ");
    scanf("%lf%lf", &x, &y);
    for (i = 0; i < 10; i++)
    {
        if (x <= y)
        {
            printf("Dwse tous bathmous 10 foithtwn, o %dos exei bathmo: ", i + 1);
            scanf("%d", &a[i]);
            if (a[i] >= x && a[i] <= y) 
                pl++;
        }
        else
        {
            printf("O prwtos arithmos einai megaluteros apo ton deutero\n");
            break;
        }
    }
    if (x <= y)
        printf("Oi foithtes pou exoun bathmo sto diasthma [%.1f, %.1f] einai %d\n", x , y, pl);
    return 0;
}