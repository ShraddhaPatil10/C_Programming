#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo=21,*iPtr1=&iNo,*iPtr2=&iNo;

    printf("\nAddress of iNo = %d",&iNo);
    printf("\nAddress of iPtr1 = %d",&iPtr1);
    printf("\nAddress of iPtr2 = %d",&iPtr2);

    getch();
    return 0;
}
