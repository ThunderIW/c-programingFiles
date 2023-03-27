#include <stdio.h>>

int main() {
  printf("Counting up +1\n");
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }

  printf("Counting up +2\n");
  for (int j = 1; j <= 10; j += 2) {
    printf("%d\n", j);
  }
  printf("Couting up +3\n");
  for (int k = 1; k <= 10; k += 3) {
    printf("%d\n", k);
  }
  return 0;
}