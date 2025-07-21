#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char x[101] = "\0";
    printf("Dwse mexri 100 xarakthres: ");
    fgets(x, sizeof(x), stdin);
    printf("Egine:");
    for (i = strlen(x) - 4; i >= 0; i--)
        printf("%c", x[i]);
    printf("\n");
    return 0;
}