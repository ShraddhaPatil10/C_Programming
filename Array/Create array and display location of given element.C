#include<stdio.h>
#include<conio.h>
#define size 5

int main ()
{
    int i=0,Ele=0,Bill[size]={};
    
    for(i=0;i<size;i++)
    {
       printf("Enter Bill no %d=",(i+1));
       scanf("%d",&Bill[i]);
   }
   getch();

   printf("Enter Element to be searched in array=\n");
   scanf("%d",&Ele);

   for(i=0;i<size;i++)
   {
      if(Bill[i]==Ele)
      {
         break;
      }
  }

  if(i==size)
  {
     printf("No such element found in array\n");
  }
  else
  {
     printf("Element %d found at Index %d",Ele,(i+1));
   }

   getch();
   return 0;
}