#include<stdio.h>
int main(){
    int n,r=0,sum=11;
    printf("Enter no.");
    scanf("%d",&n);
    for(int j=1;n>10;j++){

        for(int i=1;n>0;i++)
            {
            r= n%10;
            sum = sum +r;
            n /=10;
        }

        n=sum;
    }
    printf("%d",sum);
    return 0;
}