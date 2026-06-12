#include<stdio.h>
int fac(int n){
    if(n==1 || n==0) return 1;
    return n* fac(n-1);
}
int main (){
    int n,r;
    printf("Enter n and r : ");
    scanf("%d %d",&n,&r);
    int n_=fac(n);
    int r_=fac(r);
    int n_r=fac(n-r);
    int f = n_/r_/n_r;
    printf("the nCr is %d\n",f);
    return 0;
}