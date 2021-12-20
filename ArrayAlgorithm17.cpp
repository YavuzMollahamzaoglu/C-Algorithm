#include <stdio.h>
int main(){
	int i,count=0,size,j;
	
	printf("Please enter size of array:");
	scanf("%d",&size);
	int num[size];
	
	printf("You will enter elements of array:");
	
	for(i=0;i<size;i++){
		scanf("%d",&num[i]);
	}
	printf("Elements you entered:");
	for(i=0;i<size;i++){
	printf("%d\n",num[i]);
	}
	printf("Please enter elemen to search");
	scanf("%d",&j);
	for(i=0;i<size;i++){
		if(num[i]==j)
	
			count++;
	}
	printf("%d",count);
	return 0;
}
