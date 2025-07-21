#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, epilogh, sum = 0, aaa = 0;
    srand(time(NULL));
    printf("\nEpelekse 1 gia artio, 2 gia peritto, 3 gia na stamathseis\n");
    scanf("%d", &epilogh);
    while (aaa != 1) 
    {
        x = rand() % 11 + 1;
        switch (epilogh)
        {
            case 1:
                if (x & 1 == 1)
                {
                    printf("Kerdisate!!! (O arithmos %d perittos)\n", x);
                    sum++;
                }
                else
                {
                    printf("\nXasate xasate!!!\n");
                    aaa = 1;
                }
                break;
            case 2:
                if (x & 1 == 0)
                {
                    printf("Kerdisate!!! (O arithmos %d artios)\n", x);
                    sum++;
                }
                else
                {
                    printf("\nXasate!!!\n");
                    aaa = 1;
                }
                break;
        }
        if (aaa == 0)
        {
            printf("\nEpelekse 1 gia artio, 2 gia peritto, 3 gia na stamathseis\n");
            scanf("%d", &epilogh);
        }
    }
    printf("Dwsate %d swstes apanthseis \n", sum);
    return 0;
}