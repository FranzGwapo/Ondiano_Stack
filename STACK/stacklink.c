#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stacklink.h"

void initStack(Stack** head){
	*head = NULL;
}
bool isEmpty();
bool isFull();

void push(Stack** head, Data num){
	Stack newNode = (Stack*) malloc (sizeof(Stack));
	newNode->data = num;
	newNode->next = *head;
	*head = newNode;
}
void pop(Stack **head){
	Stack *temp = *head;
	*head = (*head)->next;
	free(temp);
}
Data peek(){
	
}
void display(){
	
}
void visualize(){
	
}
