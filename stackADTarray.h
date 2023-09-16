#ifndef STACKADTARRAY_H
#define STACKADTARRAY_H
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
void display(STACK S);

void PUSH(STACK S,char data){

}

#endif
