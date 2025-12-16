#include<stdio.h>
int main(){
    int r ,c,m1=0,m2=0,n1=0,n2=0;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d",&c);
    printf("Enter elements : ");
    int a[r][c];
    for(int i=0;i<r;i++){//input of matrix
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max =a[0][0];
    int min =a[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<a[i][j]){ //finding maximum
                max=a[i][j];
                m1=i;
                m2=j;
            }
            if(min>a[i][j]) {//finding minimum
                min=a[i][j];
                n1=i;
                n2=j;
            }
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){//printing matrix
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }//printing max and min
    printf("MAX : %d at (%d,%d) \n MIN : %d at (%d,%d) ",max,m1+1,m2+1,min,n1+1,n2+1);
    return 0;
}