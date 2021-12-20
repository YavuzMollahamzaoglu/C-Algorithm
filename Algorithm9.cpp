#include <stdio.h>
int main(){
	float x;
	printf("Please enter a number:");
	scanf("%f",x);
	if(x==0)
		printf("This number eqauls to zero.");
	else if(x<=0)
		printf("This number is negative.");
	else
		printf("This number positive.");
	
	
	
	
	
	
	return 0;
}
