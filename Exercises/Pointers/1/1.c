#include <stdio.h>

int main() {
    /*
    not my code
    */
    int m=10,n,o;
    int *z=&m;

    printf("Z stores the address of %p\n",z);
    printf("Z stores the value of %i\n",*z);
    printf("&m is the address of %p\n",&m);
    printf("&n stores the address of n = %p\n",   &n);
	printf("&o  stores the address of o = %p\n",   &o);
	printf("&z stores the address of z = %p\n\n", &z); // &z gives the address, where the pointer z is

    return 0;
}
