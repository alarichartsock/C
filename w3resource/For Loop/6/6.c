#include <stdio.h>

int main() {
    /*
    This program will display the multiplication table of a given integer.
    */
    int ctr;


    printf("Enter your number ");
    scanf("%i",&ctr);

    for(int i=0;i<ctr;i++) {
        printf("%i x %i = %i\n",ctr,i,i*ctr);
    }

    return 0;
}
