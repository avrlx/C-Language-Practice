#include<stdio.h>
int main(){
    int arr[]={1,3,4,95,7,4,45,65,6,5,5};
    int max=arr[0];
    for (int i=1;i<11;i++){
        if(max<arr[i]){
        max=arr[i];

    }
}
    printf("%d",max);
    return 0;
}