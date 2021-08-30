#include<stdio.h>
int f(int a)
{
    if(a==0)
    return 0;
    if(a==1 || a==2)
    return 1;
    return f(a-1)+f(a-2);
}
int main()
{
    int n;
    printf("Please enter the a number: ");
    scanf("%d",&n);
    if(n<0)
    printf("Invalid\n");
    else
    printf("Fibonacci Number Of The Given Number Is: %d\n",f(n));
    return 0;
}
