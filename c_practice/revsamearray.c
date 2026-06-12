#include<stdio.h>
int main(){
    int a[9] = {6,5,4,3,2,1,9,8,7};
    for(int i=0,j=8;i<4;i++,j--){
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    for(int i=0;i<9;i++){
        printf("%d. ",a[i]);
    }
    return 0;
}