#include <stdio.h>

int main(void) {
    printf("Posoi mathites petuxan stis eksetaseis;\n");
    int x, y;
    scanf("%d", &x);
    printf("Posoi mathites apetuxan stis eksetaseis;\n");
    scanf("%d", &y);
    int sum = (x+y);
    int epituxia = ((x * 100) / sum);
    int apotuxia = ((y * 100) / sum);
    printf("Success ratio: %d%%\nFail ratio: %d%%", epituxia, apotuxia);
    return 0;
}