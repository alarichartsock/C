#include <stdio.h>

int main() {
    /*
    This program adds two numbers using pointers.
    */

   int fno, sno, *ptr, *qtr, sum;

   printf("\nPointer : Add two numbers :\n");

   printf(" Input the first number : ");
   scanf("%d", &fno);
   printf(" Input the second  number : ");
   scanf("%d", &sno);

   ptr = &fno;
   qtr = &sno;

   sum = *ptr + *qtr;

   printf(" The sum of the entered numbers is : %d\n\n",sum);

   return 0;
}
