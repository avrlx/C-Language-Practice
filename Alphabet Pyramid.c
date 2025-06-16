#include<stdio.h>
int main (){
    int a;
    printf ("Enter number of rows :");
    scanf("%d",&a);
    int nst =1;
    for(int i =1; i<=a;i++){
        for(int j =1;j<=a-i;j++) printf("  ");
        for(int k =65; k<=64+nst;k++){
            char c = (char)k;
            printf("%c ",c);
        }
        nst +=2;
        printf("\n");
    }
    return 0;
    }