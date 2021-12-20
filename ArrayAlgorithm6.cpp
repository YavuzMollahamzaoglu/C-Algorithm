#include <stdio.h>

int main(){
	int size,i;
	printf("Please enter size of array.\n");
	scanf("%d",&size);
	int numbers[size];
	
	printf("Please enter your elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&numbers[i]);
	}
	printf("Elements of your array:%d\n",numbers[i]);
	
	for(i=size-1;i>=0;i--){
		printf("%d\n",numbers[i]);
	}
	return 0;
}
