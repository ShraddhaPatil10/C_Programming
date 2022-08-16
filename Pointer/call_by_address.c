#include<stdio.h>
#include<conio.h>

void originalIncr(int*);

int main()
{
    int num=0;

    printf("\nEnter the value:");
    scanf("%d",&num);

    originalIncr(&num);

    printf("\n\nBack to main.");
    printf("\nPress any key to continue!!!");
    getch();

    printf("\n\nValue of given number after function call = %d",num);

    getch();
    return 0;
}
void originalIncr(int *IP)
{
    printf("\nWelcome to inside function,value received = %d",*IP);

    (*IP)++;

    printf("\nBye Bye value changed by function = %d",*IP);

}
