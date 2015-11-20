/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	int i;
	node *head,*current;
	if (N < 0)
		N = N*-1;
	head = NULL;
	if (N == 0){
		head = (node *)malloc(sizeof(node));
		head->num = 0;
		head->next = NULL;
	}
	while (N){
		i = N % 10;
		current = (node *)malloc(sizeof(node));
		current->num = i;
		current->next = head;
		head = current;
		N = N / 10;
	}
	return head;
}