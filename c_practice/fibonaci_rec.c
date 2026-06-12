#include<stdio.h>
int faccb(int a){
    if(a==1) return 0;
    if(a==2||a==3){
        return 1;
    }
    int r= faccb(a-1)+faccb(a-2);
    return r;
}
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("%dth fibonaci number is : %d",a,faccb(a));
    return 0;
}