#include <stdio.h>

int main() {
  // do while loop= always executes a block of code once then it checks
  // a condition

  int number = 0;
  int sum = 0;
  do{
    printf("Enter a number above 0 :"); 
    scanf("%d", &number);
    if(number>0){
        sum+=number;
    }
  }while (number > 0); 
  printf("Sum is -> %d",sum);

  return 0;
}