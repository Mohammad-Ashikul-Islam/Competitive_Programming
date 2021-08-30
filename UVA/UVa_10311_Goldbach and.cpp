#include<bits/stdc++.h>
using namespace std;
#define mx 100000005
bool isp[mx+4];
void seieve()
{
    long long i,j;
    for(i=0; i<=mx;i++) isp[i]=true;
    isp[0]=false; isp[1]=false;
    for(i=2+2; i<=mx; i+=2) isp[i]=false;
    for(i=3; i*i<=mx; i+=2){
            if(isp[i]){
                for(j=i*i; j<=mx; j+=i) isp[j]=false;
            }
    }
}
long long fnc(long long n)
{
    for(long long i=n/2; i>=1; i--){
        if(isp[i]==true && isp[n-i]==true && i!=n-i){
            return i;
        }
    }
    return -1;
}
int main()
{
    seieve();
    long long n;
    while(scanf("%lld",&n)!=EOF){
        if(n>1 && n&1){
            if(isp[n-2]==true) printf("%lld is the sum of 2 and %lld.\n",n,n-2);
            else printf("%lld is not the sum of two primes!\n",n);
            continue;
        }
        long long b=fnc(n);
        if(b==-1) printf("%lld is not the sum of two primes!\n",n);
        else printf("%lld is the sum of %lld and %lld.\n",n,b,n-b);
    }
    return 0;
}


