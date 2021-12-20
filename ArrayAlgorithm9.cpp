#include <stdio.h>

int main(){
	int my[10] = {5,7,1,9,0,8,2,4,3,6},i,temp;
	
	for(i=1;i<=10;i++);{
		if (my[i]<my[i+1]){
			temp = my[i];
			my[i] = my[i+1];
			my[i+1] = temp;
		}
	}
	for(i=1;i<=10;i++)
		printf("%d",my[i]);
	return 0;	
}
