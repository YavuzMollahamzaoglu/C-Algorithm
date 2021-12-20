#include <stdio.h>

int main(){
	int sum,n;
	printf("This program sums a series of integer.\n");
	printf("Enter integers(0 to terminate):");
	sum=0;
	
	scanf("%d",&n);
	while(n!=0)
	{
	sum=sum+n;	
	scanf("%d",&n);
	}
	printf("The sum is %d",sum);
	
	

	return 0;
}
