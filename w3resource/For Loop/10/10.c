#include <stdio.h>

int main() {
    /*
    This program displays a right angle with numbers.
    */

    int ctr;
    printf("Please enter your number of iterations. ");
    scanf("%i",&ctr);

    for(int i=0;i<ctr;i++) {
        for(int j=0;j<=i;j++) {
            printf("%i",j+1);
        }
        printf("\n");
    }

    return 0;
}
