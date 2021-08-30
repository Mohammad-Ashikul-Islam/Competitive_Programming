#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,end) for(index=start; index<end; index++)
int main()
{
    ll t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        ll ara[n],sum=0,i,ara1[n];
        loop(i,0,n) cin >>ara[i];
        loop(i,0,n) cin >> ara1[i];
        sort(ara,ara+n);
        sort(ara1,ara1+n);
        loop(i,0,n){
            sum+=min(ara1[i],ara[i]);
        }
        cout << sum << endl;
    }
    return 0;
}
