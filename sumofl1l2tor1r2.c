#include<stdio.h>
int main(){
    int r ,c,x,y,x1,y1,sum=0;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    printf("Enter elements : ");
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter Upper limit :");
    scanf("%d%d",&x,&y);
    printf("Enter lower limit :");
    scanf("%d%d",&x1,&y1);

    if(x < 0 || x1 >= r || y < 0 || y1 >= c || x > x1 || y > y1){
        printf("Invalid range.\n");
        return 1;
    }

    for(int i=x;i<=x1;i++){
        for(int j=y;j<=y1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=x;i<=x1;i++){
        for(int j=y;j<=y1;j++){
            sum = sum + a[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}