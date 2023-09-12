#ifndef STACKADTLINKLIST_H
#define STACKADTLINKLIST_H
#define MAX 8

typedef struct node{
	char elem;
	struct node *link;
}*STACK;

void initialize(STACK *S);
void push(STACK *S, char newC);
void pop(STACK *S);
int isEmpty(STACK *S);

void initialize(STACK *S){
	*S = NULL;
}

void push(STACK *S, char newC){
	STACK temp = (STACK*)malloc(sizeof(struct node));
	if(temp != NULL){
		temp->elem = newC;
		temp->link = *S;
	}
	*S = temp;
}

void pop(STACK *S){ //no return, just delete
	STACK temp;
	if(*S != NULL){
		temp = *S;
		*S = temp->link;
		free(temp);
	}
}

int isEmpty(STACK *S){
	if{
		return 0;
	}else{
		return 1;
	}  //return (*S == NULL) ? 0 : 1;
}

#endif
