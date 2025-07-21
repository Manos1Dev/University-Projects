#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, pl1 = 0, pl2 = 0;
    char str[100] = {'\0'};
    printf("Dwse 100 xarakthres se mia grammh: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i < 100; i++)
    {
        if (str[i + 1] != '\0')
            pl2++;
        if (str[i] == ' ')
            str[i] = '_';
        else if (str[i] == 'x')
            pl1++;
        else if (str[i] == 'z')
            str[i] = 's';
    }
    printf("\nEgine:");
    puts(str);
    printf("O xarakthras x emfanisthke %d fores\nOi xarakthres einai %d\n", pl1, pl2);
    return 0;
}