#include<stdio.h>
int main()
{
    long long x,n,sum,i;
    printf("Enter the value of x and n: ");
    scanf("%lld%lld",&x,&n);
    sum = 1;
    for(i=0; i<n; i++) sum *= x;
    printf("Result is: %lld\n",sum);
    return 0;
}
