#include <stdio.h>

int main(void) {
  printf("Dwse mia IP (THA PREPEI NA EINAI X.X.X.X)\n");
  unsigned char x, y, z, w;
  scanf("%d.%d.%d.%d", &w, &z, &y, &x);
  printf("H epomenh IP einai: %d.%d.%d.%d\n", w, z, y, x+1);
  printf("H prohgoumenh IP einai: %d.%d.%d.%d\n", w, z, y, x-1);
  return 0;
}