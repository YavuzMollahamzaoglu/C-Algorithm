#include <stdio.h>
int main(){
	int num,i,l,limit=10,count=0;
	
	printf("You will enter 10 number in this program and it will show you to negative number count:");
	for(i=0;i<limit;i++){
		scanf("%d",&num);
		if(num<0)
			count++;

}
	printf("Your negative number count is:%d",count);
	return 0;
}
