#include <stdio.h>

int main(){
	int size,i,odd=0,even=0;
	printf("Please enter your array's size:");
	scanf("%d",&size);
	int number[size];
	
	printf("Please enter your elements:");
	for(i=0;i<size;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<size;i++){
		if(number[i]%2==0)
			even++;
	}
	printf("Your even number count is:%d",even);
	for(i=0;i<size;i++){
		if(number[i]%2==1)
			odd++;
	}
	printf("Your odd number count is:%d",odd);
	
	return 0;
}
