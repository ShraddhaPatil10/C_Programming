#include<stdio.h>
#include<conio.h>

int main()
{
    int no=60,num=100;

    int *Ptr1=&no;
    int *Ptr2=&no;

    printf("\nThe value of no = %d\n",no);
    printf("The address of no = %d\n",&no);
    printf("The value of Ptr1 = %d\n",Ptr1);
    printf("The address of Ptr1 = %d\n",&Ptr1);
    printf("The value of *Ptr1 = %d\n",*Ptr1);

    getch();
    return 0;


}
