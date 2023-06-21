#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackarr.h"

#define MAX 10

void initStack(Stack *stack){
	int x;
	stack->top = -1;
	for(x=0;x<MAX-1;x++){
		stack->elems[x] = 0;
	}
}

bool isEmpty(Stack stack){

	if(stack.top==-1){
		printf("emptY");
		return true;
	}
	else{
		return false;
	}
	
}

bool isFull(Stack stack){
	int i;
	for(i=0;i<=MAX;i++){
		if(stack.elems[i]==-1){
			printf("it is not full");
			return false;
		}
	}
	printf("Full");
}

void push(Stack *stack, Data num){
	stack->elems[++stack->top] = num;
}

void pop(Stack *stack){
	stack->elems[stack->top] = 0;
	stack->top--;
}

Data peek(Stack stack){
	printf("%d,", stack.elems[stack.top]);
	return stack.elems[stack.top];
}

void display(Stack *stack){
	int i, num;
	Stack tempstack = *stack;
	
	printf("Display: ");
	for(i=0;i!=MAX;i++){
		peek(tempstack);
		pop(&tempstack);
	}
	
}

void visualize(Stack stack){
	int i;
	printf("Visualize: ");
	for(i=0;i<MAX;i++){
		printf("%d, ",stack.elems[i]);
	}
	printf("\n");
}
