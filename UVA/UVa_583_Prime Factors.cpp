#include<bits/stdc++.h>
using namespace std;
#define mx 46345
void seieve(vector <int> &primes)
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
    primes.push_back(2);
    for(i=3; i<=mx; i+=2){
        if(isp[i]) primes.push_back(i);
    }
}
void fnc(long long n,vector <int> &primes)
{
    bool k=false;
    if(n==1) { printf("1 = 1"); return; }
    else if(n==-1) { printf("-1 = -1"); return; }
    if(n<-1){   printf("%lld = -1",n); n*=-1;}
    else if(n>1){ printf("%lld =",n); k=true;}
    long long i,temp;
    for(i=0; primes[i]*primes[i]<=n; i++){
            if(i>=primes.size()) break;
            temp=primes[i];
        if(n%temp==0){
            while(n%temp==0){
                if(k==true){
                     printf(" %lld", temp); k=false;
                     }
                else printf(" x %lld", temp);
                n /= temp;
            }
        }
    }
    if(k==true)printf(" %lld",n);
    else if(n!=1) printf(" x %lld",n);
}
int main()
{
    vector <int> primes;
    seieve(primes);
    long long n;
    while(scanf("%lld",&n)){
        if(n==0) break;
            fnc(n,primes);
            printf("\n");
    }
    return 0;
}
