#include <stdio.h>

int main() {
    int iterations;
    int sum;

    printf("Please enter a number: ");
    scanf("%i",&iterations);

    for(int i=0;i<=iterations;i++) {
        sum = sum + i;
        printf("%i ",i);

    }

    printf("\n%i",sum);

    return 0;
}
