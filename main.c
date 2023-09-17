#include <stdio.h>
#include "stackADTarray.h"
// #include "stackADTlinklist.h"

void insertBottom(STACK *S, char data);

int main(){
    STACK Ss;
    initialize(&Ss);

    push(&Ss, 'A');
    push(&Ss, 'B');
    push(&Ss, 'C');

    printf("Stack after pushing A, B, C:\n");
    display(&Ss);

    pop(&Ss);

    printf("Stack after popping one element:\n");
    display(&Ss);

    push(&Ss, 'D');
    push(&Ss, 'E');

    printf("Stack after pushing D and E:\n");
    display(&Ss);

    return 0;
}

void insertBottom(STACK *S, char data){

}
