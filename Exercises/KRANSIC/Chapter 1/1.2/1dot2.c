#include <stdio.h>

//Print Fahrenheit-Celsius table for fahr = 0, 20, .., 300 

int main() {
	float fahr, celsius;
	int lower,upper,step;
	
	lower=0;
	upper=300;
	step=20;
	
	celsius=lower;
	printf("Fahrenheit , Celsius\n"); // Exercise 1-3
	while(celsius<=upper) {
			fahr = (celsius * (9.0/5.0)) + 32.0;  // Exercise 1-4
			printf("%3.0f          %6.1f\n",fahr,celsius);
			celsius = celsius + step;
	}
	
	
	return 0;
}
