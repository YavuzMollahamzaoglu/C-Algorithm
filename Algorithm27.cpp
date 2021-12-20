#include <stdio.h>
int main(){
	int i;
	printf("Please enter a number:");
	scanf("%d",&i);
	if(i%3==0&&i%5==0)
	printf("Whole number.");
	else
	printf("It is not a whole number.");
	
	
	
	
	return 0;
}
