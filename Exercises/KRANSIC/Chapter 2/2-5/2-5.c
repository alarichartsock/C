#include <stdio.h>

enum bool { NO, YES };

int contains(char str[], char c);
int any(char s1[], char s2[]);

int main() {

	char str1[] = "The quick brown fox jumped over the lazy dog";
	char str2[] = "AEIOUaeiou";
	
	printf("String before: %s", str1);
	printf("\nString after: %i",any(str1,str2));

	return 0;
}

int any(char s1[], char s2[])
{
	int i, j;

	for (i = j = 0; s1[i] != '\0'; i++)
		if(contains(s2, s1[i])) {
			return i;
	}
	return '1';
}

int contains(char str[], char c)
{
	int i = 0;
	
	while (str[i] != '\0')
		if (c == str[i++])
			return YES;
	return NO;
}
