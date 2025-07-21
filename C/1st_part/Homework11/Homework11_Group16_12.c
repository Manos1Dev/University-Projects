#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char x1[100], x2[100], x3[100], x4[100];
    fgets(x1, sizeof(x1), stdin);
    fgets(x2, sizeof(x2), stdin);
    fgets(x3, sizeof(x3), stdin);
    strcpy(x4, x1);
    strcpy(x1, x3);
    strcpy(x3, x2);
    strcpy(x2, x4);
    printf("----------------------\n");
    puts(x1); 
    puts(x2);
    puts(x3);
    return 0;
}