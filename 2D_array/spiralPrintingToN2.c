#include<stdio.h>
#include "function.c"
int main(){
    int r,c,a[100][100];
    printf("Enter n : ");
    scanf("%d",&r);
    int e=r*r;
    int c1 =0,p=0;
    int minr=0;
    int minc=0;
    int maxr=r-1;
    int maxc=r-1;
    while(c1<e){
        for(int i=minc;i<=maxc&&c1<e;i++){
            p++;
            a[minr][i]=p;  //print upper row...
            c1++;
        }
        minr++;
        for(int i= minr ;i<=maxr&&c1<e;i++){
            p++;
            a[i][maxc]=p;   //print rightest column...
            c1++;
        }
        maxc--;
        for(int i=maxc; i>=minc && c1<e;  i-- ){
            p++;
            a[maxr][i]=p;  //print lower row...
            c1++;
        }
        maxr--;
        for(int i =maxr;i >=minr && c1<e ; i--){ 
            p++;
            a[i][minc]=p;   //print left column...
            c1++;
        }
        minc++;
    }
    print(r,r,a);
    return 0;
}