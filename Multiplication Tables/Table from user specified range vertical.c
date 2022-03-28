#include<stdio.h>
#include<conio.h>
int main ()
{
   int Num=0,cnt=0,S_Num,E_Num;
   printf("Enter a range to print table:\n");
   
   printf("Enter starting number:\n");
   scanf("%d",&S_Num);

   printf("Enter ending number:\n");
   scanf("%d",&E_Num);

   printf("\n\n");
   printf("***********Multiplication Table*********");

   if(S_Num<E_Num)
   {
     for(cnt=1;cnt<=10;cnt++)
     {
       for(Num=S_Num;Num<=E_Num;Num++)
       {
          printf(" %2d ",(Num*cnt));
       }
       printf("\n");
     }  
    }
    else
    {
       for(cnt=1;cnt<=10;cnt++)
       {
         for(Num=S_Num;Num>=E_Num;Num--)
         {
           printf(" %2d ",(Num*cnt));
         }
         printf("\n");
      }
    }
    
    printf("************Multiplication Table********");

    printf("Thanks!!!\n");
   getch();
   return 0;

}