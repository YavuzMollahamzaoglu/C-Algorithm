#include <stdio.h>

int main(){
	int size,i,j,positive=0,negative=0;
	
	printf("Please enter your arrays size:");
	scanf("%d",&size);
	int numbers[size];
	
	printf("Please enter elements of array:");
	for(i=0;i<size;i++){
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<size;i++){
	
		if(numbers[i]>0){
			positive++;
	}
}
	printf("Your positive number count is:%d\n",positive);
	for(i=0;i<size;i++){
		if(numbers[i]<0){
			negative++;
	}
}
	printf("Your negative number count is:%d",negative);
	return 0;
}

