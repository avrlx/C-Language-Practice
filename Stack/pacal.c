#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        int num =1;
        for(int s = 1;s<= n-i;s++){
            printf(" ");
        }
        for(int j = 0 ;j<=i;j++){
            printf("%d ",num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}