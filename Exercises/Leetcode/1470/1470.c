#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int arr[] = {2,5,1,3,4,7}
	int* array;
	int* ret;
	shuffle(array,6,3,ret)

	return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
	int* shuffled = malloc(numsSize*sizeof(int));

	for(i=0; i<n; i++){
		shuffled[2*i] = nums[i];
		shuffled[2*i+1] = nums[n+i];
	}
	*returnSize = numsSize;
	return shuffled;
}
