#include <stdio.h>
int main(){
	int num,digit;
	printf("Please enter a number:");
	scanf("%d",&num);
	
	digit=0;
	while(num>0){
		num=num/10;
		digit++;
	}
	printf("Digit of number=%d",digit);
	
	
	
	
	return 0;
}
