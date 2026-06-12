#include <stdio.h>
#define MAX 100
void charinpush(char *stack,char x,int *top){
    if((*top) == MAX-1){
        printf("stack is overflow.\n");
        return;
    }
    (*top)++;
    stack[*top]= x;
}

void intinpush(int *stack,int x,int *top){
    if((*top) == MAX-1){
        printf("stack is overflow.\n");
        return;
    }
    (*top)++;
    stack[*top]= x;
}

char charoutpop(char * stack,int * top){
    if((*top)==-1){
        printf("stack is underflow.\n");
        return '\0';
    }
    char current = stack[*top];
    stack[*top]='\0';
    (*top)--;
    return current;
}


int intoutpop(int * stack,int * top){
    if((*top)==-1){
        printf("stack is underflow.\n");
        return -1;
    }
    int current = stack[*top];
    stack[*top]=0;
    (*top)--;
    return current;
}


void pop(char * stack,int * top){
    if((*top)==-1){
        printf("stack is underflow.\n");
        return;
    }
    stack[*top]=0;
    (*top)--;
}