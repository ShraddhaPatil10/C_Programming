#include<stdio.h>
#include<conio.h>
#define size 10

int main ()
{
   int i=0,Bill[size]={0};

   for(i=0;i<size;i++)
   {
      printf("Enter Bill no %d=",(i+1));
      scanf("%d",&Bill[i]);
   }
   
   getch();
   system("cls");

   printf("Elements in array are=>\n\n");

   for(i=0;i<size;i++)
   {
      printf("Amount in Bill no %d = %d\n",(i+1001),Bill[i]);
    }
    
    getch();
    return 0;
}