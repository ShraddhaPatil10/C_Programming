#include<stdio.h>
#include<conio.h>
int main ()
{
   int Num=0,Mcnt=0,i=0,Mark=0;
   printf("Enter the marks:\n");
   scanf("%d",&Mark);

   printf("Enter 10 Students Marks to find %d marks students in it=>\n",Mark);

   for(i=0;i<10;i++)
   {
      printf("Enter Number %d =",i);
      scanf("%d",&Num);
     
      if(Num==Mark)
      {
         Mcnt++;
      }
   }
    printf("Count of Entered number %d = %d",Mark,Mcnt);
    
    getch();
    return 0;
}