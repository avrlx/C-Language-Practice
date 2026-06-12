#include<stdio.h>
int main(){
    int r ,c,x,y;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    printf("Enter elements of matrix 1 : \n");

    int a[r][c];        //taking input from user of matrix 1
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    
    printf("Enter elements of matrix 2 : \n");
    int b[r][c];        //taking input from user of matrix 2
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    
    }
    printf("Matrix 1 : \n");//print matrix 1
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 : \n");//print matrix 2
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of matrix 1 and matrix 2 : \n\n");
    for(int i=0;i<r;i++){       //printing sum of mstrix
        for(int j=0;j<c;j++){
            x=a[i][j];
            y=b[i][j];
            printf("%d ",x+y);
        }
        printf("\n");
    }
    return 0;
}