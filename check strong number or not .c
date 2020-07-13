#include <stdio.h>

int factorial(int number) {
   int fact = 1;
   while(number>1) {
      fact = fact * number;
      number--;
   }
   return fact;
}
int Strongnumber(int n) {
   int temp ;
   int rem ;
   int result = 0;
   temp = n;
   while(temp) {
      rem = temp % 10;
      result = result + factorial(rem);
      temp = temp/10;
   }
   if (result == n)
      return 1;
   else
      return 0;
}
int main() {
   int n = 145;
   if (Strongnumber(n))
      printf("Yes it is a strong number\n");
   else
      printf("no it is not a strong number\n");
   return 0;
}
