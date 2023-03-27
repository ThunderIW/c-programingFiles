#include <stdio.h>
void func1() { printf("F1"); }
void birthday(char x[], int y) {
  printf("\nHappy birthday dear %s !",x);
  printf("\nYou are %d years old");
}


void Currentage(int yearOfBirth){
    int currentYear = 2023;
    int age = currentYear-yearOfBirth;
    printf("You are %d years old this year",age);
    
}

int main() {
  int age;
    printf("Please type what year you were born in :");
    scanf("%d",&age);
    Currentage(age);
  return 0;
}