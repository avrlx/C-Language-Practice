#include <stdio.h>
int main(){
	int n;
	printf("Enter the number :");
	scanf(" %d",&n);
	for(int i =1; i<=n;i++){
	    if(i%2!=0){
	        for(int j =1; j<=i;j++){
	            printf("%d ",j);
	        }
	        printf("\n");
	    }
	    else{
	        for(int j =65; j<=64+i;j++){
	        char c =(char)j;
	        printf("%c ",c);
	    }
	    printf("\n");
	    }
	}
	
	return 0;
}

