#include<stdio.h>
#include "function.c"
int main(){
    int r,c,a[100][100];
    printf("Enter row and column : ");
    scanf("%d%d",&r,&c);
    scan(r,c,a);
    int e=r*c;
    int c1 =0;
    int minr=0;
    int minc=0;
    int maxr=r-1;
    int maxc=c-1;
    while(c1<e){
        for(int i=minc;i<=maxc&&c1<e;i++){
            printf("%d ",a[minr][i]);  //print upper row...
            c1++;
        }
        minr++;
        for(int i= minr ;i<=maxr&&c1<e;i++){
            printf("%d ",a[i][maxc]);   //print rightest column...
            c1++;
        }
        maxc--;
        for(int i=maxc; i>=minc && c1<e;  i-- ){
            printf("%d ",a[maxr][i]);  //print lower row...
            c1++;
        }
        maxr--;
        for(int i =maxr;i >=minr && c1<e ; i--){ 
            printf("%d ",a[i][minc]);   //print left column...
            c1++;
        }
        minc++;
    }

    return 0;
}