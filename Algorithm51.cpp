#include <stdio.h>

int sphere_area(){
	int pi = 3.14,r,area;
	
	printf("Please enter of radius of sphere for area:");
	scanf("%d",&r);
	
	area = 4*pi*r^2;
	
	return area;
}

int sphere_volume(){
	int pi = 3.14,r,volume;
	
	printf("Please enter of radius of sphere for volume:");
	scanf("%d",&r);
	
	volume =(4/3)*pi*r^3;
	return volume;
}

int main(){
	int area,volume;
	area = sphere_area();
	volume = sphere_volume();
	printf("Sphere area is : %d\n",area);
	printf("Sphere volume is : %d\n",volume);
	
	return 0;
}
