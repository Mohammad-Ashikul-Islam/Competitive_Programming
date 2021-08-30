#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int t,n,temp,sum;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        sum = (((((n*567)/9)+7492)*235)/47)-498;
        temp = abs((sum/10)%10);
        printf("%lld\n",temp);
    }
    return 0;
}
