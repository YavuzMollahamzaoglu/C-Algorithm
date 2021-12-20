#include<stdio.h>  
  
int main()  
{  
    int min, max, temp, count;  
  
    printf("Enter 2 positive numbers\n");  
    scanf("%d%d", &min, &max);  
  
    if(min > max)  
    {  
        temp = min;  
        min  = max;  
        max  = temp;  
    }  
  
    printf("Natural numbers from %d to %d are:\n", min, max);  
  
    for(count = min; count <= max; count++)  
    {  
        printf("%d\n", count);  
    }  
  
    return 0;  
}  
