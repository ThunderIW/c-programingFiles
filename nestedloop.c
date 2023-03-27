#include <stdio.h>
int main() {
  //nestedLoop = a loop inside of another loop
  int numOfcolums;
  int numOfRows;
  char symbol;

  printf("Enter # of Colums:");
  scanf("%d", &numOfcolums);

  printf("Enter # of Rows:");
  scanf("%d", &numOfRows);

  scanf("%c");

  printf("Enter a symbol to use:");
  scanf("%c", &symbol);

  for (int i = 1; i <= numOfRows; i++) {
    for (int j = 1; j <= numOfcolums; j++) {
      printf("%c", symbol);
    }
    printf("\n");
  }
}
