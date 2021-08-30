#include<bits/stdc++.h>
using namespace std;
const int mx =  1000005;
const int sx= (int)(mx/32)+5;
int ara[sx];
vector<int> primes;

bool check(int ind,int pos){return (bool)(ara[ind]&(1<<pos));}
void change(int ind,int pos){ara[ind]= (ara[ind]|(1<<pos)); }

void bsv()
{
    long long i,j;
    for(i=3; i*i <mx; i+=2){
            if(check(i>>5,i&31)==0){
                for(j=i+i; j<mx; j+=i) change(j>>5,j&31);

        }
    }
    for(i=3; i<mx-4; i+=2){
            if(i==5) continue;
        if((check(i>>5,i&31)==0)) primes.push_back(i);
    }
}
long long ls(long long lcm,long long p)
{
    lcm = (lcm)*(p);
    return lcm%10;
}
long long fnc(int n){
    long long i,lcm=1;
    for(i=0; (i<primes.size())&&(primes[i]<=n); i++){
        long long temp=primes[i];
        while(n/temp){
            lcm = ls(lcm,primes[i]%10);
            temp *= primes[i];
        }

    }
    return lcm%10;
}
long long htf(long long n,long long lcm)
{
    long long t=2,f=5,ct=0,cf=0;
    while(n/t){
        ct += 1;
        t *= 2;
    }
   while(n/f){
        cf += 1;
        f *= 5;
    }
    ct = ct-cf;
    for(f=0; f<ct; f++){
        lcm = (lcm*2);
        if(lcm%10==0){
            while(lcm%10==0) lcm=lcm/10;
        }
        lcm = lcm%10;
    }
    return lcm;
}
int main()
{
    bsv();
    int n;
    while(scanf("%d",&n)){
        if(n==0) break;
        long long ans=fnc(n);
        ans = htf(n,ans);
        cout <<ans<<endl;
    }
    return 0;
}
