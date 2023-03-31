#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,a,b,sum=0;
        cin >> n >> a >> b;
        for(ll i=1; i<=n; i++){
            if(i%2==0) sum = sum+a;
            else sum=sum+b;
        }
        cout << sum << endl;
    }
    return 0;
}
