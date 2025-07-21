#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define grammh 4
#define sthlh 13
enum card { SA = 1, S2, S3, S4, S5, S6, S7, S8, S9, S10, SJ, SQ, SK, DA, D2, D3, D4,
D5, D6, D7, D8, D9, D10, DJ, DQ, DK, CA, C2, C3, C4, C5, C6, C7, C8, C9, C10, CJ,
CQ, CK, HA, H2, H3, H4, H5, H6, H7, H8, H9, H10, HJ, HQ, HK };

int main(void) 
{
    int x, paiktes, i;
    printf("\nKalwshrthes sto 2o kalutero paixnidi tou kosmou.\nArxika prepei na epilekseis posoi paiktes tha summetexoun\nPROSOXH: Oi paiktes tha prepei na einai panw apo 2 kai mikroteroi tou 5 (AN THES NA STAMATHSEIS EPELEKSE 0): ");
    scanf("%d", &paiktes);
    while (paiktes != 0)
    {
        if (paiktes >= 2 && paiktes <= 5)
        {
            int hlikia[paiktes];
            printf("Dwse thn hlhkia twn %d paiktwn\n", paiktes);
            for (i = 0; i < paiktes; i++)
            {
                printf("O %dos paikths einai: ", i + 1);
                scanf("%d", &hlikia[i]);
            }
        }
        else if (paiktes != 0 && paiktes < 2 || paiktes > 5)
        {
            printf("\nERROR 456: Den edwses panw apo 2 paiktes kai ligoterous apo 5. Se eixa proeidopoihsei. Ksanaprospathise: ");
            scanf("%d", &paiktes);
        }
        else if (paiktes == 0)
        {
            printf("\nEpelekses na stamathseis, euxaristw pou epekses to 2o kalutero paixnidi tou kosmou\n");
            return 0;
        }
        // ---usefull---
        // srand(time(NULL));
        // x = rand() % (card = 1) + 1;
        // printf("%d\n", x);

        // ---------------------- //

        // srand(12);
        // printf("%d", rand());
    }
    return 0;
}