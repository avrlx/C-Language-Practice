#include<stdio.h>
int pow1(int a,int b){
    if(b==0) return 1;
    int x = a*pow1(a,b-1);
    return x;

}
int main(){
    int a,b;
    printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter a power ");
    scanf("%d",&b);
    int p = pow1(a,b);
    printf("the a raised to power b is %d",p);
    return 0;
}