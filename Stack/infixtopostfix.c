#include <stdio.h>
#include<string.h>
#include "charStack.c"
char val[MAX];
char op[MAX];
int valtop=-1,optop=-1;

int main(){
    printf("Enter the prefix to evaluate.\n");
    char a[MAX];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        char c = a[i];
        int ascii = (int)c;
        if(ascii>=48 && ascii<=57){
            charinpush(val,c,&valtop);
        }
        else if(optop==-1 || op[optop] =='(' || c=='('){
            charinpush(op,c,&optop);
        }
        else if (c == ')')
        {
            while(op[optop]!='('){
                char v1 = charoutpop(val,&valtop);
                char v2 = charoutpop(val,&valtop);
                char o = charoutpop(op,&optop);
            }
            /* code */
        }
        
    }
    return 0;
}