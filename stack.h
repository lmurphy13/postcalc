/* stack.h
 * Function prototypes and struct definitions for a char typed stack.
 * @author: Liam M. Murphy
 */

#define MAXSIZE	20					/* Maximum size of stack */

typedef struct stack {				/* Stack struct definition */
	char elements[MAXSIZE];		
	int numElements;			/* Initialize an empty stack */
	char *top;		/* Top of the stack and stack grows upwards */
} stack;


char peek(void);					/* Look at top element and do not return */
void push(char);					/* Push an element onto the stack */
char pop(void);						/* Remove an element from the top of the stack and return it */
