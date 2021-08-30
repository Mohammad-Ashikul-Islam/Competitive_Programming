#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,end) for(index=start; index<end; index++)
int main()
{
    ll t;
    cin >>t;
    while(t--){
        ll n,r,i;
        cin >>n >> r;
        ll ara[n],sum=0;
        loop(i,0,n) cin >>ara[i];
        for(i=0; i<n-1; i++){
            if(ara[i]%r==0) continue;
            sum=sum+ (ara[i]-((ara[i]/r)*r) );
        }
        sum+=ara[n-1];
        cout << sum%r << endl;

    }
    return 0;
}
