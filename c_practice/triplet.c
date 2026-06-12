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
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i] + a[j]+a[k] ==12){
                    c++;
                    printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("Total no. of triplet are : %d",c);
    return 0;
}