#include <stdio.h>
int main (){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int p=1,t=n;
    while (t>0){
        p=p*t;
        t--;
    }
    printf("The facrorial of %d is %d .",n,p);
    return 0;
}