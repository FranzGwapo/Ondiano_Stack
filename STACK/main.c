#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "stackarr.h"
#include "stacklist.h"


void main(){
//	int choice, num,i;
//	Stack stack;
//	initStack(&stack);
//	while(i!=1){
//			
//		printf("MENU!\n1. Push \n2. Pop \n3. Peek \n4. Exit\nChoice: ");
//		scanf("%d", &choice);
//		switch(choice){
//		case 1:
//			printf("Enter num pushed: ");
//			scanf("%d", &num);
//			push(&stack, num);
//			break;
//		case 2:
//			pop(&stack, num);
//			break;
//		case 3:
//			peek(stack);
//			break;
//		case 4:
//			printf("Bye!\n");
//			i=1;
//			break;
//		default:
//			printf("invalid");
//		}
//	}
//	visualize(&stack);
//	display(&stack);

	Stack *head;
	initStack(&head);
	
	push(&head, 5);

}
