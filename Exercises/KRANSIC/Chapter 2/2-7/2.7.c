#include <stdio.h>

int main() {

	

	return 0;
}

unsigned invert(unsigned x, int p, int n)
{
	return x ^ ((~(~0<<n))<< p+1-n);
}
