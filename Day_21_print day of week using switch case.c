#include<stdio.h>
main()
{
 int choice;

 printf("Monday Will be First Days and So On\n\n");
 printf("Enter Any Number Between (1 to 7):");
 
 scanf("%d",&choice);
 printf("\n");
 
 switch(choice)
 {
  case  1:
   printf("Today is Monday");
   break;
  case  2:
   printf("Today is Tuesday");
   break;
  case  3:
   printf("Today is Wednesday");
   break;
  case  4:
   printf("Today is Thursday");
   break;
  case  5:
   printf("Today is Friday");
   break;
  case  6:
   printf("Today is Saturday");
   break;
  case  7:
   printf("Today is Sunday");
   break;
  default:
  printf("Don't Be Smart....Wrong Choice Try Again!!!");
 }
 getch();
}
