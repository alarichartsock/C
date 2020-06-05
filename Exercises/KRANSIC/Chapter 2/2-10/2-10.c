#include <stdio.h>

unsigned char llower(char);

int main(void)
{
    int i;
    char test[] = "AaBbCcdDeE1234ZzyY";
    i = 0;
    puts(test);
    while(test[i] != '\0')putchar(llower(test[i++]));
    putchar('\n');
}

unsigned char llower(char x)
{
    return (x >= 'A' && x <= 'Z') ? x = x - 'A' +'a' : x;
}
