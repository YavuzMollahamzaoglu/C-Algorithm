#include <stdio.h>
int main(){
	int i;
	printf("Please enter a number:");
	scanf("%d",&i);
	if(i>=0&&i<=100)
	printf("Valid number.");
	else
	printf("It is not a valid number.");
	
	
	return 0;
}
