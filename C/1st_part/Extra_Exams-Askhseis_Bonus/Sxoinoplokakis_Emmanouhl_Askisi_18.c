#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define eee 100

int main(void)
{
    int rouleta[eee], markes = 100, aksia = 1, pl1 = 0, pl2 = 0, pl3 = 0, i;
    srand(time(NULL));
    for (i = 0; i < eee; i++)
    {
        markes -= 2;
        rouleta[i] = rand() % 37;
        if (rouleta[i] == 0)
        {
            pl1++;
            markes += 36 * aksia;
        }
        if (rouleta[i] & 1 == 1)
        {
            pl3++;
            markes += 2 * aksia;
        }
        else
            pl2++;
    }
    printf("SUXNOTHTA EMAFANISHS ARTIOU APOTELSMATOS: %d\n", pl2);
    printf("SUXNOTHTA EMAFANISHS PERITTOU APOTELSMATOS: %d\n", pl3);
    printf("SUXNOTHTA EMAFANISHS TOU MHDEN (0): %d\n", pl1);
    if (markes > 100)
        printf("O PAIXTHS SYNOLIKA EΙΝΑΙ KERDISΜΕΝΟS ΚΑΤΑ: %d\n", markes - 100);
    else
        printf("O PAIXTHS SYNOLIKA EΙΝΑΙ XAMENOS ΚΑΤΑ: %d MARKES\n", 100 - markes);
    return 0;
}