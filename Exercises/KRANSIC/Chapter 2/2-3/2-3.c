/*
Not my code
*/
#include <stdio.h>
#define HEX_LO(N) ((N) >= 'a' && (N) <= 'f')
#define HEX_HI(N) ((N) >= 'A' && (N) <= 'F')
#define HEX_NU(N) ((N) >= '0' && (N) <= '9')
#define IS_HEX(N) (HEX_LO(N) || HEX_HI(N) || HEX_NU(N))

unsigned long htoi(char []);
int main(void)
{
    int i;

    char *test[11] = {
        "F00",
        "bar",
        "0100",
        "0x1",
        "0XA",
        "0X0C0BE",
        "abcdef",
        "123456",
        "0x123456",
        "deadbeef",
        "zog_c"
    };

    for(i =0; i < 11; ++i) {
        printf("%10s %10lu\n",test[i], htoi(test[i]));
    }
    return 0;
}

unsigned long htoi(char hexstr[])
{
    int i;
    long num;
    num = 0;
    i = 0;
    char j;
    if(hexstr[0] == '0' && (hexstr[1] == 'x' || hexstr[1] =='X')) i = 2;

    while(hexstr[i] != '\0') {
        j = hexstr[i];
        if(! IS_HEX(j)) return 0;
        if(HEX_LO(j)) num = num * 16 + 10 + j - 'a';
        else if(HEX_HI(j)) num = num * 16 + 10 + j - 'A';
        else num = num * 16 + j - '0';
        i++;
    }
    return num;
}
