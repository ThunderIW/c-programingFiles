#include <stdio.h>

int main() {
  // contiune= skips rest of code and forces the next iteartion of the loop
 //  break = exits a loop/switch
  for(int i=1; i<=20 ; i++ ){
      //Here we can use a contiune statment to skip the numnber 13

      if(i == 13){ //Here we are checking to see if i is 13
          continue;
      }
      else if(i == 4){
          continue;
          
      }
      printf("%d\n",i);
      
  }
  return 0;
}