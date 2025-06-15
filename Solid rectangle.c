#include<stdio.h>
int main (){
    int a,b;
    printf ("Enter number of rows :");
    scanf("%d",&a);
    printf(" Enter number of stars in one row :");
    scanf("%d",&b);
    for(int i =1; i<=a;i++){
        for(int j =1; j<=b;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    }