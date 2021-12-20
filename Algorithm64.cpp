#include <stdio.h>
int main(){
	int num;
	while(num>=10 || num<=15){
	printf(" Please enter a number your number should not be between 10-15.");	
	scanf("%d",&num);	
	if(num>=10 && num<=15)
	break;
	
	}
	return 0;
}
