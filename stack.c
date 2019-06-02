/* stack.c
 * Char stack written in C
 * @author: Liam M. Murphy
 */

#include "stack.h"
#include <string.h>

stack newstack;
newstack.numElements = 0;
newstack->top = &newstack->elements[0];


char peek() {
	return *(newstack->top);
}

void push(char e) {
	if (newstack.numElements > 0 && newstack.numElements < MAXSIZE) {
		newstack->top++;
		newstack->elements[newstack->top] = e; 
		newstack.numElements++;
	} else if (newstack.numElements == 0) {
		newstack->elements[newstack->top] = e;
		newstack->numElements++;
	} else if (newstack.numElements == MAXSIZE) {
		printf("Unable to push onto full stack!");
	}
}

char pop() {
	if (newstack.numElements > 0) {
		char top = *(newstack->top);
		newstack->top--;
		newstack->numElements--;

		return top;
	} else {
		printf("Unable to pop from empty stack!");
	}
}


int main() {
	push('h');
	push('e');
	push('l');
	push('l');
	push('o');
	push('!');

	printf(top());
	printf(pop());
	printf(pop());
}
