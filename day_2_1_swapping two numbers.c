#include <stdio.h>
int main()
{
	int x,y;
	printf("enter value of x");
	scanf("%d",&x);
	printf("\nenter value of y");
	scanf("%d",&y);
	int temp = x;
	x = y;
	y = temp;
	printf("\nAfter swapping: x = %d, y = %d",y);
	return 0;
}
