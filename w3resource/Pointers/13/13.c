#include <stdio.h>
int main()
{
    char str1[50];
    char *pt;
    int  ctrV,ctrC;
 	printf("\n\n Pointer : Count the number of vowels and consonants :\n");
    printf(" Input a string: ");
    fgets(str1, sizeof str1, stdin);

    pt=str1;

    ctrV=ctrC=0;
    while(*pt!='\0')
    {
        if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
            ctrV++;
        else
            ctrC++;
        pt++; //pointer is increasing for searching the next character
    }

    printf(" Number of vowels : %d\n Number of consonants : %d\n",ctrV,ctrC-1);
    return 0;
}
