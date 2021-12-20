#include <stdio.h>
#include <time.h>

int main(){
	char months[20][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	int i;
	
	for(i=1;i<=13;i++)
		printf("%s\n",months[i]);
}
