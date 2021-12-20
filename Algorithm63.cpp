#include <stdio.h>
int main(){
	int num;
	printf(" Please enter a number your number should not be between 10-15.");	
	scanf("%d",&num);
	if(num>=10 && num<=15)
	printf("Syntax Error");
	else 
	printf("Your number is: %d",num);
	return 0;
}
