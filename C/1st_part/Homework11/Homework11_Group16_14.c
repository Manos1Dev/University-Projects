#include <stdio.h>
#include <string.h>

int test(char x[101], char k);

int main(void)
{
    int i;
    char x[100] = {'\0'}, k;
    while (1)
    {
        printf("Dwse mexri 100 xarakthres se ena alfarithmitiko (grapse end gia na teleiwsei to programma):");
        fgets(x, sizeof(x), stdin);
        if (x[0] == 'e' && x[1] == 'n' && x[2] == 'd')
            return 0;
        printf("Dwse 1 xarakthra gia na deis poses fores emfanisthke: ");
        scanf("%s", &k);
        printf("O arithmos %c emfanisthke %d fores\n", k, test(x, k));
        i = 0;
        while (x[i] = getchar() != '\n' && x[i] != EOF)
            i++;
    }
    return 0;
}

int test(char x[100], char k)
{
    int i, pl1 = 0;
    for (i = 0; i < 100; i++)
        if (x[i] == k)
            pl1++;
    return pl1;
}