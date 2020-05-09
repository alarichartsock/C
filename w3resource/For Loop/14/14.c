#include <stdio.h>

int main() {
    /*
    Prints out an asterisk tree
    */

    int rows,span;

    printf("Input number of rows : ");
    scanf("%d",&rows);
    span = rows + 3;

    for(int i=0;i<=rows;i++) {
        for(int j=span;j>=i;j--) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            printf("* ");

        }
        printf("\n");
    }

    return 0;
}
