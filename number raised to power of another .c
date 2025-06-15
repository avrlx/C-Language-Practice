#include <stdio.h>
int main(){
	int prod= 1,n,m;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("Enter the power :");
	scanf("%d",&m);
	if (n!=0){
	    for (int i =1; i<=m;i++){
	    prod =prod*n;
	    }
	    printf("The %d power of %d is %d",m,n,prod);
	}
	else printf("The %d power of 0 is 0. ",m);
	return 0;
}