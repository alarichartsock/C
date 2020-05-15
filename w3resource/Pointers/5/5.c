#include <stdio.h>

int main() {
    /*
    This program adds two numbers using call by reference.
    */

   int fno, sno, *ptr, *qtr, sum;

   printf("This program will add two numbers using call by reference\n\n");

   printf(" Input the first number : ");
   scanf("%d", &fno);
   printf(" Input the second  number : ");
   scanf("%d", &sno);

   ptr = &fno;
   qtr = &sno;

   sum = add(ptr,qtr);

   printf(" The sum of the entered numbers is : %d\n",sum);

   return 0;
}

   int add(int *num1,int *num2) {
        return *num1 + *num2;
   }
