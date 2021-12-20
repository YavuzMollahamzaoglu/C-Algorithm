#include <stdio.h>
int main(){
	int n1,n2,pow=1,i;
	
	printf("This program will take power of number's of you entered.Please enter two number:");
	scanf("%d %d",&n1,&n2);
	
	for(i=1;i<=n2;i++){
		pow = pow * n1;
	}
	printf("Your number is :%d",pow);
	return 0;
		
}
