#include <stdio.h>
#include "function.c"
int main(){
    int r,c,a[100][100];
    printf("Enter row and column : ");
    scanf("%d%d",&r,&c);
    scan(r,c,a);
    printf("\n");
    for(int j=0;j<c;j++){
        if (j%2==0){
            for(int i=r-1;i>=0;i--){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int i=0;i<r;i++){
                printf("%d ",a[i][j]);
            }
        }
    }

    return 0;
}