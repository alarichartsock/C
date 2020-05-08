#import <stdio.h>

int main() {
    /* This program finds the cube of integers up to a given integer. The user enters the upper bound integer.
    */

    int ctr;

    printf("Enter the number you'd like to find the cube of ");
    scanf("%i",&ctr);

    for(int i=0;i<ctr;i++) {
        printf("The number is %d and the cube of %d is %d\n",i,i,(i*i*i));
    }

    return 0;
}
