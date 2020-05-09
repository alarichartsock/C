#include <stdio.h>

int main() {
    /*
    This program prints off a right triangle with a bunch of numbers
    */

    int ctr;

    printf("Please enter the number of iterations: ");
    scanf("%i",&ctr);

    for(int i=0;i<=ctr;i++) {
        for(int j=0;j<i;j++) {
            printf("%i",i);
        }
        printf("\n");
    }

    return 0;
}
