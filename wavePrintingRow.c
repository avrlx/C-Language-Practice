/*  Wave functon in row  */

#include <stdio.h>
#include "function.c"   //including function.c for scan function...
int main(){
    int r,c,a[100][100];
    printf("Enter row and column : ");
    scanf("%d%d",&r,&c);
    scan(r,c,a);  //input matrix...
    printf("\n");
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",a[i][j]);  //printing same....
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",a[i][j]);  //printing reverse....
            }
        }
    }

    return 0;
}