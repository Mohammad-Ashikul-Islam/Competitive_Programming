#include<stdio.h>
int main()
{
    struct student{
        int id;
        char name[50];
    };
    struct student one;
    one.id = 1;
    one.name = "Ashikul Islam";
    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.id);
    return 0;
}
