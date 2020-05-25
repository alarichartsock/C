#include <stdio.h>
#include <math.h>

int main() {
    /*This program will calculate the distance between two points*/

    double x1;
    double y1;
    double x2;
    double y2;
    double distance;

    printf("Enter x1:\n");
    scanf("%lf",&x1);
    printf("Enter y1:\n");
    scanf("%lf",&y1);
    printf("Enter x2:\n");
    scanf("%lf",&x2);
    printf("Enter y2:\n");
    scanf("%lf",&y2);

    distance = ((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1));
    distance = sqrt(distance);

    printf("The distance between the specified points is %lf",distance);

    return 0;
}
