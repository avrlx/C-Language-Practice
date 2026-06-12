#include <stdio.h>
int main(){
    int n,r=0,p=1,c=0;
    printf("enter no. : ");
    scanf("%d",&n);
    int temp =n;
    for(int i=1;n>0;i++){
        r=n%10;
        p *=r;
        n /=10;
    }
    printf("product %d",p);
    return 0;
}