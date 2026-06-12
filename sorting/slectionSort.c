// slection sort is put minimum in the begin 
//Time Complexity: for any case --> O(n^2)
//Space Complexity: O(1)
 
#include<stdio.h>
int main(){
    int a[] = {2,4,6,3,9,5,2,11};
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    for(int i=0 ; i<8-1;i++){
        int temp = i;
        int min = a[i];
        for(int j=i+1;j< 8;j++){
            if(a[j]<min){
                min = a[j];
                temp =j;
            }
        }
        a[temp] = a[i];
        a[i] = min;
        
    }
    printf("\n");
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}