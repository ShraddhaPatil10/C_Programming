#include<stdio.h>
#include<conio.h>
int main ()
{
   char letter='\0';
   UP:
      printf("Enter the letter from A/a to D/d to print appropriate message:\n");
      letter=getche();
    
      printf("\n");
    
      switch (letter)
      {
          case 'A':
          case 'a':
                  printf("Welcome 🤗\n");
                  break;
            
          case 'B':
          case 'b':
                  printf("Good Day!!!\n");
                  break;
            
          case 'C':
          case 'c':
                  printf("Have a nice day!!!\n");
                  break;
            
          case 'D':
          case 'd':
                  printf("Good Bye!!!\n");
                  break;
            
          default:
                 printf("Enter correct input!!!\n");
                 
                 goto UP;
       }
    
}
            