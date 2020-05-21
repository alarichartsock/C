#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    This program will reverse an array.
    */
    int size,sum=0;

    printf("Enter the size of your array: ");
    scanf("%i",&size);
    int array[size];

    for(int i=0;i<size;i++) {
        printf("Element %i: ",i+1);
        scanf("%i",&array[i]);
    }

    printf("\nThis is your array before reversal");
    printarray(array,size);

    int rev[size];

    for(int i=0;i<size;i++) {
        rev[size-i-1] = array[i];
    }
    for(int i=0;i<size;i++) {
        array[i] = rev[i];
    }

    printf("\nThis is your array after reversal");
    printarray(array,size);

    return 0;
}

void printarray(int arr[], int size) {
    for(int i=0;i<size;i++) {
        printf("\nElement %i: %i",i,arr[i]);
    }
}
