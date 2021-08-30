#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
vector<ll> primes;
void fnc()
{
    ll mx=1000000005;
    bool b[mx];
    for(ll i=0; i<mx; i++) b[mx]=false;
    //for(ll i=2; i<=mx; i+=2) b[i]=false;
    primes.push_back(2);
    for(ll i=3; i*i<=mx; i+=2){
        if(b[i]==false){
            for(ll j=i; j<=mx; j+=i)b[j]=true;
        }
    }
    for(ll i=3; i<=mx; i+=2){
        if(b[i]==false) primes.push_back(i);
    }
}
ll temp(ll sum)
{
    for(ll i=0; primes[i]*primes[i]<=sum; i++){
        if(sum%primes[i]==0) return primes[i];
    }
    return sum;
}
int main()
{
    fnc();
    ll t;
    cin >> t;
    while(t--){
        ll n,k,i,sum;
        cin >> n >> k;
        sum=n;
        for(i=1; i<=k; i++){
            sum+=temp(sum);
        }
        cout << sum << endl;
    }
    return 0;
}
