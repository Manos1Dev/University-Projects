#include <stdio.h>

int main(void)
{
    float a, b, xlm;
    int step;
    printf("Enter miles interval: ");
    scanf("%f%f", &a, &b);
    printf("Enter step: ");
    scanf("%d", &step);
    printf("MILES\t\t KLM\n");
    printf("-----------------------------------------------------------\n");
    for (a; a <= b; a = a + step)
    {

        xlm = a * 1.6;
        printf("%.2f\t\t%.2f\n", a, xlm);

    }
    return 0;
}