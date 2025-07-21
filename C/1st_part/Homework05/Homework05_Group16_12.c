#include <stdio.h>

int main(void)
{
    int n, i = 5, n1, n2;
    double n3 = 0;
    printf("Dwse enan akeraio pou na einai thetikos\n");
    scanf("%d", &n);
    if (n > 0)
    {
        do
        {
            n1 = 5 * i;
            n2 = 3 * (i-2);
            n3 = n3 + (n1 / n2); 
            printf("%d/%d\n", n1, n2);
            i++;
        } while (n > n3);
    }
    else
        printf("Den edwses thetiko arithmo");
    printf("To apotelesma einai %f", n3);
    return 0;
}