#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo=21,*iPtr1=&iNo,*iPtr2=&iNo;

    printf("\nValue of iNo using its pointer iPtr1 = %d",*iPtr1);
    printf("\nAddress of iNo using iPtr1 = %d",iPtr1);
    printf("\nAddress of iPtr1 = %d",&iPtr1);

    printf("\n\nValue of iNo using its pointer iPtr2 = %d",*iPtr2);
    printf("\nAddress of iNo using iPtr2 = %d",iPtr2);
    printf("\nAddress of iPtr2 = %d",&iPtr2);

    iNo=55;
    printf("\n**************************************************************************************\n");

    printf("\nNew value of iNo using its pointer iPtr1 = %d",*iPtr1);
    printf("\nNew value of iNo using  its pointer iPtr2 = %d",*iPtr2);

    printf("\n**************************************************************************************\n");
    getch();

    *iPtr1=101;

    printf("\nNew value of iNo = %d",iNo);
    printf("\nValue of variable using its pointer iPtr2 = %d",*iPtr2);
    printf("\nValue of iNo using its pointer iPtr1 = %d",*iPtr1);
    printf("\n***************************************************************************************\n");

    getch();
    return 0;


}
