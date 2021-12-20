#include <stdio.h>
void display1 (int);
int main()
{
int i;
int marks[] = {55, 65, 75, 56, 78, 78, 90};
for (i = 0; i <= 6; i++)
display1 (marks[i]);
for (i = 0; i <= 6; i++)
return 0;
}
void display1 (int m)
{
printf (“%d ”, m);
}
