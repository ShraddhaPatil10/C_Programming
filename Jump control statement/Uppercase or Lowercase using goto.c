#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    UP:
    
       printf("Enter the character:\n");
       ch=getche();
    
       printf("\n");
    
      if(ch>='A' && ch<='Z')
      {
         printf("%c is uppercase letter\n",ch);
      }
      else if(ch>='a' && ch<='z')
      {
         printf("%c is lowercase letter\n",ch);
      }
      else
      {
         printf("%c is special symbol\n",ch);
         goto UP;
      }
    
       printf("Thanks for input!!!");
    
       getch();
       return 0;
}