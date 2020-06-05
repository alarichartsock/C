#include <stdio.h>

int main() {

	int length;

	printf("How many iterations do you want?");
	scanf("%i",&length);

	for(int i=1;i<length;i++) {
		if((i % 5 == 0) && (i % 15 == 0)) {
			printf("buzz ");
		} else if (i % 5 == 0) {
			printf("fizz ");
		} else {
			printf("%i ",i);
		}
	}

	return 0;
}
