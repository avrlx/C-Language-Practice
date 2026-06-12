#include <stdio.h>
int main(){
    int a[10][4]={{1,2,3,4},{2,3,4,5},{1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}},sum=0,sum1=0,r,c,j;
    for(int i=0;i<4;i++){
        
        for(j=0;j<4;j++){
            sum += a[i][j];
        }
        if(sum>sum1){ 
            sum1=sum;
            r=i;
            c=j;
        }

    }
    printf("MAX : %d at %d row\n",sum1,r);
    return 0;
}