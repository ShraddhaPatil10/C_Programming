#include<stdio.h>
#include<conio.h>

int main()
{
    int num[5]={45,67,33,98,55};

    int *ptr=&num[4];

    printf("\nBase address of array is = %d",num);
    printf("\nThe value of pointer is = %d",ptr);
    printf("\nThe value of element where pointer is pointing = %d",*ptr);

    printf("\n\nPress any key to continue!!!\n");
    getch();

    ptr--;

    printf("\nNew value of pointer is = %d",ptr);
    printf("\nValue of array element where pointer is pointing = %d",*ptr);
    getch();
    return 0;
}
