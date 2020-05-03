#include <stdio.h>

int main() {
    /*This program will calculate the fuel efficiency of any motor vehicle*/

    int miles;
    double consumption;
    double efficiency;

    printf("Enter the total distance traveled as an integer:\n");
    scanf("%i",&miles);
    printf("Enter the fuel consumption:\n");
    scanf("%lf",&consumption);

    efficiency = miles / consumption;

    printf("The efficiency is %lf",efficiency);

    return 0;
}
