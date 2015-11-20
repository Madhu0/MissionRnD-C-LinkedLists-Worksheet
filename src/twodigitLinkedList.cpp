/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	int sum = 0,pow=1,num=0,i;
	node *temp;
	temp = head;
	while (temp != NULL){
		sum+= (temp->digit1*pow);
		pow *= 10;
		sum += (temp->digit2*pow);
		pow *= 10;
		temp = temp->next;
	}
	pow /= 10;
	while (sum != 0){
		i = sum % 10;
		num += i*pow;
		pow /= 10;
		sum = sum / 10;
	}
	return num;
}
