#include <stdio.h>

int main() { //Exercise 1-15
	float fahr, celsius;
	int lower,upper,step;
	
	lower=0;
	upper=300;
	step=20;
	
	float convert(int cels) { //converts celsius to fahrenheit
		fahr = (cels * (9.0/5.0)) + 32.0; 
		return fahr;
	}
	
	celsius=lower;
	printf("Fahrenheit : Celsius\n");
	while(celsius <= upper) {
		fahr = convert(celsius);
		printf("%3.1f,%3.1f\n",fahr,celsius);
		celsius = celsius + step;
	}
	

	
	return 0;
}
