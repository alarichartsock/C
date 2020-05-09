#include <stdio.h>

int main() {

    int ctr;
    int total = 1;


    printf("Input what you'd like to be factorialized: ");
    scanf("%d",&ctr);

    for(int i=1;i<=ctr;i++) {
        total = total * i;
    }
    printf("%i",total);

    return 0;
}
