#include<stdio.h>
int main()
{
    int year;
    printf("Please Enter The Year: ");
    scanf("%d",&year);
    if(year%400==0 || (year%4==0 && year%100!=0)){
        printf("%d Is A Leap Year !\n",year);
    }
    else{
        printf("%d Is Not A Leap Year !\n",year);
    }
    return 0;
}
