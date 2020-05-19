#include <stdio.h>

int main() {
    int sum = 0;
    float average;
    for(int i=0;i<10;i++) {
        int answer;
        scanf("%i",&answer);
        sum = sum + answer;
    }
    printf("Sum: %i\n",sum);
    average = sum / 10.0;
    printf("Average: %f\n",average);


    return 0;
}
