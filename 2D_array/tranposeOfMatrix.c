#include <stdio.h>
int main (){
    int r ,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    printf("Enter elements : ");
    int a[r][c],b[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           // printf("%d ",a[i][j]=b[i][j]);
           b[i][j]=a[j][i];
        }
        printf("\n");
    }
    printf("\n");
    for( int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for( int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}