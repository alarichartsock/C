#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {
	int ar[] = {2, 7, 11, 15};
	int* n = &ar[0];
	int* retsize = malloc(sizeof(int));


	int* sorted = twoSum(n,4,9,retsize);
	
	for(int i=0;i<*retsize;i++) {
		printf("%i ",*sorted);
		sorted++;
	}

	return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int* ret = malloc(2 * sizeof(int));
	for(int i=0;i<numsSize;i++) {
		for(int j=0;j<numsSize;j++) {
			if((j != i) && ((nums[i] + nums[j]) == target)) {
				ret[0] = i;
				ret[1] = j;
				*returnSize = 2;
				return ret;
			}
		}
	}
	return ret;
}
