// The best case --> pivot = mean O(nlogn)
// Average case --> O(nlogn)
// worst case when array gets divided into two parts, one part consisting of N-1 elements 
// worst case --> O(n^2)
//Space Complexity: O(n)
#include<stdio.h>

int partition(int a[],int l,int u){
    int pivote = a[l];
    int c=0;
    for(int i=l+1;i<=u;i++){
        if(a[i]<pivote) c++;
    }
    int pivote_index = l+c;
    int t = a[pivote_index];
    a[pivote_index] = a[l];
    a[l]=t;
    int i = l,j=u;
    while(i<pivote_index && j>pivote_index){

        while(a[i]<a[pivote_index]){
            i++;
        }
        
        while(a[j]>a[pivote_index]){
            j--;
        }

        while(a[i]>a[pivote_index] && a[j]< a[pivote_index]){
            int temp= a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--; 
        }


    }
    return pivote_index;    

}

void quickSort(int a[],int l,int u){
    if(l>=u) return;
    int p = partition(a,l,u);
    quickSort(a,l,p-1);
    quickSort(a,p+1,u);
}

int main(){
    int a[] = {2,4,6,3,9,5,2,11};
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    quickSort(a,0,7);
    printf("\n");
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}