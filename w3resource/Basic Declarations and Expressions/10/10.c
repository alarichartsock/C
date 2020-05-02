#include <stdio.h>

int main() {
    /*This program takes two integers and prints their product. */
    int firstint;
    int secondint;
    int product;

    scanf("%i",&firstint);
    scanf("%i",&secondint);

    product = firstint * secondint;

    printf("%i",product);

    return 0;

}
