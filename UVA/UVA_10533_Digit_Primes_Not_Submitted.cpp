#include<bits/stdc++.h>
using namespace std;
bool ara[1000000];
void fnc(long long n)
{
    long long i,sum;
    ara[0] = ara[1] = 1;
    for(i=4; i<=n; i=i+2) ara[i] = 1;
    for(i=3; i<=sqrt(n); i=i+2){
            if(ara[i]==0){
            for(sum=i+i; sum<=n; sum+=i){
                ara[sum] = 1;
            }
            }
    }
}
int main()
{
    long long t,a,b,count,p,temp,sum;
    fnc(1000000);
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        count = 0;
        a = min(a,b);
        b = max(a,b);
        for(; a<=b; a++){
            if(ara[a]==0){
                p=a;
                sum = 0;
                while(p!=0){
                    sum += p%10;
                    p /= 10;
                }
                if(ara[sum]==0) count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}

