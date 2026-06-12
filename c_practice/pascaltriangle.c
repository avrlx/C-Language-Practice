#include<stdio.h>
int fac(int n){
    if(n==1 || n==0) return 1;
    return n* fac(n-1);
}
int c(int n,int r){
    return fac(n)/fac(r)/fac(n-r);
}
int main(){
    int n;
    printf("Enter a value of n : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j =n-i;j>0;j--){
            printf(" ");
        }
       for(int j=0;j<=i;j++){

         printf("%d ",c(i,j));
       }
       printf("\n");
    }
return 0;

}