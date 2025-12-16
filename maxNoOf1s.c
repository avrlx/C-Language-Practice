#include<stdio.h>
int main(){
    int a[][3]={{1,0,1},{1,1,1},{0,1,1},{0,1,1},{0,1,0}},r1=0,c3=0,c=0,c2=0,i,r,c1=0;
    for(i=0;i<5;i++){
        int c=0,c2=0;
        for(int j=0;j<3;j++){
            
            if(a[i][j]==1){
                c++;
                
            }
             if(a[i][j]==0){
                c2++;
                
            }
        }
        if(c1<c){
             c1=c;
             r=i;
        }
        if(c3<c2){
             c3=c2;
             r1=i;
        }
    }
    printf("MAX no. of 1 is %d at %d row\n",c1,r+1);
    printf("MAX no. of 0 is %d at %d row",c3,r1+1);
    return 0;
}