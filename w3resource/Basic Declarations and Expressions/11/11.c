#include <stdio.h>

int main() {
    /*Accepts info about two items weight and price, and returns the average price of both items*/
    int item1price;
    int item1weight;
    int item2price;
    int item2weight;
    double averageprice;

    printf("Item 1 price as an integer:\n");
    scanf("%i",&item1price);
    printf("Item 1 weight as an integer:\n");
    scanf("%i",&item1weight);
    printf("Item 2 price as an integer:\n");
    scanf("%i",&item2price);
    printf("Item 2 weight as an integer:\n");
    scanf("%i",&item2weight);

    averageprice = ((item1price * item1weight) + (item2price * item2weight)) / (item1price + item2price);

    printf("%f",averageprice);

    return 0;

}
