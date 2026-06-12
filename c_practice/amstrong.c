#include <stdio.h>
#include <math.h>
int main(){
    int n,r=0,sum=0,c=0;
    printf("enter no. : ");
    scanf("%d",&n);
    int temp =n;
    for(int i=1;n>0;n /=10){

        c++;
    }
    n=temp;
    for(int i=1;n>0;i++){
        r=n%10;
        sum = sum + pow(r,c);
        n /=10;
    }
    if(sum == temp ){
        printf("Amstrong");
    }
    else {
        printf("not a Amstrong ");
    }
    return 0;
}