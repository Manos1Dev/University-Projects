#include <stdio.h>

int main(void)
{
    float b, sum1 = 0, sum2 = 0, k = 0; 
    int f1 = 0, f2 = 0;
    printf("Tha prepei na dwthoun 100 bathmoi apo kathe foithth se ena mathima\n");
    scanf("%f", &b);
    while ((b != -1) && k < 99)
    {
        if (b <= 10 && b >= 5)
        {
            sum1 = sum1 + b;
            f1 = f1 + 1;
            k++;
        }
        else if (b >= 0 && b < 5)
        {
            sum2 = sum2 + b;
            f2 = f2 + 1;
            k++;
        }
        else if (b < 0 || b > 10)
        {
            printf("Den edwses egkuro bathmo, prospathise pali gia ton idio foithth\n");
        }
        scanf("%f", &b);
    }
    printf("MO epituxontwn: %.1f\nMO apopituxontwn: %.1f", sum1 / f1, sum2 / f2);
    return 0;
}