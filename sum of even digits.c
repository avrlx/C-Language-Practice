#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int a,p=n,sum=0;
    while(p>0){
    a=p%10;
    if(a%2==0){
    sum = sum + a;}
    p= p/10;
    }
    printf("the sum of even digit is %d",sum);
    return 0;
}