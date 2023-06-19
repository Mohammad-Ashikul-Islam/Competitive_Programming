#include<stdio.h>
int main()
{
    long long n,sum=0,x=1;
    printf("Enter the binary number: ");
    scanf("%lld",&n);
    while(n!=0){
        sum += (n%10)*x;
        n /= 10;
        x = x*2;
    }
    printf("\nDecimal number of the given binary number is: %lld\n",sum);
    return 0;
}
