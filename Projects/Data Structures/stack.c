#include <stdio.h>
#include <stdlib.h>

struct stack {
	int maxsize;
	int *items;
	int size;
};

/*
 *Initializes a new stack 
*/
struct stack* newStack(int capacity) {
	struct stack *pt = (struct stack*) malloc(sizeof(struct stack));

	pt -> maxsize = capacity;
	pt -> size = 0;
	pt -> items = (int*)malloc(sizeof(int) * capacity);

	return pt;
}

/*
 *Adds an item on top of the stack. 
* */
void push(struct stack *pt, int x) {
	pt->items[++pt->size] = x;
}

int main() {
	struct stack* pt = newStack(10);
	push(pt,10);

	return 0;
}



