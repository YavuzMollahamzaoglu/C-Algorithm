#include <stdio.h>

int main(){
	int positive,negative,zero,i,j,size;
	
	printf("Enter the size of the array.");
	scanf("%d",&size);
	int numbers[size];
	printf("Please enter your elements in to array:\n");
	
	for(i=0;i<size;i++){
		scanf("%d",&numbers[i]);
		
	}
	printf("Positive numbers are:");
	for(i=0;i<size;i++){
		if(numbers>0){
			printf("%d",numbers[i]);
		}
	}
	printf("Negative numbers are:");
	for(i=0;i<size;i++){
		if(numbers<0){
			printf("%d",numbers[i]);
		}
	}
}
