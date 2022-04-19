#include <stdio.h>  
#include<conio.h>
int main ()
{
    int R=0,C=0;
    printf("Pattern Printing=>\n");
    
    for(R=1;R<=4;R++)
    {
       for(C=4;C>=1;C--)
       {
          printf(" * ");
       }
       printf("\n");
    }
    getch ();
    return 0;
}