#include <stdio.h>
int main(){
	int i,size,t;
	
	printf("Enter size of array\n");
	scanf("%d",&size);
	int num[size];
	
	printf("Please enter elements of array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&num[i]);
	
	for(t=0;t<size;t=t+2){
		t=num[t];
		num[t] = num[t+1];
		num[i+1] =t;
	}
	for(t=0;t<=size;t++)
	printf("%d\t",num[t]);
	
	return 0;
}
