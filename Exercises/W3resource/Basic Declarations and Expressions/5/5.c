#include <stdio.h>

int main() {
    /*Takes two inputs, width and height, and computes perimeter and area. The program will fail if the inputs aren't integers. */
    int width;
    int height;
    int perimeter;
    int area;

    printf("Enter the width as an integer:");
    scanf("%i",&width);
    printf("Enter the height as an integer:");
    scanf("%i",&height);

    area = width * height;
    perimeter = (2 * width) + (2 * height);
    printf("The area is %i\n",area);
    printf("The perimeter is %i",perimeter);

    return 0;

}
