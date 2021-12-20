#include <stdio.h>
int main(){
	int n,digit;
	digit=0;
	printf("Please enter a nonnegative integer.\n");
	scanf("%d",&n);
	do
	{
		n=n/10;
		digit++;
	}while(n>0);
	printf("The number of has %d digit\n",digit);
	
	return 0;
		
	}
	
	
	
	
	
