#include<stdio.h>
#include<conio.h>
int main ()
{
   int Exp=0,Pow=0,Base=0,Temp=0;

   printf("Enter the base:\n");
   scanf("%d",&Base);

   printf("Enter the exponent:\n");
   scanf("%d",&Exp);

   if(Base==0 || Exp==1)
   {
     Pow=Base;
   }
   else
   {
      for(Pow=1,Temp=Exp;Temp>0;Temp--)
     {
        printf("\n pow=%d*%d=%d",Pow,Base,(Pow*Base));
        Pow=Pow*Base;
     }
   }

    printf("\n\n(%d)^(%d)=(%d)",Base,Exp,Pow);
   
    getche();
    return 0;
   
}