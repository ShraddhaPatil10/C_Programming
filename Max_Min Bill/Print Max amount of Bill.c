#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, Amount=0,Max_Bill=0;
   
    for(i=0;i<10;i++)
    {
       printf("Enter Bill Number %d =",i);
       scanf("%d", &Amount);
    
       if((i==1) || (Amount>Max_Bill))
       {
          printf("Max Updated\n");
          Max_Bill=Amount;
       }
    }
      
    printf("Maximum Bill Amount = %d",Max_Bill);
    
    getch();
    return 0;
}