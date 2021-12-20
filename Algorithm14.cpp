#include <stdio.h>
int main(){
	int fact,i,x;
	printf("This program will take this number's factorial:");
	scanf("%d",&x);
	for(i=2;i<=x;i++){
	fact *= i;
	}
	printf("%d",fact);
	
	

}
