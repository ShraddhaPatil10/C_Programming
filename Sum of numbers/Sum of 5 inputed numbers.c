#include<stdio.h>
#include<conio.h>
int main ()
{
    int Num=0,Sum=0,i=0;
    printf("Enter five numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&Num);
        Sum=Sum+Num;
    }
    printf("The Addition = %d",Sum);
    
    getch();
    return 0;
}
    