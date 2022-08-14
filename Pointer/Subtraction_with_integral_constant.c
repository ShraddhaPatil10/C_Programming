#include<stdio.h>
#include<conio.h>

int main()
{
    int num[5]={45,78,33,45,22};
    int *ptr=&num[4];

    printf("\nBase address of num = %d",num);
    printf("\nThe value of array element where pointer is pointing = %d",*ptr);
    printf("\nThe value of pointer = %d",ptr);

    printf("\n\nPress any key to continue!!!\n");
    getch();

    ptr=ptr-3;

    printf("\nThe value of pointer = %d",ptr);
    printf("\nThe value of array element where pointer is pointing = %d",*ptr);

    getch();
    return 0;
}
