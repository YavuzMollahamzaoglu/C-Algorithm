#include <stdio.h>
int main(){
	int size,i;
	
	printf("Please enter size of arrays:");
	scanf("%d",&size);
		
	int num1[size],num2[size];
	
	printf("Please enter your elements:");
	for(i=1;i<=size;i++)
		scanf("%d",&num1[i]);
	
	for(i=1;i>=size;i++);
		printf("%d\n",num1[i]);
	
	 for(i=0; i<size; i++)
    {
        num2[i] = num1[i];
    }
	
		
	
}
