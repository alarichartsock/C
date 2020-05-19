#include <stdio.h>

int main() {
    int i;
    int j;
    int k;

    int* a;
    int* b;
    int* c;

    a = &i;
    b = &j;
    c = &k;

    printf("Enter element 1: ");
    scanf("%i",&i);
    printf("\nEnter element 2: ");
    scanf("%i",&j);
    printf("\nEnter element 3: ");
    scanf("%i",&k);

    swap(a,b,c,i,j,k);

    printf("Element 1 is %i\n",i);
    printf("Element 2 is %i\n",j);
    printf("Element 3 is %i\n",k);

    return 0;
}

void swap(int* a, int* b, int* c,int i, int j,int k) {
    *a = k;
    *b = i;
    *c = j;
}
