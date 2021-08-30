#include<stdio.h>
int main()
{
    int num;
    printf("Please Enter A Number: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%d Is A Even Number !\n",num);
    }
    else{
        printf("%d Is A Odd Number !\n",num);
    }
    return 0;
}
