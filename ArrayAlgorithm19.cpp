#include <stdio.h>
int main(){
	int i,size;
	
	printf("Please enter size of array.");
	scanf("%d",&size);
	
	int num[size];
	
	
	printf("Please enter your elements.");
	
	for(i=0;i<size;i++)
		scanf("%d",&num[i]);
	for(i=0;i<size;i++)
		printf("your elements  : %d\n",num[i]);
	return 0;
}
