#include <stdio.h>
#define MAX 100
void push(int *stack,int x,int *top){
    if((*top) == MAX-1){
        printf("stack is overflow.\n");
        return;
    }
    (*top)++;
    stack[*top]= x;
}

int intpop(int * stack,int * top){
    if((*top)==-1){
        printf("stack is underflow.\n");
        return -1;
    }
    int current = stack[*top];
    stack[*top]=0;
    (*top)--;
    return current;
}

void pop(int * stack,int * top){
    if((*top)==-1){
        printf("stack is underflow.\n");
        return;
    }
    stack[*top]=0;
    (*top)--;
}