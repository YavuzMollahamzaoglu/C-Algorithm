#include <stdio.h>
int main(){
	char operato;
	int n1,n2;
	
	printf("Please enter an operator(+ - / *):");
	scanf("%c",&operato);
	printf("Please enter 2 operands");
	scanf("%d %d",&n1,&n2);
	
	switch(operato){
		case '+':
			printf("%d + %d = %d",n1,n2,n1+n2);
			break;
		case '-':
			printf("%d - %d = %d",n1,n2,n1-n2);
			break;
		case '*':
			printf("%d * %d = %d",n1,n2,n1*n2);
			break;
		case '/':
			printf("%d / %d = %d",n1,n2,n1/n2);
			break;
		default:
			 printf("Error!");
	}
	return 0;
}
