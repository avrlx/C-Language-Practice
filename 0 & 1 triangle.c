#include<stdio.h>
int main (){
    int a,p;
    printf ("Enter number of rows :");
    scanf("%d",&a);
    for(int i =1; i<=a;i++){
        if (i%2==0) p=0;
        else p=1;
        for(int j =1; j<=i;j++){
            printf("%d ",p);
            if (p==0) p=1;
            else p=0;
        }
        printf("\n");
    }
    return 0;
    }