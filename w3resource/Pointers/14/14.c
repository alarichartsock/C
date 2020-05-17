#include <stdio.h>

int main() {

    int size;

    printf("Input the number of elements to store in the array: ");
    scanf("%i",&size);

    int store[size];

    for(int i=0;i<size;i++) {
        int data;
        printf("Element %i as an integer ",i+1);
        scanf("%i",&data);
        store[i] = data;
    }

    sort(&store);

    for(int i=0;i<size;i++) {
        printf("Element %i: %i",i,store[i]);
    }

    return 0;
}

void sort(*array) {

}
