#include<stdio.h>
#include<conio.h>
int main ()
{
   int Day=0;
   printf("Enter the day number to get day name:\n");
   scanf("%d",&Day);

   if(Day==1)
   {
      printf("Monday\n");
   }
   else if(Day==2)
   {
      printf("Tuesday\n");
   }
   else if(Day==3)
   {
      printf("Wednesday\n");
   }
   else if(Day==4)
   {
      printf("Thursday\n");
   }
   else if(Day==5)
   {
      printf("Friday\n");
   }
   else if(Day==6)
   {
      printf("Saturday\n");
   }
   else if(Day==7)
   {
      printf("Sunday!!!\n");
      printf("It's holiday!!!\n");
   }
   else
   {
      printf("Enter correct input!!!\n");
    }
    
    printf("Thanks for visiting!!!");
    
    getch();
    return 0;
}
    