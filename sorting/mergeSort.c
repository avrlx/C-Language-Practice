//Time Complexity: for any case --> O(nlogn)
//Space Complexity: O(n)

#include<stdio.h>
void merge(int a[],int l, int u){
    int mid = (l+u)/2;
    int l1 = mid-l+1;
    int l2 = u-mid;
    int a1[l1];
    int a2[l2];
    int k= l;
    for(int i=0;i<l1;i++){
        a1[i] = a[k++];
    } 
    k= mid +1;
    for(int i=0;i<l2;i++){
        a2[i] = a[k++];
    } 
    int i=0,j=0;
    k=l;
    while(i<l1 && j<l2){
        if(a1[i]<a2[j]){
            a[k++] = a1[i++];
        }
        else{
            a[k++] = a2[j++];
        }
    }

    while(i<l1){
        a[k++] = a1[i++]; 
    }

    while(j<l2){
        a[k++] = a2[j++]; 
    }
}

void mergeSort(int a[],int l,int u){
    if(l>=u) return;
    int mid = (l+u)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,u);
    merge(a,l,u);
}

int main(){
    int a[] = {2,4,6,3,9,5,2,11};
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    mergeSort(a,0,7);
    printf("\n");
    for(int i =0;i<8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}