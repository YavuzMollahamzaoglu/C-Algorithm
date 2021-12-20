#include <stdio.h>

int main(){
	int bucky[5] = {5,6,84,12,65};
	int i;
	int total = 0;
	
	for (i=0;i<5;i++){
		total += bucky[i];
		
	}
	printf("%d",total);
	return 0;
}
