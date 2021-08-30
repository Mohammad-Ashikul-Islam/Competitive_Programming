#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
vector<int> primes;
void seieve()
{
    bool isp[mx+4];
    long long i,j;
    for(i=0; i<=mx;i++) isp[i]=true;
    isp[0]=false; isp[1]=false;
    for(i=3; i*i<=mx; i+=2){
            if(isp[i]){
                for(j=i+i; j<=mx; j+=i) isp[j]=false;
            }
    }
    for(i=3; i<=mx; i+=2){
        if(isp[i]) primes.push_back(i);
    }
}
long long fnc(long long n)
{
    for(long long i=0; (primes[i]<n && i<primes.size()); i++){
        if(binary_search(primes.begin(),primes.end(),n-primes[i])) return primes[i];
    }
    return 0;
}
int main()
{
    seieve();
    long long n;
    while(scanf("%lld",&n)){
            if(n==0) break;
        long long b=fnc(n);
        if(b==0) printf("Goldbach's conjecture is wrong.\n");
        else printf("%lld = %lld + %lld\n",n,b,n-b);
    }
    return 0;
}

