#include <stdio.h>

int main() {
    /*
    This program displays a right angle with asterisks.
    */

    int ctr;
    printf("Please enter your number of iterations: ");
    scanf("%i",&ctr);

    for(int i=0;i<ctr;i++) {
        for(int j=0;j<i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
