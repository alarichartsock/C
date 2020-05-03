#include <stdio.h>

int main() {
    /*This program will break the amount specified into the smallest amount of bank notes possible*/

    int amount;
    int hundred;
    int fifty;
    int twenty;
    int ten;
    int five;
    int two;
    int one;

    printf("Please enter the amount as an integer:\n");
    scanf("%i",&amount);

    hundred = amount / 100;
    amount = amount - (hundred * 100);
    fifty = amount / 50;
    amount = amount - (fifty * 50);
    twenty = amount / 20;
    amount = amount - (twenty * 20);
    ten = amount / 10;
    amount = amount - (ten * 10);
    five = amount / 5;
    amount = amount - (five * 5);
    two = amount / 2;
    amount = amount - (two * 2);
    one = amount / 1;
    amount = amount - (one * 1);

    printf("%i notes of 100\n",hundred);
    printf("%i notes of 50\n",fifty);
    printf("%i notes of 20\n",twenty);
    printf("%i notes of 10\n",ten);
    printf("%i notes of 5\n",five);
    printf("%i notes of 2\n",two);
    printf("%i notes of 1\n",one);

    return 0;
}
