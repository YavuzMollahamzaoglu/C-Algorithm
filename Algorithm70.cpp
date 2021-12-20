#include <stdio.h>
int main(){
	int n1,n2;
	
	printf("This program will compare number's that you enter.Please enter two number:");
	scanf("%d %d",&n1,&n2);
	
	if(n1>n2)
		printf("Number 1 is bigger than number 2.");
	else if(n2>n1)
		printf("Number 2 is bigger than number 1.");
	else
		printf("This numbers are equal.");
		
	return 0;
}
