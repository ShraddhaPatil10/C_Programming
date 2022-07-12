#include<stdio.h>
#include<conio.h>

void Rev_Table(int);

int main()
{
    int Num=0;
    printf("\nEntet the number:\n");
    scanf("%d",&Num);
    
    Rev_Table(Num);
      
     getch();
     return 0;
}

void Rev_Table(No)
{
    int i=0;
    
    printf("\nMultiplication Table is =>\n");
    for(i=10;i>=1;i--)
    {
        printf("\n%d",No*i);
     }
    
     return;
}
       