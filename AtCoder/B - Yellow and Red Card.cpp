#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,k;
    cin >> n >> k;
    n++;
    int ara[n+1] = {0};
    for(ll i=0; i<k; i++){
        ll x,y;
        cin >> y >> x;
        if(y==3){
            if(ara[x]>=2) cout << "Yes\n";
            else cout << "No\n";
            continue;
        }
        if(y==2) ara[x] +=2;
        else if(y==1) ara[x]+=1;
    }
    return 0;
}
