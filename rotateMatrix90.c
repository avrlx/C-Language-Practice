#include <stdio.h>
int main(){
    int r,c;
    printf("Enter value of n : \n");  //only for square matrix...
    scanf("%d",&r);
    int a[r][r];
    printf("Enter element : \n");  //scan input...
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
    printf("Transpose\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[i][j]);  //changed matrix...
        }
        printf("\n");
    }
    printf("Rotate by 90°\n");  //rotating by 90°
    for(int i=0;i<r;i++){
        int j=0,k=r-1;
        while(k>j){
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[i][j]);  //changed matrix...
        }
        printf("\n");
    }
    return 0;
}