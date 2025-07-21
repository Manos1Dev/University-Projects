#include <stdio.h>

int main(void)
{
    int a, k, k1, x, y, z, w;
    printf("PROSEXE MHN EXEIS DWSEI 0 STOUS PARANOMASTES\n");
    printf("Dwse ton arithmith tou prwtou klasmatos: ");
    scanf("%d", &x);
    printf("Dwse ton paranomasth tou prwtou klasmatos: ");
    scanf("%d", &z);
    printf("Dwse ton arithmith tou deuterou klasmatos: ");
    scanf("%d", &y);
    printf("Dwse ton paranomasth tou deuterou klasmatos: ");
    scanf("%d", &w);
    printf("Epileske gia 1 = prosthesh, 2 = afairesh, 3 = pollaplasiamo, 4 = diaiaresh\n");
    scanf("%d", &a);
    if ((z - w) != 0 && (z - w) != 0) {
        switch (a) {
            case 1:
                k = (x * w) + (y * z);
                k1 = (z * w);
                printf("To apotelesma ths prostheshs einai (%d/%d) + (%d/%d) = %d/%d", x, z, y, w, k, k1);
            break;
            case 2:
                k = (x * w) - (y * z);
                k1 = (z * w);
                printf("To apotelesma ths afaireshs einai (%d/%d) - (%d/%d) = %d/%d", x, z, y, w, k, k1);
            break;
            case 3:
                k = (x * y);
                k1 = (z * w);
                printf("To apotelesma ths pollaplasiamou einai (%d/%d) * (%d/%d) = %d/%d", x, z, y, w, k, k1);
            break;
            case 4:
                k = (x * w);
                k1 = (z* y);
                printf("To apotelesma ths diaiareshs einai (%d/%d) / (%d/%d) = %d/%d", x, z, y, w, k, k1);
            break;
            
        }
        return 0;
    }
    else
    {
        printf("O paranomasths egine 0, ara den mporei na ginei h praksh");
        return 0;
    }
    return 0;
}