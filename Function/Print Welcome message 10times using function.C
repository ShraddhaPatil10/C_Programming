#include<stdio.h>
#include<conio.h>

void Display();

int main()
{
     Display();
      
     getch();
     return 0;
}

void Display()
{
    int i=0;
    
    for(i=1;i<=10;i++)
    {
        printf("\nWELCOME");
    }
     
    return;
}