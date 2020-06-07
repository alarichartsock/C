#include <stdlib.h>
#include <stdio.h>

int numberOfSteps(int num);

int main() {

	printf("%i",numberOfSteps(123));

	return 0;
}

int numberOfSteps(int num){
	int steps = 0;
	while(num != 0) {
		if((num % 2) == 0) {//checking if num is even
			num /= 2; //divides by two
			steps += 1;
		} else{
			num -= 1;
			steps += 1;
		}
	}
	return steps;
}
