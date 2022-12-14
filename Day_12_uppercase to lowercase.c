#include<stdio.h>
#include<conio.h>
int main()
{
    char upperChar, lowerChar;
    int ascii;
    printf("Enter an uppercase Character: ");
    scanf("%c", &upperChar);
    ascii = upperChar;
    lowerChar = ascii+32;
    printf("\n Its Lowercase = %c", lowerChar);
    getch();
    return 0;
}
