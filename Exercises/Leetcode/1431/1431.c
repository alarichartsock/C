#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize);

int main() {
	
	int candiesSize = 5;
	int arr[] = {2,3,4,1,3};
	int* candies = &arr[0];
	int* returnSize = calloc(candiesSize,sizeof(bool));
	int extraCandies = 3;

	bool* c = kidsWithCandies(candies,candiesSize,extraCandies,returnSize);

	for(int i=0;i<candiesSize;i++) {
		printf("%i",*c);
		c++;
	}


	return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
	bool* result = malloc(sizeof(bool)*candiesSize);
	int* start = candies;
	int max = 0;

	for(int i=0;i<candiesSize;i++) {
		if(*candies > max) {
			max = *candies;
		}
		candies++;
	}
	candies = start;
	for(int i=0;i<candiesSize;i++) {
		if((*candies + extraCandies) > max) {
			*result = true;
		}
		else {
			*result = false;
		}
		result++;
		candies++;
	}

	return result;
}
