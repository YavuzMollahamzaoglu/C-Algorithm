#include<stdio.h>
#include<conio.h>
#include<math.h> 
int main()
{
    int i;
    float x,y,z,s,res=0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    d=(x-1)/x;
    
    for(i=2;i<=7;i++)
    {
        z = pow(y,i);
        s = z/2;
        res = res + s;
    }
    
    res = y + res;
    printf("Result: %f",res);
}
