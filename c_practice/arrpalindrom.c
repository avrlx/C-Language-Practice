#include <stdio.h>
int main(){
    int c,a[9] = {1,2,3,4,4,3,2,1};
    for(int i=0,j=7;i<8;i++,j--){
       if(a[i]==a[j]){
        c=0;
       }
       else c=1;
    }
       if(c==0) printf("Palindron");
       else printf("not");

    
    return 0;
}

