#include <stdio.h>
int main()
{
	int a=1,b=1,sum =0,n;
	printf("Enter any Number :");
	scanf("%d" ,&n);
	int p=n;
	if(p>=1) printf("The 1st fibonacci number is 1.");
	if(p>=2) printf("The 2nd fibonacci number is 1.");
	if(p>=3) printf("The 3rd fibonacci number is 2.");
	if(p>3){
	    for(int i =4; i<=n;i++){
	    sum = a+b;
	    a=b;
	    b=sum;
	    printf("The %dth fibonacci number is %d\n",i,sum);
	    }
	}
	
	
	return 0;
}