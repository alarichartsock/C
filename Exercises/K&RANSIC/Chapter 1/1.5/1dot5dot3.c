#include <stdio.h>

//count lines in input

int main() {
	int c, n1;
	
	n1 = 0;
	
	while ((c=getchar()) != EOF) {
		if(c == '\n' ) //Exercise 1-8: Replace '\n' with ' ' for blanks, '\t' for tabs, and '\n' for newlines
			++n1;
	}
	printf("%d\n",n1);
	return 0;
}
