#include <stdio.h>
int main(){
	printf("Hey heyyyy");
	int n1,n2,n3,n4,n5,ave;
	printf("Enter five note for subjects:");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);	
	ave=(n1+n2+n3+n4+n5)/5;
	
	if(ave>60)
	printf("First division\n");
	else if((ave>=50)&&(ave<60))
	printf("Second division\n");	
	else if((ave>=40)&&(ave<50))
	printf("Third division\n");
	else 
	printf("Fail");	
	
	return 0 ;
}
