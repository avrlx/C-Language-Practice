#include<stdio.h>
int main (){
    int a;
    printf ("Enter number of rows :");
    scanf("%d",&a);
    int p=1;
    for(int i =1; i<=a;i++){
        for(int j =1; j<=i;j++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
    return 0;
    }