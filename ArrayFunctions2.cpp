#include <stdio.h>

int main(){
	int size,number[size],i,j,total,loop;
	
	printf("Please enter size for your array:");
	scanf("%d",&size);
	number[size];
	
	
	for(j=0;j<size;j++){
		printf("Please enter your element:");
		scanf("%d",&number[j]);
	}
	
	printf("Your size is :%d\n",number[size]);
	
	printf("Your elements are:");
	for(loop = 0; loop < size; loop++){
	
      printf("%d ", number[loop]);
			}
	return 0;
	
}
