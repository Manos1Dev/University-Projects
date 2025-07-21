#include <stdio.h>

int main(void)
{
    int n, i = 1, x = 3;
    double ap = 0;
    printf("Dwse enan peritto arithmo\n");
    scanf("%d", &n);
    if (n & 1 == 1)
    {
        do
        {
            ap = ap + ((i * x));
            // printf("To apotelesma einai %.3f\n", ap);
            i = i + 2;
            x = x + 2;
        } while (i <= n);
        ap = 1 / ap;
        printf("Einai %f\n", ap);
    }
    else
        printf("Den edwses peritto\n");
    return 0;
}