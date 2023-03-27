#include <stdio.h>

int main() {
  // array= a data structure that can be store many values of the same data type
  double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
  // can't change the size of the array later on

  // here we are setting the deafult size of our predefiend array, which
  // in this case is 5 elements of double vaules
  double pricesSetLength[5];

  pricesSetLength[0] = 5.0;
  pricesSetLength[1] = 10.0;
  pricesSetLength[2] = 15.0;
  // Here we are adding elements to our array at specfic postion

  for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
    printf("$%.2lf\n", prices[i]);
  }
  return 0;
}