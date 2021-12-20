#include <stdio.h>
int main(){
	int i,num=1;
	for(i=1;i<=100;i++){
		num = num + 3;
		printf("%d",num);
	}
	num = num +1;
	printf("%d",num);
}
