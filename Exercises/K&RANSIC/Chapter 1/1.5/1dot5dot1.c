#include <stdio.h>

int main() {
	int c;
	printf("%i",EOF); //Exercise 1-7. EOF is -1.
	while((c = getchar()) != EOF) { 
			putchar(c);
	}

	return 0;
}

//Exercise 1-6 done
