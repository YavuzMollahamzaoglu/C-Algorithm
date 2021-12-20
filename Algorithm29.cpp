#include <stdio.h>
int main(){
	int degree;
	printf("Please emter water's degree.");
	scanf("%d",&degree);
	if(degree>=100)
	printf("Water is gas.");
	else if(degree<=0)
	printf("Water is solid.");
	else
	printf("Water is liquid.");
	
	return 0;
}
