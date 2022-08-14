#include<stdio.h>
#include<conio.h>

int main()
{
    int num[5]={23,56,34,88,90};

    int *ptr=&num;

    printf("\n%d",num);
    printf("\n%d",&num);
    printf("\n%d",ptr);
    printf("\n%d",&(num[0]));
    printf("\n%d",&(ptr[0]));

    getch();
    return 0;
}
