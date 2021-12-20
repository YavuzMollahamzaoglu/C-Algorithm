#include <stdio.h>
int main(){
	int size,i,duble,j=0,b=0;
	
	printf("Please enter your size of array:");
	scanf("%d",&size);
	
	int numbers[size];
	printf("Please enter your element's number:");
	for(i=0;i<size;i++){
		scanf("%d",&numbers[i]);
		}
	for(i=0;i<size;i++){
		for(j=1;j<size;j++){
			
				if(numbers[i]==numbers[j]){
					printf("Dublicate numbers are:%d\n",numbers[i]);
			}
	}
 }
 	return 0;
}



