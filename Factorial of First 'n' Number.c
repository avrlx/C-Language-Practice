#include <stdio.h>
int main (){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int p=1,t=n;
    for(int i=1; i<=t;i++){
        p=p*i;
        printf("The facrorial of %d is %d .\n",i,p);
    }
    
    return 0;
}