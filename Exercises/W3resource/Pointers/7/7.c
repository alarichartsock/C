#include <stdio.h>

int main() {

    int size;
    int *current;

    printf("Enter the size of your array: ");
    scanf("%i",&size);

    int list[size];

    for(int i=0;i<size;i++) {
        int j;
        printf("Enter an integer for your array: ");
        scanf("%i",&j);
        list[i] = j;
    }

    for(int i=0;i<size;i++) {
        current = &list[i];
        printf("%i\n",*current);
    }
    return 0;
}
