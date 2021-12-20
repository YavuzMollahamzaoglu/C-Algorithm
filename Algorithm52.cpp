#include <stdio.h>

void cylender_area_volume(int r,int h){
	int pi,area,volume;
	pi = 3.14;
	
	area = 2*pi*r^2+2*pi*r*h;
	volume = pi*r^2*h;
	
	printf("Your volume and are is: %d %d",volume,area);
}

int main(){
	cylender_area_volume(0,0);
	return 0;
}
