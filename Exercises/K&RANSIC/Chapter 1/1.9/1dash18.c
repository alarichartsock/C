#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[],int maxline);

// print longest input line 

int main() {

	int len;
	char line[MAXLINE];
	

	while((len = getLine(line,MAXLINE))>0) {
		printf("%s",line);
	}

	return 0;
}

//getline: read a line into s, return length
int getLine(char s[], int lim) {
	int c, i;

	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!= '\n'; ++i)
		if((i==lim && c==' ') || c=='\t' ) {
			i--;
		} else {
			s[i] = c;
		}
	if (c == '\n') {
		s[i] = c;
		++i;
	} 
	s[i] = '\0';
	return i;
}
