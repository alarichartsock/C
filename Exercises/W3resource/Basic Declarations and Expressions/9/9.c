#include <stdio.h>

int main() {
    /*This program takes two integers and prints their sum. */
    int firstint;
    int secondint;
    int sum;

    scanf("%i",&firstint);
    scanf("%i",&secondint);

    sum = firstint + secondint;

    printf("%i",sum);

    return 0;

}
