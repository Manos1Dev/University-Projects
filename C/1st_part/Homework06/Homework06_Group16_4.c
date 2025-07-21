#include <stdio.h>

int main(void)
{
    int i = 0, k = 0;
    double x, a[101];
    printf("Dwse enan pragmatiko arithmo (pata -1 gia na stamathseis): ");
    scanf("%lf", &x);
    while (x != -1)
    {
        if (i >= 0 && i <= 99)
        {
            if (x >= 5)
            {
                a[i] = x;
                i++;
            }
        }
        printf("Dwse eana pragmatiko arithmo (dwse -1 gia na stamathseis): ");
        scanf("%lf", &x);
        k++;
    }
    for (i = 0; i < 100; i++)
    {
        if (a[i] < a[i])
            a[101] = a[i];
        else
            a[101] = a[i];
    }
    printf("H elaxisth timh einai %f", a[6]);
    return 0;
}