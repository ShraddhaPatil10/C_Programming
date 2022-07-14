#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);

int main ()
{
     int values[5]={0};
    
     Accept_Array(values);
    
     printf("\nBack to main");
     printf("\nPress any key to move ahead");
    
     getch();
     
     Display_Array(values);
    
     getch();
     return 0;
}

void Accept_Array(int Num[])
{
      printf("\nEnter element No 1 =");
      scanf("%d",&Num[0]);
    
      printf("\nEnter element No 2 =");
      scanf("%d",&Num[1]);
    
      printf("\nEnter element No 3 =");
      scanf("%d",&Num[2]);
    
      printf("\nEnter element No 4 =");
      scanf("%d",&Num[3]);
    
      printf("\nEnter element No 5 =");
      scanf("%d",&Num[4]);
    
      return;
}

void Display_Array(int Arr[])
{
     printf("\n\nElements in array are=>\n\n");
    
     printf("\nValue of 101 element = %d",Arr[0]);
     printf("\nValue of 102 element = %d",Arr[1]);
     printf("\nValue of 103 element = %d",Arr[2]);
     printf("\nValue of 104 element = %d",Arr[3]);
     printf("\nValue of 105 element = %d",Arr[4]);
     
     return;
}
     

     



    
    