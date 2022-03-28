#include<stdio.h>
#include<conio.h>
int main ()
{
    char letter='\0';
    
    printf("Enter letter to check vowel or consonant:\n ");
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
            
       case 'B':
       case 'b':
       case 'C':
       case 'c':
       case 'D':
       case 'd':
       case 'F':
       case 'f':
       case 'G':
       case 'g':
       case 'H':
       case 'h':
       case 'J':
       case 'j':
       case 'K':
       case 'k':
       case 'L':
       case 'l':
       case 'P':
       case 'p':              
       case 'Q':
       case 'q':
       case 'R':
       case 'r':
       case 'S':
       case 's':
       case 'T':
       case 't':
       case 'V':
       case 'v':
       case 'W':
       case 'w':
       case 'X':
       case 'x':
       case 'Y':
       case 'y':
       case 'Z':
       case 'z':
               printf("%c is consonant\n",letter);
               break;
              
       default:
              printf("Enter correct input!!!\n");
            
      }
    
      getch();
      return 0;
}