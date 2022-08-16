#include<stdio.h>
#include<conio.h>
void valueIncr(int);

int main()
{
    int num=0;
    printf("\nEnter a value:");
    scanf("%d",&num);

    valueIncr(num);

    printf("\n\nBack inside main.");
    printf("\nPress any key to see new value!!!");
    getch();

    printf("\n\nValue of given number after function call = %d",num);

    getch();
    return 0;
}
void valueIncr(int no)
{
    printf("\nWelcome inside function,Value received = %d",no);

    no++;

    printf("\nBye Bye value changed by function = %d",no);
}
