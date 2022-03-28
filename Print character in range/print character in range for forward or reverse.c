#include<stdio.h>
#include<conio.h>
int main ()
{
   char ch='\0',S_char='\0',E_char='\0';

   printf("Enter the range of characters:\n");

   printf("Enter the starting character:\n");
   S_char=getche();
  
   printf("\n");

   printf("Enter the ending character:\n");
   E_char=getche();
  
   printf("\n\n");

   printf("The characters are:\n");

   if(S_char<E_char)
   {
     printf("It's Forward range:\n");
     for(ch=S_char;ch<=E_char;ch++)
     {
        printf("%c\n",ch);
     }
   }

   else
   {
     printf("It's backward range:\n");
     for(ch=S_char;ch>=E_char;ch--)
     {
        printf("%c\n",ch);
     }
   }

   printf("Thanks!!!\n");

   getche ();
   return 0;
}
