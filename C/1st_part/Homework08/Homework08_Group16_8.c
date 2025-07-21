#include <stdio.h>

int main(void)
{
    int x[10][50], i, k, epilogh, pteruga, krathseis = 0, shmaia = 0, dwmatio;
    printf("EPELEKSE\n1.Emfaish eleutherwn domatiwn\n2.Krathsh dwmatiou\n3.Akurwsh krathshs\n4.Termatismos programmatos\n");
    scanf("%d", &epilogh);
    for (i = 0; i < 10; i++)
    {
        for (k = 0; k < 50; k++)
            x[i][k] = 0;
    }
    while ((epilogh >= 1 && epilogh <= 4) && epilogh != 4)
    {
        if (epilogh == 4)
        {
            printf("\nEpelekses na termatistei to programma\n");
            break;
        }
        else if (epilogh == 1)
        {
            for (i = 0; i < 10; i++)
            {
                for (k = 0; k < 50; k++)
                {
                    if (x[i][k] == 0)
                        printf("To dwmatio %d sthn pteruga %d einai eleuthero\n", k, i);
                    // else
                    //     printf("To dwmatio %d sthn pteruga %d den einai eleuthero\n", k + 1, i + 1);
                }
            }
            printf("\n");
            printf("EPELEKSE\n1.Emfaish eleutherwn domatiwn\n2.Krathsh dwmatiou\n3.Akurwsh krathshs\n4.Termatismos programmatos\n");
            scanf("%d", &epilogh);
        }
        else if (epilogh == 2)
        {
            printf("\n---Epelekses na kaneis krathsh dwmatiou---\nEpelekse thn pteruga pou thes na kaneis krathsh: ");
            scanf("%d", &pteruga);
            if (pteruga >= 0 && pteruga <= 9)
            {
                for (k = 0; k < 50; k++)
                {
                    if (x[pteruga][k] == 0)
                    {
                        x[pteruga][k] = 1;
                        printf("\nH krathsh einai epituxhs, krathses to %d dwmatio sthn pteruga %d\n", k, pteruga);
                        break;
                    }
                    else if (x[pteruga][k] == 1)
                    {
                        int pl = 0;
                        for (i = k; i < 49; i++)
                        {
                            if (x[pteruga][i] == x[pteruga][i + 1])
                                pl++;
                            if (pl == (49 - k))
                            {
                                printf("\nTha prepei na eisageis nea pteruga dioti den uparxoun dwmatia se authn pou epelekses: ");
                                scanf("%d", &pteruga);
                            }
                            if (x[pteruga][i + 1] == 0)
                            {
                                x[pteruga][i + 1] = 1;
                                printf("\nH krathsh einai epituxhs, krathses to %d dwmatio sthn pteruga %d\n", k, pteruga);
                            }
                        }
                    }
                }
            }
            else 
                printf("\nH pteruga auth den uparxei\n");
            printf("\nEPELEKSE\n1.Emfanish eleutherwn domatiwn\n2.Krathsh dwmatiou\n3.Akurwsh krathshs\n4.Termatismos programmatos\n");
            scanf("%d", &epilogh);
        }
        else if (epilogh == 3)
        {
            printf("\n---Epelekses na kaneis akurwsh dwmatiou---\nEpelekse thn pteruga kai ton arithmo dwmatiou pou thes na akurwseis: ");
            scanf("%d %d", &pteruga, &dwmatio);
            if ((pteruga >= 0 && pteruga <= 9) && (dwmatio >= 0 && dwmatio <= 49))
                x[pteruga][dwmatio] = 0;
            else 
                printf("\nH pteruga h to dwmatio den uparxei\n");
            printf("\nEPELEKSE\n1.Emfanish eleutherwn domatiwn\n2.Krathsh dwmatiou\n3.Akurwsh krathshs\n4.Termatismos programmatos\n");
            scanf("%d", &epilogh);
        }
    }
    return 0;
}