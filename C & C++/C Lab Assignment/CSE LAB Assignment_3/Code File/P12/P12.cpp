#include<stdio.h>
int f(int a)
{
    if(a==0)
    return 1;
    return a*f(a-1);
}
int main()
{
    int n;
    printf("Please enter the number:  ");
    scanf("%d",&n);
    if(n<0)
    printf("Invalid number\n");
    else{
        printf("Factorial of %d is: %d\n",n,f(n));
        }
    return 0;
}
