#include <stdio.h>

int main() {
	
	int words[5],c,inword=0,len=0; //Inword is 0 for outside a word, 1 for inside
	
	while((c=getchar()) != EOF) {
		if(c== ' ' || '\t' || '\n') {
			if(inword == 1) {
				inword = 0;
				++words[len-1];
				len = 0;
			}
		}
		else if (inword == 0) {
			inword = 1;
			len++;
		}
	}
	
	for(int i=0;i<5;i++) {
		printf("Value of array subscript %i : %i \n",i+1,words[i]);
	}
	
	
	return 0;
}

//Exercise 1-13 and 1-14 are bugging me, so I'm going to opt to do them between chapter 1 and chapter 2.
