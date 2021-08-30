#include<bits/stdc++.h>
using namespace std;
#define mx 46345
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
    primes.push_back(2);
    for(i=3; i<=mx; i+=2){
        if(isp[i]) primes.push_back(i);
    }
}
void factors(long long n,vector <long long> &s)
{
    long long i,temp;
    for(i=0; primes[i]*primes[i]<=n; i++){
            if(i>=primes.size()) break;
            temp=primes[i];
        if(n%temp==0){
            while(n%temp==0){
                s.push_back(temp);
                n /= temp;
            }
        }
    }
    if(n!=1) s.push_back(n);
}
bool cmp(vector <long long> s1,vector <long long> s2)
{
    long long j=-1;
    for(long long i=0; i<s1.size(); i++){
        bool k=false;
        for(j=0; j<s2.size(); j++){
            if(s1[i]==s2[j]){ k=true; s2[j]=0; break;}
        }
        if(k==false) return false;
    }
    return true;
}
int main()
{
    seieve();
    long long f,n;
    while(scanf("%lld %lld",&f,&n)){
        if(n==0) printf("0 does not divide %lld!\n",f);
        else if((f==0 || f==1) && n==1) printf("1 divides 0!\n");
        else{
        vector<long long> s1,s2;
        factors(n,s1);
        for(long long i=2; i<=f; i++) factors(i,s2);
        bool b=cmp(s1,s2);
        if(b==true) printf("%lld divides %lld!\n",n,f);
        else printf("%lld does not divide %lld!\n",n,f);
        }
    }
    return 0;
}
