#include<stdio.h>
int main(){

    int n;

    scanf("%d",&n);
    int a[n];

    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i =0;i<n;i++){
        int c=1;
        for(int j = i+1;j<n;j++){
            if(a[i]==a[j]){
                c=0;
                break;
            }
        }
        if (c) printf("%d",a[i]);
    }
    return 0;

}