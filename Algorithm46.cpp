#include <stdio.h>
int main(){
	int x,hundreth,tenth,unit;
	
	printf("Please enter a 3 digit number:");
	scanf("%d",&x);
	
	hundreth = x / 100;
	tenth = (x/10) % 10;
	unit = x % 10;
	
	printf("%d %d %d",hundreth,tenth,unit);
	
}

