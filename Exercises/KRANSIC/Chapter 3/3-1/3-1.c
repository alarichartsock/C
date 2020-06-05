#include <stdio.h>

//I can't measure runtime because my compiler doesn't tell me run time

int binsearch(int x, int v[], int n);

int main() {
	int list[15] = {1,2,2,4,4,8,8,10,11,12,12,13,13,14};
	int x = 10;
	int n = 14;

	printf("%i",binsearch(x,list,n));

	return 0;
}

int binsearch(int x, int v[], int n) {
	int low, high, mid;
	
	low = 0;
	high = n -1;
	while (low <= high) {
		mid = (low+high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else //found match
			return mid;

	}
	return -1; //no match
}
