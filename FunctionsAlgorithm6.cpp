#include <stdio.h>

void sayHi(const char* name,int age ){
	
	printf("Hello %c your are %d",name,age);
}

int main(){
	
	sayHi("Yavuz", 20);
	sayHi("Bet�l", 25);
	sayHi("G�l", 27);	
	
	return 0;
}

