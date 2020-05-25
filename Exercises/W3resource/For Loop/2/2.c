#include <stdio.h>

int main() {
    int total = 0;

    for(int i=1;i<11;i++) {
        total = total + i;
    }

    printf("%i",total);

    return 0;
}
