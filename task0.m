#include "monty.h"



void init(Stack *stack) {
    stack->top = -1;
}

/* Check if the stack is empty*/
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

/* Check if the stack is full*/
int isFull(Stack *stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

/* Push an element onto the stack*/
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Error.Stack is full.\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = value;
}

/* Print all elements in the stack*/
void pall(Stack *stack) {
    for (int i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->items[i]);
    }
}

int main() {
    Stack stack;
    init(&stack);

    char opcode[10];
    int value;

    while (1) {
        scanf("%s", opcode);
        
        if (strcmp(opcode, "push") == 0) {
            if (scanf("%d", &value) != 1) {
                printf("Error: usage: push integer\n");
                exit(EXIT_FAILURE);
            }
		push(&stack, value);
	} 
	else if (strcmp(opcode, "pall") == 0) 
	{
		pall(&stack);
	}
	else 
		{
		printf("Unknown opcode: %s\n", opcode);
		exit(EXIT_FAILURE);
		}
	}

	return 0;
}

