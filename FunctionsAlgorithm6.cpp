#include <stdio.h>

void sayHi(const char* name,int age ){
	
	printf("Hello %c your are %d",name,age);
}

int main(){
	
	sayHi("Yavuz", 20);
	sayHi("Betül", 25);
	sayHi("Gül", 27);	
	
	return 0;
}

