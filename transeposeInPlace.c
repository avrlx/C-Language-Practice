#include <stdio.h>
int main(){
    int r,c;
    printf("Enter value of n : \n");  //only for square matrix...
    scanf("%d",&r);
    int a[r][r];
    printf("Enter element : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[i][j]);  //print the a matrix
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=i;j<r;j++){
            int temp=a[i][j];   //change matrix in self
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[i][j]);  //changed matrix...
        }
        printf("\n");
    }
    return 0;
}