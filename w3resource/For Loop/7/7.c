#include <stdio.h>

int main() {
    /*This program will display a horizontal multiplication table up to n*/

    int ctr;

    printf("Enter the upper bound integer for your multiplication table: ");
    scanf("%i",&ctr);

    for (int i=1;i<12;i++) {
        for (int j=1;j<ctr;j++) {
            printf("[%ix%i] = %i ",j,i,j*i);
        }
        printf("\n");
    }

    return 0;
}
