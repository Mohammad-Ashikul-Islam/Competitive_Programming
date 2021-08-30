#include<bits/stdc++.h>
using namespace std;
#define mx 50000
vector<int> primes;
void seieve()
{
    bool isp[mx+4];
    int i,j;
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
bool cmp(int f,int n)
{
    int temp,cn,cf,i,l=primes.size();
    for(i=0; (i<l)&&((primes[i]*primes[i])<=n); i++){
        temp=primes[i];
        if(n%temp==0){
            cn=0; cf=0;
            while(n%temp==0){
                cn++;
                n /=temp;
            }
            while(f/temp){
                cf+=f/temp;
                temp = temp*primes[i];
            }
        if(cn>cf) return false;
        }
    }
    if(n!=1){
           if(n>f) return false;
    }
    return true;
}
int main()
{
    seieve();
    int f,n;
    while(scanf("%d %d",&f,&n)!=EOF){
        if(n<=1) printf("%d divides %d!\n", n, f);
        else if(n<=f) printf("%d divides %d!\n",n,f);
        else{
        bool b=cmp(f,n);
        if(b==true) printf("%d divides %d!\n",n,f);
        else printf("%d does not divide %d!\n",n,f);
        }
    }
    return 0;
}
