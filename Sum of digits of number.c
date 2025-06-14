#include <stdio.h>
int main()
{
	int sum =0,p;
	printf("Enter any Number :");
	scanf("%d" ,&p);
	int n=p,a;
	while(n>0){
	    a=n%10;
	    sum= sum + a;
	    n=n/10;
	}
	    printf(" The Sum of digits of %d is %d",p,sum);
	

    return 0;
}
