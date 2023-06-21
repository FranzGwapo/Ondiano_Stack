#ifndef STACK_ARR_H
#define STACK_ARR_H

#include <stdbool.h>

#define MAX 10

typedef int Data;

typedef struct {
	Data elems[MAX];
	int top;
} Stack;

void initStack();
bool isEmpty();
bool isFull();
void push();
void pop();
Data peek();
void display();
void visualize();

#endif
