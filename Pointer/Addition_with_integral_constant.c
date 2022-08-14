#include<stdio.h>
#include<conio.h>

int main()
{
    int num[5]={45,76,89,34,55};
    int *ptr=&num;

    printf("\nBase address of array is = %d",num);
    printf("\nThe value of pointer = %d",ptr);
    printf("\nThe value of array element where pointer is pointing = %d",*ptr);

    printf("\n\nPress any key to continue!!!\n");
    getch();

    ptr=ptr+3;

    printf("\nThe value of pointer = %d",ptr);
    printf("\nThe value of array element where pointer is pointing = %d",*ptr);

    getch();
    return 0;
}
