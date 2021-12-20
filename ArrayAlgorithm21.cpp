#include <stdio.h>
int main(){
	int sum=0,num[3] = {12,9,8},i;
	
	for(i=0;i<=2;i++)
		sum += num[i];
		
	printf("%d",sum);
}
