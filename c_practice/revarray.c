#include <stdio.h>
int main(){
    int a[9] = {6,5,4,3,2,1,9,8,7};
    int b[9];
    for(int i=0;i<9;i++){
        b[i]=a[8-i];
        printf("%d ",b[i]);

    }
    return 0;
}

