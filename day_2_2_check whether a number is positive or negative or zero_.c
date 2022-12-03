#include<stdio.h>
int main()
{
	int A;
	printf("Enter the number A:");
	scanf("%d is ", &A);
	if(A>0)
		printf("%d is posistive.",A);
	else if(A<0)
		printf("%d is Negative.",A);
	else if(A==0)
		printf("%d is zero.",A);
	return 0;	
	
}
