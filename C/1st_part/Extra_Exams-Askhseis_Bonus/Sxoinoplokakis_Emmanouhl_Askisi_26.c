#include <stdio.h>
#define kostos 15
#define a1 12
#define a2 4

int main(void)
{
    int epilogh, i, k, x[a1][a2], pl = 1, krathsh_akurwsh, thesh, grammh, sum = 0, flag = 0, a[a1][a2];
    for (i = 0; i < a1; i++)
        for (k = 0; k < a2; k++)
            x[i][k] = pl++;
    while (1)
    {
        printf("Epelekse 1. Krathsh-Agora, 2. Eisprakseis-Plano, 3. Akurwsh, 4. Termatismos programmatos: ");
        scanf("%d", &epilogh);
        switch (epilogh)
        {
            case 1:
                printf("Diathesima kathismata: \n");
                for (i = 0; i < a1; i++)
                {
                    for (k = 0; k < a2; k++)
                    {
                        if (x[i][k] == -1)
                            printf("*\t");
                        else
                            printf("%d\t", x[i][k]);
                    }
                    printf("\n");
                }
                printf("Poia thesh thes na krathseis;");
                scanf("%d", &krathsh_akurwsh);
                for (i = 0; i < a1; i++)
                {
                    for (k = 0; k < a2; k++)
                    {
                        if (x[i][k] == krathsh_akurwsh)
                        {
                            printf("\nH krathsh einai epituxhs, krathsate thn thesh %d (grammh = %dh - sthlh = %dh)\n", krathsh_akurwsh, i + 1, k + 1);
                            sum += kostos;
                            a[i][k] = x[i][k];
                            x[i][k] = -1;
                            flag = 1;
                        }
                    }
                }
                while (flag == 0)
                {
                    printf("H thesh pou dwsate einai piasmenh, ksanaprospathiste: ");
                    scanf("%d", &krathsh_akurwsh);
                    for (i = 0; i < a1; i++)
                        for (k = 0; k < a2; k++)
                            if (x[i][k] == krathsh_akurwsh)
                            {
                                flag = 1;
                                sum += kostos;
                                x[i][k] = -1;
                            }
                }
                flag = 0;
            break;
            case 2:
                printf("\nTo sunoliko poso pou eispraxthke mexri twra einai %d eurw kai oi theseis einai oi ekshs: \n", sum);
                for (i = 0; i < 12; i++)
                {
                    for (k = 0; k < a2; k++)
                    {
                        if (x[i][k] == -1)
                            printf("*\t");
                        else
                            printf("%d\t", x[i][k]);
                    }
                    printf("\n");
                }
                flag = 0;
            break;
            case 3:
                while (flag == 0)
                {
                    printf("Epelekse thn grammh kai thn thesh pou thes na akurwseis: ");
                    scanf("%d%d", &grammh, &thesh);
                    if (x[grammh][thesh] == -1)
                    {
                        flag = 1;
                        sum -= 12;
                        x[grammh][thesh] = a[grammh][thesh];
                        break;
                    }
                    else
                        printf("H thesh einai adeia.\n");
                }
                flag = 0;
            break;
            case 4:
                return 0;
        }
    }
    return 0;
}

// maybe ready