#include<stdio.h>
#include<conio.h>

struct ABC
{
    char nm[20];
    int a;
    float per;
    double j;
};
int main()
{
    struct ABC* obj;

    printf("\nThe size stucture pointer = %d",sizeof(obj));

    getch();
    return 0;
}
