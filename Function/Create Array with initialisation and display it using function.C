#include<stdio.h>
#include<conio.h>

void Create_Array();

int main()
{
    Create_Array();
    getch();
    return 0;
}

void Create_Array()
{
    int values[5]={5,8,33,50,89};
    
    printf("\nThe value of 1st element = %d", values[0]);
    printf("\nThe value of 2nd element = %d", values[1]);
    printf("\nThe value of 3rd element = %d", values[2]);
    printf("\nThe value of 4th element = %d", values[3]);
    printf("\nThe value of 5th element = %d", values[4]);
    
    getch();
    return;
}