#include <stdio.h>
int main(){
    int n,c=0;
    printf("Enter no. of elements in array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of array : ",i+1);
        scanf("%d",&a[i]);
    }
    int max =a[0],smax=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            smax=max;
            max=a[i];
        }
        else if(smax<max && max!=a[i]){
            smax=a[i];
        }
    }
    printf("2nd Maximum of array : %d",smax);
    return 0;
}