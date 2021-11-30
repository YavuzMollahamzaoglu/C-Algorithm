#include <stdio.h>
int main(){
	int x,y,z,count=0,i;
	i=100;
	count=0;
	for(i=100;i<=999;i++){
	
	x=i/100;
	y=(i/10)%10;
	z=i%10;
	 if(x!=y&&x!=z&&y!=z){
	 	count++;
	 }
	
}
	
	printf("%d",count);
	
	
 return 0;
}
		
	
	
	
	
	
	
	
	
	
