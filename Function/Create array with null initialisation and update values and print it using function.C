#include<stdio.h>
#include<conio.h>

int values[5]={};

void Display_Array();

int main()
{
    Display_Array();
    
    getch();
    
    values[0]=55;
    values[2]=40;
    values[4]=90;
    
    printf("\n\nThe new values=>\n\n");
    Display_Array();
    
    getch();
    return 0;
}

void Display_Array()
{
    
    printf("\nThe value of 1st element = %d", values[0]);
    printf("\nThe value of 2nd element = %d", values[1]);
    printf("\nThe value of 3rd element = %d", values[2]);
    printf("\nThe value of 4th element = %d", values[3]);
    printf("\nThe value of 5th element = %d", values[4]);
    
    return ;
}