#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, k, pl1 = 0, pl2 = 0;
    char x1[100] = "\0", x2[100] = "\0";
    printf("| Prepei to deutero alfarithmitiko na einai mikrotero h iso apo to prwto |\n");    
    do
    {
        printf("Dwse mexri 100 xarakthres gia to prwto alfarithmitiko: ");
        fgets(x1, sizeof(x1), stdin);
        printf("Dwse mexri 100 xarakthres gia to deutero alfarithmitiko: ");
        fgets(x2, sizeof(x2), stdin);
        pl1 = strlen(x1);
        pl2 = strlen(x2);
    } while(pl1 < pl2);
    if (strcmp(x1, x2) == 0)
        printf("Einai isa ta duo alfarithmitika.\n");
    else
        printf("Den einai isa ta duo alfarithmitika.\n");
    return 0;
}

// --- tropos xwris strcmp() --- 
// for (i = 0; i < 101; i++)
// {
//     if (x1[i] == '\n' || x2[i] == '\n')
//         break;-
//     for (k = 0; k < 10; k++)
//         if (x2[i] == x1[k])
//             pl1++;
// }
// printf("To deutero alfarithmitiko emperiexetai %d fores kai \n", pl1);