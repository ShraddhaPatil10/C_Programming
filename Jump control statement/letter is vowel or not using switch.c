#include<stdio.h>
#include<conio.h>
int main ()
{
    char letter='\0';
    
    printf("Enter letter to check vowel or not:\n ");
    letter=getche();
    printf("\n");
    
    switch(letter)
    {
       case 'A':
       case 'a':
       case 'E':
       case 'e':
       case 'I':
       case 'i':
       case 'O':
       case 'o':
       case 'U':
       case 'u':
               printf("%c is vowel\n",letter);
               break;
            
       default:
              printf("%c is not vowel\n", letter);
            
      }
    
      getch();
      return 0;
}