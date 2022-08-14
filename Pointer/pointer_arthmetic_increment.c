#include<stdio.h>
#include<conio.h>

int main()
{
    int num[5]={78,45,23,89,90};
    int *ptr=&num;

    printf("\nBase address of array is = %d",num);
    printf("\nValue of pointer is = %d",ptr);
    printf("\nValue of array element where pointer is pointing = %d",*ptr);

    printf("\n\nPress any key to continue!!!!\n");
    getch();

    ptr++;

    printf("\nNew value of pointer is = %d",ptr);
    printf("\nValue of array element where ponter is pointing = %d",*ptr);

    getch();
    return 0;
}
