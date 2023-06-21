#ifndef STACK_LINK_H
#define STACK_LINK_H

#include <stdbool.h>

#define MAX 10

typedef int Data;

typedef struct node {
	Data data;
	struct node *next;
} Stack;

void initStack();
bool isEmpty();
bool isFull();
void push();
void pop();
Data peek();
void display();
void visualize();
