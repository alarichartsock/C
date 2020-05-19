#include <stdio.h>

int main() {

    int m = 29;
    int *ab;

    printf("Address of m: %p\n", &m);
    printf("Value of m: %i\n\n",m);

    ab = &m;

    printf("Now ab is assigned with the address of m\n");
    printf("Address of pointer ab: %p\n",&ab);
    printf("Content of pointer ab: %i\n",*ab);

    m = 32;

    printf("The value of m is assigned to 32 now\n");
    printf("Address of pointer ab: %p\n",&ab);
    printf("Content of pointer ab: %i\n",*ab);

    *ab = 7;

    printf("The pointer variable ab is assigned to the value 7 now\n");

    printf("Address of m: %p\n", &m);
    printf("Value of m: %i\n\n",m);

    return 0;
}
