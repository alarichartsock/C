#include <stdio.h>

int main() {

    int *arr,size,sum=0;


    printf("Enter the size of your array: ");
    scanf("%i",&size);
    arr = (int*)calloc(size,sizeof(int));

    for(int i=0;i<size;i++) {
        printf("Element %i: ",i+1);
        scanf("%i",arr+i);
    }

    for(int i=0;i<size;i++) {
        sum = sum + *(arr+i);
    }

    printf("The total size is %i",sum);

    return 0;
}
