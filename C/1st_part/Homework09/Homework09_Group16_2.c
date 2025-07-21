#include <stdio.h>

int main(void)
{
    int *p[3], i, noumero1, noumero2, noumero3;
    printf("\nTha prepei na elegxoume an to trigwno einai orthogwnio, amblugwnio h oksugwnio");
    printf("\nPROSOXH: Prepei h 3h pleura na einai megaluters apo tis alles duo pou edwses\n");
    for (i = 0; i < 3; i++)
    {
        switch (i)
        {
            case 0:
                p[0] = &noumero1;
                printf("\nDwse thn 1h pleura tou trigwnou: ");
                scanf("%d", p[0]);
            break;
            case 1:
                p[1] = &noumero2;
                printf("\nDwse thn 2h pleura tou trigwnou: ");
                scanf("%d", p[1]);
            break;
            case 2:
                printf("\nDwse thn 3h pleura tou trigwnou: ");
                scanf("%d", &noumero3);
                if ((noumero3 > *p[0]) && (noumero3 > *p[1]))
                    *p[2] = noumero3;
                else
                {
                    printf("\nH 3h PLEURA THA PREPEI NA EINAI MIKROTERH APO TIS 2 POU EDWSES, KSANAPROSPATHISE.");
                    i--;
                }
            break;
        }
    }
    for (i = 0; i < 3; i++)
        *p[i] *= *p[i];
    if (((*p[0]) + (*p[1])) == (*p[2]))
        printf("To trigwno einai orthogwnio\n");
    else if (((*p[0]) + (*p[1])) > (*p[2]))
        printf("To trigwno einai amblugwnio\n");
    else if (((*p[0]) + (*p[1])) < (*p[2]))
        printf("To trigwno einai oksugwnio\n");
    return 0;
}