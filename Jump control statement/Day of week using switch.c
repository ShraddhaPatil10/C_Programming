#include<stdio.h>
#include<conio.h>
int main ()
{
   int Day=0;

   printf("Enter the day number to get week Day name:\n");
   scanf("%d",&Day);

   switch(Day)
   {
      case 1:
            printf("It's Monday\n");
            break;
            
      case 2:
            printf("It's Tuesday\n");
            break;
            
      case 3:
            printf("It's Wednesday\n");
            break;
            
      case 4:
            printf("It's Thursday\n");
            break;
            
      case 5:
            printf("It's Friday\n");
            break;
            
      case 6:
            printf("It's Saturday\n");
            break;
            
      case 7:
            printf("It's Sunday\n");
            printf("Today is holiday!!!\n");
            break;
            
      default:
             printf("Enter proper input!!!\n");
    }
      
    printf("Thanks for Input\n");
    
    getch();
    return 0;
    
}
    