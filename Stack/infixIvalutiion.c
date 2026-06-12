#include <stdio.h>
#include<string.h>
#include "charStack.c"

int val[MAX];
char op[MAX];
int valuetop = -1;
int opetop = -1;
int main(){
    printf("Enter a expression to evaluate : "); //"9-(5+3)*4/6"
    char a[MAX];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        char c = a[i];
        int ascii = (int)c;
        if(ascii>=48 && ascii <=57){
            intinpush(val,ascii - 48 ,&valuetop);
        }
        else if(opetop==-1 || c=='(' || op[opetop] == '('){
            charinpush(op,c,&opetop);
        }
        else if(c == ')'){
            while(opetop!=-1 && op[opetop] != '('){
                int v2= intoutpop(val , &valuetop);
                int v1= intoutpop(val , &valuetop);
                if(op[opetop]=='+') intinpush(val,v1+v2,&valuetop);
                if(op[opetop]=='-') intinpush(val,v1-v2,&valuetop);
                if(op[opetop]=='*') intinpush(val,v1*v2,&valuetop);
                if(op[opetop]=='/') intinpush(val,v1/v2,&valuetop);
                pop(op,&opetop);
            }
            pop(op,&opetop);
        }
        else{
            if(c=='+' || c =='-'){
                int v2= intoutpop(val , &valuetop);
                int v1= intoutpop(val , &valuetop);
                if(op[opetop]=='+') intinpush(val,v1+v2,&valuetop);
                if(op[opetop]=='-') intinpush(val,v1-v2,&valuetop);
                if(op[opetop]=='*') intinpush(val,v1*v2,&valuetop);
                if(op[opetop]=='/') intinpush(val,v1/v2,&valuetop);
                pop(op,&opetop);
                charinpush(op,c,&opetop);
            }
            else if(c=='*' || c =='/'){
                if(op[opetop]=='*' || op[opetop] =='/'){
                    int v2= intoutpop(val , &valuetop);
                    int v1= intoutpop(val , &valuetop);
                    if(op[opetop]=='*') intinpush(val,v1*v2,&valuetop);
                    if(op[opetop]=='/') intinpush(val,v1/v2,&valuetop);
                    pop(op,&opetop);
                    charinpush(op,c,&opetop);
                }
                else{
                    charinpush(op,c,&opetop);
                }
            }
        }
    }
    while(opetop!=-1){
        int v2= intoutpop(val , &valuetop);
        int v1= intoutpop(val , &valuetop);
        if(op[opetop]=='+') intinpush(val,v1+v2,&valuetop);
        if(op[opetop]=='-') intinpush(val,v1-v2,&valuetop);
        if(op[opetop]=='*') intinpush(val,v1*v2,&valuetop);
        if(op[opetop]=='/') intinpush(val,v1/v2,&valuetop);
        pop(op,&opetop);
    }
    printf("The answer is %d\n",intoutpop(val,&valuetop));
    return 0;
}