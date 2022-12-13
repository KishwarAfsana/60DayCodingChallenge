#include<stdio.h>
int main()
{
    printf("\n\n\t\t MANUU \n\n\n");
    int  num, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d",&num);
    printf("\n\n\nFactors of %d are \n\n", num);

    for(i = 1; i <= num/2; i++)
    {
        if(num%i == 0)
            printf("%d\n", i);
    }

    printf("\n\n\t\tKISHWAR\n\n\n");
    return 0;
}
