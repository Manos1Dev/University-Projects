#include <stdio.h>

int main(void)
{
    int i, k, x[3][3], sum1 = 0, sum2 = 0;
    for (i = 0; i < 3; i++)
        for (k = 0; k < 3; k++)
        {
            printf("Dwse enan akeraio, %dh sthlh kai %dh grammh: ", k + 1, i + 1);
            scanf("%d", &*(*(x + i) + k));
            if (i + k == 2)
                sum1 += *(*(x + i) + k);
            if (i == k)
                sum2 += *(*(x + i) + k);
        }
    if (sum1 == sum2)
        printf("H kuria diagwnios me thn deutereuousa diagwnio einai ises\n");
    else
        printf("H kuria diagwnios me thn deutereuousa diagwnio den einai ises\n");
    return 0;
}