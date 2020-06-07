#include <stdio.h>

int maxProduct(int* nums, int numsSize);

int main() {

	int arr[] = {1,5,4,5};
	int* n = &arr[0];

	printf("%i \n",maxProduct(n,4));

	return 0;
}


int maxProduct(int* nums, int numsSize){
	int max = 0;
	int secondmax = 0;
	for(int i=0;i<numsSize;i++) {
		if(*nums > max) {
			int tmp = max;
			max = *nums;
			secondmax = tmp;
		} else if(*nums > secondmax) {
			secondmax = *nums;
		}
		nums++;

	}

	return (max - 1) * (secondmax -1);
}
