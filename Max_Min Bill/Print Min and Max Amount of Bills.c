#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, Amount=0,Min_Bill=0,Max_Bill=0;
   
    for(i=0;i<10;i++)
    {
       printf("Enter Bill Number %d =",i);
       scanf("%d", &Amount);
    
       if((i==1) || (Amount<Min_Bill))
       {
    
          Min_Bill=Amount;
       }
       if((i==1) || (Amount>Max_Bill))
       {
        
          Max_Bill=Amount;
       }
    }
      
    printf("Minimum Bill Amount = %d\n",Min_Bill);
    printf("Maximum Bill Amount = %d\n",Max_Bill);
    
    getch();
    return 0;
}