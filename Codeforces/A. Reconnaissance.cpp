#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,d,c=0;
    cin >> n >> d;
    long long ara[n];
    for(ll i=0; i<n; i++) cin >> ara[i];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(i==j) continue;
            if(abs(ara[i]-ara[j])<=d) c++;
        }
    }
    if(n==1) cout << 0 << endl;
    else cout << c << endl;
    return 0;
}
