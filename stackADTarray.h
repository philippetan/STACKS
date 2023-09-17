#ifndef STACKADTARRAY_H
#define STACKADTARRAY_H
#include <stdio.h>
#define MAX 8

typedef struct{
    char elem[MAX];
    int top;
}STACK;

void initialize(STACK *S);
void push(STACK *S, char data);
void pop(STACK *S);
int isEmpty(STACK S);
int isFull(STACK S); //1 - true, 0 - false
void display(STACK *S);

void initialize(STACK *S){
    S->top = MAX;
}

void push(STACK *S,char data){
    if(!isFull(*S)){
        S->top--;
        S->elem[S->top] = data;
    } //else if(isFull(S)== 1){}
}

void pop(STACK *S){
    if(!isEmpty(*S)){
        S->top++;
    } //else if(isEmpty(S)== 1){}
}

int isEmpty(STACK S){
    return (S.top == MAX) ? 1 : 0; //1 is Empty, 0 is not Empty
}

int isFull(STACK S){
    return (S.top == 0) ? 1 : 0; //1 is Full, 0 is not Full
}

void display(STACK *S) {
    STACK tempStack;
    char elem;

    initialize(&tempStack);

    if (isEmpty(*S)) {
        printf("Stack is empty. Nothing to display.\n");
        return;
    }

    // Transfer the elements into the temporary stack
    int index = S->top;
    while (index < MAX) {
        elem = S->elem[index];
        push(&tempStack, elem);
        index++;
    }

    // Display the elements in the temporary stack
    while (!isEmpty(tempStack)) {
        elem = tempStack.elem[tempStack.top]; 
        pop(&tempStack);
        printf("%c ", elem);
    }

    printf("\n");
}


// Write the code of the function insertBottom(), the function will insert a new element at the 
// bottom of the stack. This is implemented by using function calls only
// > initialize()
// > push()
// > pop()
// > top()
// > isEmpty() and isFull()

#endif
