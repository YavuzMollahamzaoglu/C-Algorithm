#include <stdio.h>

int main(){
	int i,odd_num,sum,ave;
	
	for(i=7;i<=24;i++)
		if(i%2 == 1)
			i += i;
			ave = i/9;
			printf("%d\n",i);
			printf("%d",ave);
	return 0;
}
