#include <stdio.h>

int main(void)
{
    int x, i = 1, y;
    printf("Dwse enan akeraio\n");
    scanf("%d", &x);
    // i = i  ;
    y = x;
    do 
    {
        if (i == 1 && x < 0) {
            printf("minus ");
        } else if (i == 2 && x >= 10000 ) {
            x = (x / 10000) ;
        } else if (i == 3 && x >= 1000) {
            x = (x / 1000) % 10;
        } else if (i == 4 && x >= 100) {
            x = (x / 100) % 10;
        } else if (i == 5 && x >= 10 ) {
            x = (x / 10) % 10;
        } else if (i == 6 && x >= 0) {
            x = x  % 10;
        }
        switch (x) 
        {
        case 0:
            printf("zero ");
            break; 
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
        if (i == 1 && x < 0)
        {
            y = (y * (-1));
            x = y;
        }
        else
            x = y;
        i++;
    } while (i <= 6 && x <= 99999 && x >= -99999);
    return 0;
}