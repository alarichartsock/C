#include <stdio.h>

int main() {
    int a,b;

    printf("Input the first number: ");
    scanf("%i",&a);
    printf("Input the second number: ");
    scanf("%i",&b);

    int result = findLarger(&a,&b);

    printf("The larger number is %i", result);

    return 0;
}

int findLarger(int *n1, int *n2) {
    return (*n1 > *n2) ?  *n1 : *n2;
}
