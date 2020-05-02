#include <stdio.h>

int main() {
    /*This program calculates how many weeks, months, and years are composed of a given set of days.*/
    int days;
    int weeks;
    int months;
    int years;

    printf("Enter the number of days that you'd like to calculate as an integer:\n");
    scanf("%i",&days);

    years = days / 365;
    months = days / 30;
    weeks = days / 7;

    printf("%i\n",years);
    printf("%i\n",months);
    printf("%i\n",weeks);

    return 0;
}
