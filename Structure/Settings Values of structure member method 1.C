#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int Roll_No;
    char SName[24];
    float Per;
    char Course [16];
    char Grade;
};

int main ()
{
    struct student std1;
    
    std1.Roll_No=15;
    strcpy(std1.SName,"Harry Potter");
    std1.Per=86.7243;
    strcpy(std1.Course,"BBA");
    std1.Grade='A';
    
    printf("\n Student Details Given=>\n");
    
    getch();
    
    printf("\n Roll No     :%d",std1.Roll_No);
    printf("\n Student Name:%s",std1.SName);
    printf("\n Percentage  :%0.2f",std1.Per);
    printf("\n Course      :%s",std1.Course);
    printf("\n Grade       :%c",std1.Grade);
    
    getch();
    return 0;
}