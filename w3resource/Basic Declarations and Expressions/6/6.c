#include <stdio.h>
#include <math.h>

int main() {
    /*Takes one inputs, radius, and computes circumference and area. The program will fail if the input isn't an integer*/
    double circumference;
    double area;

    printf("Enter the radius as an integer:");
    scanf("%i",&radius);

    circumference = M_PI * radius * 2;
    area = M_PI * radius * radius;

    printf("The circumference is %lf\n",circumference);
    printf("The area is %lf",area);


    return 0;
}
