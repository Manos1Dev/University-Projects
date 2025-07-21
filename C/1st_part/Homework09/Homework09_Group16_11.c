#include <stdio.h>

int main(void)
{
    char x;
    int sum1 = 0, sum2 = 0, i;
    printf("Dwse enan xarakthra (prosmertietai mono o prwtos xarakthras pou eisageis kathe fora)\n");
    x = getchar();
    while (sum1 <= 500 && x != 'q')
    {
        if (x != '\n')
        {
            sum2 = sum1;
            sum1 += x; 
            if (sum1 > 500)
                break;
            else
                i++;
        }
        x = getchar();
    }
    printf("Diavasthkan %d xarakthres mexri to athroisma na ginei 500 h na dwthei to q\n", i);
    return 0;
}