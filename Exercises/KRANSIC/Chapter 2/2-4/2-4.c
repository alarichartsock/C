#include <stdio.h>

enum bool { NO, YES };

int contains(char str[], char c);
void squeeze(char s1[], char s2[]);

int main() {

	char str1[] = "The quick brown fox jumped over the lazy dog";
	char str2[] = "AEIOUaeiou";
	
	printf("String before: %s", str1);
	squeeze(str1,str2);
	printf("String after: %s",str1);

	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i, j;

	for (i = j = 0; s1[i] != '\0'; i++)
		if(! contains(s2, s1[i]))
			s1[j++] = s1[i];
	s1[j] = '\0';
}

int contains(char str[], char c)
{
	int i = 0;
	
	while (str[i] != '\0')
		if (c == str[i++])
			return YES;
	return NO;
}

