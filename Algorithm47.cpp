#include <stdio.h>

void getname(){
	int i,time;
	char name[20];
	
	printf("Please enter your name:\n");
	scanf("%s",&name);
	time = 10;
	
	for(i=1;i<=time;i++)
		printf("%s\n",name);	
	
}

int main(){
	printf("This program shows you to your name 10 time.\n");
	getname();
	
	return 0;
}
