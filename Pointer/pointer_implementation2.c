#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo=21,iNum=55;
    int *iPtr1=&iNo;
    int *iPtr2=&iNo;

    printf("\nValue of iNo = %d",iNo);
    printf("\nAddress of iNo = %d",&iNo);
    printf("\nValue of iNo using its pointer iPtr1 = %d",*iPtr1);
    printf("\nAddress of iPtr1 = %d",&iPtr1);

    printf("\n\nValue of iNum = %d",iNum);
    printf("\nAdress of iNum = %d",&iNum);
    printf("\nValue of variable using its pointer iPtr2 = %d",*iPtr2);
    printf("\nAdress of variable using iPtr = %d",iPtr2);
    printf("\nAdress of iPtr2 = %d",&iPtr2);

    getch();
    return 0;
}
