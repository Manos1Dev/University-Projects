#include <stdio.h>

int main(void)
{
    int *arr[3], i, j, k, m, sum = 0;
    // arr[0] = &j;
    // arr[1] = &k;
    // arr[2] = &m;
    for (i = 0; i < 3; i++)
    {
        arr[i] = &m;
        printf("Dwse 3 akeraious, o %dos einai: ", i + 1);
        scanf("%d", arr[i]);
        if (((*arr[i]) & 1) == 0)
            sum += *arr[i];
        (*arr[i] & 1) == 0 ? printf("O arithmos pou edwses (%d) einai artios, opote to sum ginetai (%d)\n", *arr[i], sum) : printf("O arithmos pou edwses (%d) den einai artios, opote to sum tha parameinei (%d)\n", *arr[i], sum);
    }
    printf("To athroisma twn artiwn akeraiwn einai %d \n", sum);
    return 0;
}