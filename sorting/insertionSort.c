// Card SUffle 
// Best case --> sorted array O(n)
//Average case --> O(n^2), If the list is randomly ordered
// worst case --> Revese sorted array O(n^2)
//Space Complexity: O()
 
#include<stdio.h>
int main(){
    int a[] = {5,4,6,3,9,5,2,11};
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    
    for(int i=0;i<8;i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0){
            if (a[j]>temp)
            a[j+1] = a[j];
            else break;
            j--;
        }
        a[j+1] =temp;
    } 

    printf("\n");
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}