#include <stdio.h>

int main(void)
{
    int x, y, z, w;
    float kostos;
    printf("Epelese 1 gia motosukleta h 2 gia autokinhto\n");
    scanf("%d", &x);
    printf("Dwse ton kubismo tou oxhmatos\n");
    scanf("%d", &y);
    printf("Poses meres tha to noikiaseis;\n");
    scanf("%d", &z);
    printf("Thes na asfaliseis to oxhma sou;(EPELEKSE 1 = NAI, 2 = OXI)(H EPIBARUNSH EINAI 5%%)\n");
    scanf("%d", &w);
    if (x == 1)
    {
        if (y > 0 && y <= 100)
        {
            switch (z) {
            case 1: 
            case 2:
                kostos = 30 * z;
                break;
            case 3:
            case 4:
            case 5:
                kostos = 25 * z;
                break;
            default:
                kostos = 20 * z;
                break;
            }
        } 
        else
        {
            switch (z) {
            case 1: 
            case 2:
                kostos = 40 * z;
                break;
            case 3:
            case 4:
            case 5:
                kostos = 35 * z;
                break;
            default:
                kostos = 30 * z;
                break;
            }
        }
    }
    else if (x == 2)
    {
        if (y >= 0 && y <= 1000)
        {
            switch (z) {
            case 1: 
            case 2:
                kostos = 60 * z;
                break;
            case 3:
            case 4:
            case 5:
                kostos = 55 * z;
                break;
            default:
                kostos = 50 * z;
                break;
            }
        }
        else
        {
            switch (z) {
            case 1: 
            case 2:
                kostos = 80 * z;
                break;
            case 3:
            case 4:
            case 5:
                kostos = 70 * z;
                break;
            default:
                kostos = 60 * z;
                break;
            }
        }
    }
    if (w == 1) {
        printf("To kostos me thn epibarunsh ths asfalishs einai %.2f eurw", (kostos + (kostos * 5/100)));
    } 
    else if (w == 2)
    {
        printf("To kostos xwris thn epibarunsh ths asfalishs einai %.2f eurw", kostos);
    }
    return 0;
}