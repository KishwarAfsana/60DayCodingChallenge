#include<stdio.h>
int main()
{
    printf("\n Average of N numbers\n");

    int n, i;
    float sum = 0, x;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\n Enter %d elements", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("\n Average of the entered numbers is =  %f", (sum));
    printf("\n MANUU ");
    return 0;
}
