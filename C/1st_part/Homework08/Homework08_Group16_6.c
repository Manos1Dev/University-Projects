#include <stdio.h>
#define SIZE 5

int main(void)
{
    int *ptr, arr[SIZE];
    ptr = arr + 5;
    // for (*ptr; *ptr > 0; *ptr--);
    // {
    //     // ptr = &arr[SIZE - 1];
    //     scanf("%d", ptr);
    //     if (ptr == 0)
    //         arr[0] = *ptr;
    //     else if (*ptr == 0)
    //         // break;
    //     // else if (*ptr < arr[*ptr - 1])
    //     //     arr[*ptr] = *ptr;
    // }
    return 0;
}