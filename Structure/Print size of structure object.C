#include<stdio.h>
#include<conio.h>

struct student
{
    int Roll_No;
    char SName[24];
    float Per;
    char course[16];
};

int main ()
{
    int num;
    struct student std1;
    
    printf("Size of int variable = %d\n",sizeof(num));
    printf("Size of structure object = %d\n",sizeof(std1));
    
    getch();
    return 0;
 }
    