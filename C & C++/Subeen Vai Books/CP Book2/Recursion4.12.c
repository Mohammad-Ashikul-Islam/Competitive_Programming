#include<stdio.h>

f_calls = 0;
int factorial(int n)
{
    f_calls = f_calls+1;
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Undefined\n");
        return 0;
    }
    printf("Factorial Of %d Is %d\n",n,factorial(n));

    printf("Number Of Factorial Calls: %d\n",f_calls);
    return 0;
}
