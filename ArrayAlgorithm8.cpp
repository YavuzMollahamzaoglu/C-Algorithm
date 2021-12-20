#include <stdio.h>

void BubbleSort()
{
    int i, j, temp,array_size;
    printf("Please enter size of array:");
    scanf("%d",&array_size);
    int a[array_size];
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d",a[i]);
}

int main(){
	
	BubbleSort();
	return 0;
}
