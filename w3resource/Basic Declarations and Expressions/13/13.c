#include <stdio.h>

int main() {
    /*This program accepts 3 integers and prints the largest of the 3*/

    int one;
    int two;
    int three;

    printf("Enter three integers");
    scanf("%i",&one);
    scanf("%i",&two);
    scanf("%i",&three);

    if((one > two) && (one >three)) {
        printf("%i",one);
    } else if((two > one) && (two > three)) {
        printf("%i",two);
    } else {
        printf("%i",three);
    }

    return 0;
}
