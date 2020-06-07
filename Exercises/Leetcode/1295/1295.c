#include <stdio.h>

int findNumbers(int* nums, int numsSize);

int main() {

    int arr[] = {555,901,482,1771};
    int* n = &arr[0];
    printf("%i",findNumbers(n,4));


    return 0;
}


int findNumbers(int* nums, int numsSize){
	int numEven = 0;
    
	for(int i=0;i<numsSize;i++) {
		int digits = 0;
		while(*nums != 0) {
			*nums /= 10;
			digits++;
		}
		if((digits % 2) == 0) {
			numEven += 1;
		}
		nums++;
    }
    return numEven;
}
