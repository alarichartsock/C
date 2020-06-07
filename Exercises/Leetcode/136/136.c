#include <stdlib.h>
#include <stdio.h>

int singleNumber(int* nums, int numsSize);

int main() {
	int* a;
	int b[5] = {4,1,2,1,2};
	a = &b[0];
	
	printf("%i",singleNumber(a,5));

	return 0;
}

int singleNumber(int* nums, int numsSize){
	int num = 0;
	for(int i=0;i<numsSize;i++) {
		num = num ^ *nums;
		nums++;
	}
	return num;
}
