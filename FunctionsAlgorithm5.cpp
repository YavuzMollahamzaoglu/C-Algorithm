#include <stdio.h>

int fibonacci_series(int num)
{
   if ( num == 0 )
     return 0;
   else if ( num == 1 )
     return 1;
   else
     return ( fibonacci_series(num-1) + fibonacci_series(num-2) );
}

int main(){
	int fib;
	
	fib = fibonacci_series(5);
	printf("%d",fib);
	
	return 0;
}
